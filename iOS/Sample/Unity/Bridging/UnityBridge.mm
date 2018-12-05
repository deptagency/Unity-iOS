// Copied from Unity's generated main.mm

#import "UnityBridge.h"
#import "RegisterMonoModules.h"
#import "RegisterFeatures.h"
#import <csignal>

const char* AppControllerClassName = "UnityAppController";

void UnityInitTrampoline();

void UnityMain(int argc, char *argv[]) {
    @autoreleasepool {
        UnityInitTrampoline();
        UnityInitRuntime(argc, argv);
        
        RegisterMonoModules();
        RegisterFeatures();
        
        // iOS terminates open sockets when an application enters background mode.
        // The next write to any of such socket causes SIGPIPE signal being raised,
        // even if the request has been done from scripting side. This disables the
        // signal and allows Mono to throw a proper C# exception.
        std::signal(SIGPIPE, SIG_IGN);
    }
}

# pragma mark - Splash Screen Proxy

void ShowSplashScreen(UIWindow* window) {
    window.rootViewController = UnityGetGLViewController();
}
void HideSplashScreen() {}

@interface SplashScreen : NSProxy
@end
@implementation SplashScreen

+ (instancetype)Instance {
    return nil;
}

- (void)forwardInvocation:(NSInvocation *)invocation {
    // no-op
}

@end
