//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplication.h"

@interface UIApplication (Instagram)
+ (_Bool)isFreshAppInstall;
- (id)appVersion;
- (void)clearCachesOnException;
- (void)clearFilterPreviewImageCache;
- (void)clearLegacyAssetCache;
- (void)clearURLCache;
- (_Bool)detectUpgradeAndSaveAppVersion;
- (_Bool)hasInCallStatusBar;
- (_Bool)ig_isStatusBarInViewport;
- (id)ig_statusBarView;
- (id)ig_statusBarWindow;
- (_Bool)isCrashFlagSet;
- (_Bool)isInCallStatusBarFrame:(struct CGRect)arg1;
- (void)killProcess;
- (void)removeLegacyURLCachesIfNecessary;
- (void)setCrashFlag:(_Bool)arg1;
- (void)setProcessKilledFlag:(_Bool)arg1;
- (void)setUpLoggingWithUserSession:(id)arg1;
- (id)setUpURLCache;
- (void)warmUpSingletons;
- (_Bool)wasProcessKilled;
@end
