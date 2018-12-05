#import <TargetConditionals.h> // Modified by PostBuild.cs
#if !TARGET_OS_SIMULATOR // Modified by PostBuild.cs
/*============================================================================
Copyright (c) 2017 PTC Inc. All Rights Reserved.


Copyright (c) 2014 Qualcomm Connected Experiences, Inc.
All Rights Reserved.
============================================================================*/
 
#import "UnityAppController.h"
#import "UnityView.h"
#import "VuforiaRenderDelegate.h"


// Unity native rendering callback plugin mechanism is only supported 
// from version 4.5 onwards
#if UNITY_VERSION>434

// Exported methods for native rendering callback
extern "C" void VuforiaSetGraphicsDevice(void* device, int deviceType, int eventType);
extern "C" void VuforiaRenderEvent(int marker);

#endif

// Controller to support native rendering callback
@interface VuforiaNativeRendererController : UnityAppController
{
}
- (void)shouldAttachRenderDelegate;
@end

@implementation VuforiaNativeRendererController

- (BOOL)application:(UIApplication*)application didFinishLaunchingWithOptions:(NSDictionary*)launchOptions
{
    BOOL ret = [super application:application didFinishLaunchingWithOptions:launchOptions];
    if (ret)
    {
        _unityView.backgroundColor = UIColor.clearColor;
    }
    return ret;
}

- (void)shouldAttachRenderDelegate
{
    self.renderDelegate = [[VuforiaRenderDelegate alloc] init];

// Unity native rendering callback plugin mechanism is only supported 
// from version 4.5 onwards
#if UNITY_VERSION>434
    UnityRegisterRenderingPlugin(&VuforiaSetGraphicsDevice, &VuforiaRenderEvent);
#endif
}
@end


IMPL_APP_CONTROLLER_SUBCLASS(VuforiaNativeRendererController)
#endif // Modified by PostBuild.cs
