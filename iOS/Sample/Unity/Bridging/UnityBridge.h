#ifndef UnityBridge_h
#define UnityBridge_h

#import <UIKit/UIKit.h>
#import "UnityAppController.h"
#import "UnityInterface.h"

CF_EXTERN_C_BEGIN

extern NSNotificationName const UnityReadyNotificationName;

extern const char* AppControllerClassName;
void UnityMain(int argc, char *argv[]);

bool UnityReady();

CF_EXTERN_C_END

#endif
