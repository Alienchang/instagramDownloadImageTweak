//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKStoreProductViewControllerDelegate.h"

@class NSString, SKStoreProductViewController;

@interface IGAppInstallationsHelper : NSObject <SKStoreProductViewControllerDelegate>
{
    SKStoreProductViewController *_controller;
    NSString *_appStoreViewControllerLastAppID;
}

+ (_Bool)isAppInstalled:(id)arg1;
+ (_Bool)isBoomerangAppInstalled;
+ (_Bool)isFBAppInstalled;
+ (_Bool)isHyperlapseAppInstalled;
+ (_Bool)isLayoutAppInstalled;
+ (void)logAppInstallationsInfo;
+ (void)openBoomerang;
+ (void)openLayoutWithAsset:(id)arg1 assetIdentifier:(id)arg2;
- (void).cxx_destruct;
- (void)appDidEnterForeground;
@property(retain, nonatomic) NSString *appStoreViewControllerLastAppID; // @synthesize appStoreViewControllerLastAppID=_appStoreViewControllerLastAppID;
@property(retain, nonatomic) SKStoreProductViewController *controller; // @synthesize controller=_controller;
- (void)dealloc;
- (id)init;
- (void)presentAppStoreViewControllerForAppID:(id)arg1 fromViewController:(id)arg2;
- (void)productViewControllerDidFinish:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
