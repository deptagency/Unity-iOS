#if !TARGET_OS_SIMULATOR
using System.IO;
using UnityEngine;
using Vuforia;

namespace Rocket {

    public sealed class ConfigureVuforiaDatasetLoader : MonoBehaviour {

        private void Awake() {
#if UNITY_IOS
            // By default Vuforia looks for datasets in a top-level bundle resource folder named "Vuforia"
            // Instead, instruct Vuforia to look for the datasets in the Data dir, where they exist on disk
            DatabaseLoadARController.Instance.AddExternalDatasetSearchDir(Path.Combine(Application.dataPath, "Raw", "Vuforia"));
#endif
        }

    }

}
#endif
