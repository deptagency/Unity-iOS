#import <TargetConditionals.h> // Modified by PostBuild.cs
#if TARGET_OS_SIMULATOR // Modified by PostBuild.cs
#include "UnityAppController+UnityInterface.h"
#include "UnityAppController+Rendering.h"


@implementation UnityAppController (UnityInterface)

- (BOOL)paused
{
    return UnityIsPaused() ? YES : NO;
}

- (void)setPaused:(BOOL)pause
{
    const int newPause  = pause == YES ? 1 : 0;

    UnityPause(newPause);
}

@end
#endif // Modified by PostBuild.cs
