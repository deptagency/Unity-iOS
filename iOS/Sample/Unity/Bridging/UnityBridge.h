#ifndef UnityBridge_h
#define UnityBridge_h

#import <UIKit/UIKit.h>
#import "UnityAppController.h"
#import "UnityInterface.h"

CF_EXTERN_C_BEGIN

extern const char* AppControllerClassName;
void UnityMain(int argc, char *argv[]);

CF_EXTERN_C_END

#endif
