#import <TargetConditionals.h> // Modified by PostBuild.cs
#if TARGET_OS_SIMULATOR // Modified by PostBuild.cs

#include "RegisterFeatures.h"

extern "C" void UnityEnableGyroscope(bool value);
extern "C" void UnityEnableStylusTouch(bool value);

void RegisterFeatures()
{
    UnityEnableGyroscope(false);
    UnityEnableStylusTouch(false);
}

#endif // Modified by PostBuild.cs
