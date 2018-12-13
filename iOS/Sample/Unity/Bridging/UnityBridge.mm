#import "UnityBridge.h"
#import "RegisterMonoModules.h"
#import "RegisterFeatures.h"
#import <csignal>

const char* AppControllerClassName = "UnityAppController";

const NSNotificationName UnityReadyNotificationName = @"UnityReadyNotification";

// Declared in UnityAppController.mm
extern bool _unityAppReady;
extern bool _renderingInited;

void UnityInitTrampoline();
void UnityRunloopObserverCallback(CFRunLoopObserverRef observer, CFRunLoopActivity activity, void *info);

// Copied from Unity's generated main.mm, with the addition of runloop observer
void UnityMain(int argc, char *argv[]) {
    @autoreleasepool {
        UnityInitTrampoline();
        UnityInitRuntime(argc, argv);
        
        RegisterMonoModules();
        RegisterFeatures();

        // Create a runloop observer to monitor Unity lifecycle
        CFRunLoopObserverRef observer = CFRunLoopObserverCreate(NULL, kCFRunLoopBeforeTimers, true, 0, UnityRunloopObserverCallback, NULL);
        CFRunLoopAddObserver(CFRunLoopGetMain(), observer, kCFRunLoopCommonModes);
        
        // iOS terminates open sockets when an application enters background mode.
        // The next write to any of such socket causes SIGPIPE signal being raised,
        // even if the request has been done from scripting side. This disables the
        // signal and allows Mono to throw a proper C# exception.
        std::signal(SIGPIPE, SIG_IGN);
    }
}

# pragma mark - Lifecycle

bool UnityReady() {
    return (_unityAppReady && _renderingInited);
}

void UnityRunloopObserverCallback(CFRunLoopObserverRef observer, CFRunLoopActivity activity, void *info) {
    if ( UnityReady() ) {
        [[NSNotificationCenter defaultCenter] postNotificationName:UnityReadyNotificationName object: nil];
        CFRunLoopRemoveObserver(CFRunLoopGetMain(), observer, kCFRunLoopCommonModes);
        CFRelease(observer);
    }
}

# pragma mark - Splash Screen Proxy

void ShowSplashScreen(UIWindow* window) {
    [window setHidden:YES];
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
