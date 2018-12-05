#import <TargetConditionals.h> // Modified by PostBuild.cs
#if TARGET_OS_SIMULATOR // Modified by PostBuild.cs
template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	void RegisterStaticallyLinkedModuleClasses();
	RegisterStaticallyLinkedModuleClasses();
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_AR();
	RegisterModule_AR();

	void RegisterModule_Accessibility();
	RegisterModule_Accessibility();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Baselib();
	RegisterModule_Baselib();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_CrashReporting();
	RegisterModule_CrashReporting();

	void RegisterModule_Facebook();
	RegisterModule_Facebook();

	void RegisterModule_FileSystemHttp();
	RegisterModule_FileSystemHttp();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_Grid();
	RegisterModule_Grid();

	void RegisterModule_HotReload();
	RegisterModule_HotReload();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_Localization();
	RegisterModule_Localization();

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

	void RegisterModule_PerformanceReporting();
	RegisterModule_PerformanceReporting();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_Profiler();
	RegisterModule_Profiler();

	void RegisterModule_SpatialTracking();
	RegisterModule_SpatialTracking();

	void RegisterModule_SpriteMask();
	RegisterModule_SpriteMask();

	void RegisterModule_SpriteShape();
	RegisterModule_SpriteShape();

	void RegisterModule_Streaming();
	RegisterModule_Streaming();

	void RegisterModule_StyleSheets();
	RegisterModule_StyleSheets();

	void RegisterModule_Substance();
	RegisterModule_Substance();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_Timeline();
	RegisterModule_Timeline();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UIElements();
	RegisterModule_UIElements();

	void RegisterModule_UNET();
	RegisterModule_UNET();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Video();
	RegisterModule_Video();

	void RegisterModule_Director();
	RegisterModule_Director();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

}

void RegisterAllClasses()
{
	void RegisterAllClassesGranular();
	RegisterAllClassesGranular();
}
#endif // Modified by PostBuild.cs
