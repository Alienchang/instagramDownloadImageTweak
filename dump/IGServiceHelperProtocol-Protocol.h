//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUserDefaults, IGUserSession, NSDictionary, NSString, UIViewController;

@protocol IGServiceHelperProtocol <NSObject>
+ (void)clearForUserPK:(NSString *)arg1;
+ (_Bool)hasAdvancedOptions;
+ (NSString *)serviceName;
+ (NSString *)shortServiceName;
- (id)initWithSessionUserDefaults:(IGUserDefaults *)arg1 networker:(id <IGAPIClient>)arg2;
- (_Bool)isAvailableInCurrentLocale;
- (_Bool)isConfigurable;
- (_Bool)isConfigured;
- (void)logout;
- (void)logoutAndUnlink;
- (_Bool)needsToReauthorize;
- (void)reauthorizeIfNeeded;
- (_Bool)requiresLocationCoordinate;
- (NSDictionary *)sharingInfo;
- (_Bool)supportsMediaType:(long long)arg1;
- (UIViewController *)viewControllerForAdvancedOptionsWithUserSession:(IGUserSession *)arg1;

@optional
- (_Bool)canToggle;
- (NSString *)currentDetailText;
- (NSString *)currentUsername;
- (_Bool)hasEverBeenConfigured;
- (_Bool)mayExcludeFromAbbreviatedList;
@end

