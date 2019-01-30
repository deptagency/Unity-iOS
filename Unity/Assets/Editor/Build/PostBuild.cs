using System;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEditor.iOS.Xcode;
using UnityEditor.iOS.Xcode.Extensions;
using UnityEngine;

namespace Rocket.Editor {

    // Adapted from https://github.com/jiulongw/swift-unity/blob/master/XcodePostBuild.cs
    public static class PostBuild {

        private const string ModifiedTag = "Modified by PostBuild.cs";

        [PostProcessBuild]
        public static void OnPostBuild(BuildTarget target, string pathToBuiltProject) {
            if ( target == BuildTarget.iOS ) {
                PatchUnityNativeCode(pathToBuiltProject);
                UpdateXcodeProject(pathToBuiltProject);
            }
        }

        private static void PatchUnityNativeCode(string pathToBuiltProject) {
            EditObjcRuntimeH(Path.Combine(pathToBuiltProject, "Classes", "Unity", "ObjCRuntime.h"));
            EditUnityAppControllerMM(Path.Combine(pathToBuiltProject, "Classes", "UnityAppController.mm"));
            EditLifecycleListenerH(Path.Combine(pathToBuiltProject, "Classes", "PluginBase", "LifeCycleListener.h"));

            if ( PlayerSettings.iOS.sdkVersion == iOSSdkVersion.DeviceSDK ) {
                EditVuforiaRenderDelegateMM(Path.Combine(pathToBuiltProject, "Libraries", "VuforiaRenderDelegate.mm"));
            }

            #if UNITY_2018_3_OR_NEWER
            EditDynamicLibEngineAPIMM(Path.Combine(pathToBuiltProject, "Classes", "DynamicLibEngineAPI.mm"));
            #endif
        }

        private static void EditObjcRuntimeH(string path) {
            EditFile(path, line => {
                return new string[] {
                    line.Replace(
                        "#define UNITY_OBJC_SEND_MSG(selectorType, msgSendFunc) msgSendFunc",
                        "#define UNITY_OBJC_SEND_MSG(selectorType, msgSendFunc) ((selectorType)msgSendFunc)"
                    )
                };
            });
        }

        private static void EditUnityAppControllerMM(string path) {
            EditFile(path, line => {
                // Strip print statements
                return line.TrimStart().StartsWith("::printf", StringComparison.Ordinal) ? (new string[0]) : (new string[] { line });
            });
        }

        private static void EditLifecycleListenerH(string path) {
            var alreadyModified = false;

            EditFile(path, line => {
                alreadyModified |= line.Contains(ModifiedTag);

                if ( !alreadyModified && line.TrimStart().StartsWith("void UnityRegisterLifeCycleListener", StringComparison.Ordinal) ) {
                    return new string[] {
                        "CF_EXTERN_C_BEGIN",
                        line
                    };
                }
                if ( !alreadyModified && line.TrimStart().StartsWith("void UnityUnregisterLifeCycleListener", StringComparison.Ordinal) ) {
                    return new string[] {
                        line,
                        "CF_EXTERN_C_END",
                    };
                }
                return new string[] { line };
            });
        }

        private static void EditDynamicLibEngineAPIMM(string path) {
            var alreadyModified = false;

            EditFile(path, line => {
                alreadyModified |= line.Contains(ModifiedTag);

                if ( !alreadyModified && line.Trim().Equals("#include \"Classes/iPhone_Sensors.h\"", StringComparison.Ordinal) ) {
                    return new string[] {
                        "\t#include \"iPhone_Sensors.h\"",
                    };
                }
                return new string[] { line };
            }, () => {
                return "\nextern \"C\" NSArray<NSString*>* GetLaunchImageNames(UIUserInterfaceIdiom idiom, const OrientationMask&supportedOrientations, const CGSize&screenSize, ScreenOrientation orient, float scale) {\n\treturn @[];\n\n}";
            });
        }

        private static void EditVuforiaRenderDelegateMM(string path) {
            EditFile(path, line => {
                return new string[] {
                    line.Replace(
                        "UnityRenderingSurface*",
                        "UnityDisplaySurfaceBase*"
                    )
                };
            });
        }

        private static void AddCompileGuards(string path) {
            var started = false;
            var alreadyModified = false;

            EditFile(path, line => {
                if ( !started ) {
                    alreadyModified = line.Contains(ModifiedTag);
                    started = true;

                    if ( !alreadyModified ) {
                        return new string[] {
                            "#import <TargetConditionals.h>",
                            "#if " + ((PlayerSettings.iOS.sdkVersion == iOSSdkVersion.DeviceSDK) ? "!" : "") + "TARGET_OS_SIMULATOR",
                            line
                        };
                    }
                }
                return new string[] { line };
            }, () => {
                return alreadyModified ? null : "#endif";
            });
        }

        private static void EditFile(string path, Func<string, IEnumerable<string>> lineHandler, Func<string> eofHandler = null) {
            if ( !File.Exists(path) ) {
                Debug.LogWarningFormat("Skipped editing {0} because the file doesn't exist", path);
                return;
            }

            var bakPath = path + ".bak";
            File.Move(path, bakPath);

            using ( var reader = File.OpenText(bakPath) )
            using ( var stream = File.Create(path) )
            using ( var writer = new StreamWriter(stream) ) {
                string inputLine;
                while ( (inputLine = reader.ReadLine()) != null ) {
                    var outputLines = lineHandler(inputLine);
                    foreach ( var outputLine in outputLines ) {
                        var writeLine = outputLine;

                        if ( outputLine != inputLine ) {
                            writeLine += " // " + ModifiedTag;
                        }
                        writer.WriteLine(writeLine);
                    }
                }

                if ( eofHandler != null ) {
                    var eof = eofHandler();

                    if ( !string.IsNullOrEmpty(eof) ) {
                        writer.WriteLine(eof + " // " + ModifiedTag);
                    }
                }
            }

            File.Delete(bakPath);
        }

        private static void UpdateXcodeProject(string pathToBuiltProject) {
            var pbx = new PBXProject();
            var pbxPath = Path.Combine(Build.XCProjectRoot, Build.XCProjectName, "project.pbxproj");
            pbx.ReadFromFile(pbxPath);

            Directory.CreateDirectory(Path.Combine(Build.XCProjectRoot, Build.XCTargetName, "Unity"));

            AddFilesToProject(pbx, pathToBuiltProject, "Classes");
            AddFilesToProject(pbx, pathToBuiltProject, "Libraries");

            if ( PlayerSettings.iOS.sdkVersion == iOSSdkVersion.DeviceSDK ) {
                AddFrameworksToProject(pbx, pathToBuiltProject);
            }
            else {
                AddDylibsToProject(pbx, pathToBuiltProject);
            }

            AddCopyDataPhaseToProject(pbx);

            pbx.WriteToFile(pbxPath);
        }

        private static void AddFilesToProject(PBXProject pbx, string pathToSrcProject, string dirName) {
            var targetGuid = pbx.TargetGuidByName(Build.XCTargetName);

            var srcPath = Path.Combine(pathToSrcProject, dirName);
            var relativeSrcPath = Path.Combine("..", pathToSrcProject.Remove(0, pathToSrcProject.LastIndexOf("Unity", StringComparison.OrdinalIgnoreCase)), dirName);

            var dstPath = Path.Combine(Build.XCTargetName, "Unity", Path.GetFileName(pathToSrcProject), dirName);
            var srcFiles = GetFilesRelative(srcPath);

            foreach ( var file in srcFiles ) {
                var relativePath = Path.Combine(relativeSrcPath, file);
                var pathInProj = Path.Combine(dstPath, file);

                AddCompileGuards(Path.Combine(srcPath, file));

                if ( !pbx.ContainsFileByProjectPath(pathInProj) ) {
                    pbx.AddFileToBuild(targetGuid, pbx.AddFile(relativePath, pathInProj, PBXSourceTree.Source));
                }
            }
        }

        private static void AddFrameworksToProject(PBXProject pbx, string pathToSrcProject) {
            var targetGuid = pbx.TargetGuidByName(Build.XCTargetName);

            var srcPath = Path.Combine(pathToSrcProject, "Frameworks");
            var dstPath = Path.Combine(Build.XCTargetName, "Unity", Path.GetFileName(pathToSrcProject), "Frameworks");

            foreach ( var frameworkPath in Directory.GetDirectories(srcPath, "*.framework") ) {
                var frameworkName = Path.GetFileName(frameworkPath);

                if ( !pbx.ContainsFramework(targetGuid, frameworkName) ) {
                    var relativePath = Path.Combine("..", frameworkPath.Remove(0, pathToSrcProject.LastIndexOf("Unity", StringComparison.OrdinalIgnoreCase)));
                    var frameworkGuid = pbx.AddFile(relativePath, Path.Combine(dstPath, frameworkName), PBXSourceTree.Source);
                    pbx.AddFileToEmbedFrameworks(targetGuid, frameworkGuid);
                }
            }
        }

        private static void AddDylibsToProject(PBXProject pbx, string pathToSrcProject) {
            var targetGuid = pbx.TargetGuidByName(Build.XCTargetName);

            var srcPath = Path.Combine(pathToSrcProject, "Libraries");
            var relativeSrcPath = Path.Combine("..", pathToSrcProject.Remove(0, pathToSrcProject.LastIndexOf("Unity", StringComparison.OrdinalIgnoreCase)), "Libraries");

            var dstPath = Path.Combine(Build.XCTargetName, "Unity", Path.GetFileName(pathToSrcProject), "Libraries");

            foreach ( var dylibPath in Directory.GetFiles(srcPath, "*.dylib") ) {
                var dylib = dylibPath.Substring(srcPath.Length).TrimStart(Path.DirectorySeparatorChar);
                var relativePath = Path.Combine(relativeSrcPath, dylib);
                var pathInProj = Path.Combine(dstPath, dylib);

                if ( !pbx.ContainsFileByProjectPath(pathInProj) ) {
                    pbx.AddFileToBuild(targetGuid, pbx.AddFile(relativePath, pathInProj, PBXSourceTree.Source));
                }
            }

            var phaseName = "Embed Unity Dylibs (Simulator Only)";
            var shell = "/bin/sh";
            var script = "if [[ \"${ARCHS}\" = \"x86_64\" ]]; then\n    cp -f ${UNITY_BUILD_DIR}/Libraries/*.dylib \"${TARGET_BUILD_DIR}/${PRODUCT_NAME}.${WRAPPER_EXTENSION}\";\nfi\n";

            if ( pbx.GetShellScriptBuildPhaseForTarget(targetGuid, phaseName, shell, script) == null ) {
                pbx.AddShellScriptBuildPhase(targetGuid, phaseName, shell, script);
            }
        }

        private static void AddCopyDataPhaseToProject(PBXProject pbx) {
            var targetGuid = pbx.TargetGuidByName(Build.XCTargetName);

            var phaseName = "Copy Unity Data";
            var shell = "/bin/sh";
            var script = "rm -rf \"${TARGET_BUILD_DIR}/${PRODUCT_NAME}.${WRAPPER_EXTENSION}/Data\";\ncp -Rf \"${UNITY_BUILD_DIR}/Data\" \"${TARGET_BUILD_DIR}/${PRODUCT_NAME}.${WRAPPER_EXTENSION}/Data\";\n";

            if ( pbx.GetShellScriptBuildPhaseForTarget(targetGuid, phaseName, shell, script) == null ) {
                pbx.AddShellScriptBuildPhase(targetGuid, phaseName, shell, script);
            }
        }

        private static IEnumerable<string> GetFilesRelative(string directory) {
            var excludedDirectories = new List<string> {
                "libil2cpp" + Path.DirectorySeparatorChar,
            };

            var excludedFileTypes = new List<string> {
                ".h",
                ".a",
                ".dylib",
            };

            var excludedFiles = new List<string> {
                "main.mm",
                "SplashScreen.mm",
            };

            // Only simulator builds build engine as a dylib
            if ( PlayerSettings.iOS.sdkVersion == iOSSdkVersion.DeviceSDK ) {
                excludedFiles.Add("DynamicLibEngineAPI.mm");
            }

            if ( Directory.Exists(directory) ) {
                foreach ( var path in Directory.EnumerateFiles(directory, "*", SearchOption.AllDirectories) ) {
                    var file = path.Substring(directory.Length).TrimStart(Path.DirectorySeparatorChar);

                    // Skip private files
                    if ( file.StartsWith(".", StringComparison.Ordinal) ) {
                        continue;
                    }

                    // Skip excluded directories
                    if ( excludedDirectories.Exists(dir => file.StartsWith(dir, StringComparison.OrdinalIgnoreCase)) ) {
                        continue;
                    }

                    // Skip excluded file types
                    if ( excludedFileTypes.Contains(Path.GetExtension(file)) ) {
                        continue;
                    }

                    // Skip excluded files
                    if ( excludedFiles.Contains(Path.GetFileName(file)) ) {
                        continue;
                    }

                    yield return file;
                }
            }
        }

    }

}
