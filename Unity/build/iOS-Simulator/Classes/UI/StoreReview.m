#import <TargetConditionals.h> // Modified by PostBuild.cs
#if TARGET_OS_SIMULATOR // Modified by PostBuild.cs
#if PLATFORM_IOS

// This definition is here only for compiler to know about selector requestReview
@interface UnityStoreReviewController
+ requestReview;
@end

bool UnityRequestStoreReview()
{
    Class classSKStoreReviewController = NSClassFromString(@"SKStoreReviewController");
    if (!classSKStoreReviewController || ![classSKStoreReviewController respondsToSelector: @selector(requestReview)])
        return false;

    [classSKStoreReviewController performSelector: @selector(requestReview)];
    return true;
}

#endif
#endif // Modified by PostBuild.cs
