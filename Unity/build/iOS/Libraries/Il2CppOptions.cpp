#import <TargetConditionals.h> // Modified by PostBuild.cs
#if !TARGET_OS_SIMULATOR // Modified by PostBuild.cs
bool il2cpp_no_exceptions = false;
extern "C" bool Unity_il2cppNoExceptions() { return il2cpp_no_exceptions; }
#endif // Modified by PostBuild.cs
