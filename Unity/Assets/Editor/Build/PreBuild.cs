using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using UnityEditor.iOS.Xcode;

namespace Rocket.Editor {

    public sealed class PreBuild : IPreprocessBuildWithReport {

        public int callbackOrder {
            get {
                return 0;
            }
        }

        public void OnPreprocessBuild(BuildReport report) {
            if ( report.summary.platform != BuildTarget.iOS ) {
                return;
            }

            PreprocessProject(
                Path.Combine(Build.XCProjectRoot, Build.XCProjectName, "project.pbxproj"),
                report.summary.outputPath
            );
        }

        private static void PreprocessProject(string projectPath, string srcDir) {
            if ( !File.Exists(projectPath) ) {
                return;
            }

            var pbx = new PBXProject();
            pbx.ReadFromFile(projectPath);

            RemoveFilesFromProject(pbx, srcDir, "Classes");
            RemoveFilesFromProject(pbx, srcDir, "Libraries");

            pbx.WriteToFile(projectPath);
        }

        private static void RemoveFilesFromProject(PBXProject pbx, string srcDir, string dirName) {
            var srcPath = Path.Combine(srcDir, dirName);

            var dstPath = Path.Combine(Build.XCTargetName, "Unity", Path.GetFileName(srcDir), dirName);
            var srcFiles = GetFilesRelative(srcPath);

            foreach ( var file in srcFiles ) {
                var pathInProj = Path.Combine(dstPath, file);
                var guid = pbx.FindFileGuidByProjectPath(pathInProj);

                if ( !string.IsNullOrEmpty(guid) ) {
                    pbx.RemoveFile(guid);
                }
            }
        }

        private static IEnumerable<string> GetFilesRelative(string directory) {
            if ( Directory.Exists(directory) ) {
                foreach ( var path in Directory.EnumerateFiles(directory, "*", SearchOption.AllDirectories) ) {
                    yield return path.Substring(directory.Length).TrimStart(Path.DirectorySeparatorChar);
                }
            }
        }

    }

}
