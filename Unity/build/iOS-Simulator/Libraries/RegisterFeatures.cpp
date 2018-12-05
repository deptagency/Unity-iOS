#import <TargetConditionals.h> // Modified by PostBuild.cs
#if TARGET_OS_SIMULATOR // Modified by PostBuild.cs

#include "RegisterFeatures.h"

extern bool gEnableGyroscope;
extern bool gEnableStylusTouch;

void RegisterFeatures()
{
    gEnableGyroscope = false;
    gEnableStylusTouch = false;
}

#endif // Modified by PostBuild.cs
