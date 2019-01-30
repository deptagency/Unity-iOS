using System.Linq;
using System.IO;
using UnityEditor;

namespace Rocket.Editor {

    public static class Build {

        #region Public

        /// <summary>
        /// Path to the root directory of Xcode project.
        /// Current directory is the root directory of this Unity project, i.e. the directory of 'Assets' folder.
        /// </summary>
        public const string XCProjectRoot = "../iOS";

        /// <summary>
        /// Name of the Xcode project.
        /// </summary>
        public static string XCProjectName {
            get {
                var path = Directory.EnumerateDirectories(XCProjectRoot, "*.xcodeproj", SearchOption.TopDirectoryOnly).FirstOrDefault();
                return(path != null) ? Path.GetFileName(path) : null;
            }
        }

        /// <summary>
        /// Name of the app target in the Xcode project.
        /// </summary>
        /// NOTE: This assumes that app target name matches project name. Change this if otherwise.
        public static string XCTargetName => Path.GetFileNameWithoutExtension(XCProjectName);

        [MenuItem("Build/iOS %b")]
        public static void BuildIOS() {
            BuildIOSSimulator();
            BuildIOSDevice();
        }

        [MenuItem("Build/iOS-Device")]
        public static void BuildIOSDevice() {
            BuildPlayerOptions buildOptions = GetBuildOptions(false);
            buildOptions.locationPathName = "build/iOS";
            buildOptions.target = BuildTarget.iOS;
            buildOptions.options = BuildOptions.StrictMode;

            if ( EditorUserBuildSettings.development ) {
                buildOptions.options |= (BuildOptions.Development | BuildOptions.SymlinkLibraries);
            }

            var currentSDK = PlayerSettings.iOS.sdkVersion;
            SetiOSSDK(iOSSdkVersion.DeviceSDK);

            BuildPipeline.BuildPlayer(buildOptions);

            SetiOSSDK(currentSDK);
        }

        [MenuItem("Build/iOS Simulator")]
        public static void BuildIOSSimulator() {
            BuildPlayerOptions buildOptions = GetBuildOptions(true);
            buildOptions.locationPathName = "build/iOS-Simulator";
            buildOptions.target = BuildTarget.iOS;
            buildOptions.options = BuildOptions.StrictMode;

            if ( EditorUserBuildSettings.development ) {
                buildOptions.options |= (BuildOptions.Development | BuildOptions.SymlinkLibraries);
            }

            var currentSDK = PlayerSettings.iOS.sdkVersion;
            SetiOSSDK(iOSSdkVersion.SimulatorSDK);

            BuildPipeline.BuildPlayer(buildOptions);

            SetiOSSDK(currentSDK);
        }

        #endregion
        #region Private

        private static void SetiOSSDK(iOSSdkVersion sdk) {
            PlayerSettings.iOS.sdkVersion = sdk;

            switch ( sdk ) {
            case iOSSdkVersion.SimulatorSDK:
                PlayerSettings.SetPlatformVuforiaEnabled(BuildTargetGroup.iOS, false);
                PlayerSettings.SetScriptingDefineSymbolsForGroup(BuildTargetGroup.iOS, "TARGET_OS_SIMULATOR");
                PlayerSettings.stripEngineCode = false;
                break;

            default:
                PlayerSettings.SetPlatformVuforiaEnabled(BuildTargetGroup.iOS, true);
                PlayerSettings.SetScriptingDefineSymbolsForGroup(BuildTargetGroup.iOS, string.Empty);
                PlayerSettings.stripEngineCode = true;
                break;
            }
        }

        private static BuildPlayerOptions GetBuildOptions(bool simulator) {
            var query = simulator ? "l:Scene-Simulator" : "l:Scene-Device";
            BuildPlayerOptions buildOptions = new BuildPlayerOptions {
                scenes = AssetDatabase.FindAssets(query).Select(AssetDatabase.GUIDToAssetPath).OrderBy(Path.GetFileName).ToArray(),
                options = BuildOptions.AutoRunPlayer
            };
            return buildOptions;
        }

        #endregion

    }

}
