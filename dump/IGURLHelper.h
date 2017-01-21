//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGURLHelper : NSObject
{
}

+ (id)actionForURL:(id)arg1;
+ (void)confirmBeforeOpeningURL:(id)arg1;
+ (void)handleDirectToExploreWithNavigationController:(id)arg1;
+ (_Bool)handleITunesURLForURL:(id)arg1;
+ (void)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 userSession:(id)arg4;
+ (id)infoForURL:(id)arg1;
+ (_Bool)isInternalURL:(id)arg1;
+ (void)logURLLoadedIfNecessary:(id)arg1;
+ (id)metadataDictForAppLinkURL:(id)arg1;
+ (void)openExternalURL:(id)arg1 controller:(id)arg2 modal:(_Bool)arg3 controls:(_Bool)arg4 animated:(_Bool)arg5;
+ (void)openExternalURL:(id)arg1 controller:(id)arg2 modal:(_Bool)arg3 controls:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)openExternalURL:(id)arg1 controller:(id)arg2 modal:(_Bool)arg3 controls:(_Bool)arg4 title:(id)arg5 animated:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7 cancelModalDismissHandler:(CDUnknownBlockType)arg8;
+ (void)openExternalURL:(id)arg1 controller:(id)arg2 modal:(_Bool)arg3 title:(id)arg4;
+ (void)openInstagramURLInSignInTab:(id)arg1 userSession:(id)arg2;
+ (void)openInstagramURLInTimelineTab:(id)arg1 userSession:(id)arg2;
+ (void)openInternalURL:(id)arg1 controller:(id)arg2 animated:(_Bool)arg3 sourceURL:(id)arg4 ctaPresenterContext:(id)arg5 loggingProvider:(id)arg6 userSession:(id)arg7 analyticsModule:(id)arg8;
+ (void)openInternalURL:(id)arg1 controller:(id)arg2 animated:(_Bool)arg3 sourceURL:(id)arg4 userSession:(id)arg5;
+ (void)openInternalURL:(id)arg1 controller:(id)arg2 animated:(_Bool)arg3 userSession:(id)arg4;
+ (void)openURL:(id)arg1 controller:(id)arg2 userSession:(id)arg3;
+ (void)openURL:(id)arg1 userSession:(id)arg2;
+ (id)permalinkForAppLinkURL:(id)arg1;
+ (void)pushViewControllerForAction:(id)arg1 params:(id)arg2 usingNavigationController:(id)arg3 animated:(_Bool)arg4 sourceURL:(id)arg5 ctaPresenterContext:(id)arg6 loggingProvider:(id)arg7 userSession:(id)arg8 sourceAnalyticsModule:(id)arg9;
+ (void)showWebViewController:(id)arg1 displaysModally:(_Bool)arg2 animated:(_Bool)arg3;
+ (void)showWebViewController:(id)arg1 fromViewController:(id)arg2 displaysModally:(_Bool)arg3 animated:(_Bool)arg4;
+ (id)viewControllerForLocationID:(id)arg1 userSession:(id)arg2;

@end

