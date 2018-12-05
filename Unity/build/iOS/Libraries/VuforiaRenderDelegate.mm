#import <TargetConditionals.h> // Modified by PostBuild.cs
#if !TARGET_OS_SIMULATOR // Modified by PostBuild.cs
/*============================================================================
Copyright (c) 2017 PTC Inc. All Rights Reserved.

Copyright (c) 2014 Qualcomm Connected Experiences, Inc.
All Rights Reserved.
============================================================================*/
 

#import "VuforiaRenderDelegate.h"

// Exported methods for setting surface recreated flag
extern "C" void setSurfaceRecreated();

@implementation VuforiaRenderDelegate

- (void)mainDisplayInited:(struct UnityDisplaySurfaceBase*)surface // Modified by PostBuild.cs
{
}

- (void)onAfterMainDisplaySurfaceRecreate
{
	setSurfaceRecreated();
}
@end
#endif // Modified by PostBuild.cs
