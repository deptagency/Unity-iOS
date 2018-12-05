#import <TargetConditionals.h> // Modified by PostBuild.cs
#if !TARGET_OS_SIMULATOR // Modified by PostBuild.cs
#if PLATFORM_TVOS

#import "UnityViewControllerBase.h"
#import "UnityAppController.h"

@implementation UnityDefaultViewController
@end

#endif // PLATFORM_TVOS
#endif // Modified by PostBuild.cs
