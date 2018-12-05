#pragma once

// important app life-cycle events

@protocol LifeCycleListener<NSObject>
@optional
- (void)didFinishLaunching:(NSNotification*)notification;
- (void)didBecomeActive:(NSNotification*)notification;
- (void)willResignActive:(NSNotification*)notification;
- (void)didEnterBackground:(NSNotification*)notification;
- (void)willEnterForeground:(NSNotification*)notification;
- (void)willTerminate:(NSNotification*)notification;
@end

CF_EXTERN_C_BEGIN // Modified by PostBuild.cs
void UnityRegisterLifeCycleListener(id<LifeCycleListener> obj);
void UnityUnregisterLifeCycleListener(id<LifeCycleListener> obj);
CF_EXTERN_C_END // Modified by PostBuild.cs
