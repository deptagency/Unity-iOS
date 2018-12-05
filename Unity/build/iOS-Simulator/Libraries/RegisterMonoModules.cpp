#import <TargetConditionals.h> // Modified by PostBuild.cs
#if TARGET_OS_SIMULATOR // Modified by PostBuild.cs
#if !INIT_SCRIPTING_BACKEND

extern void RegisterAllClassesGranular();
void RegisterAllClasses()
{
    // Register classes for unit tests
    RegisterAllClassesGranular();
}

void RegisterAllStrippedInternalCalls() {}

void InvokeRegisterStaticallyLinkedModuleClasses() {}
void RegisterStaticallyLinkedModulesGranular() {}

#endif // INIT_SCRIPTING_BACKEND

void RegisterMonoModules() {}
#endif // Modified by PostBuild.cs
