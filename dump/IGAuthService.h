//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGAuthenticatedUser, NSString;

@interface IGAuthService : NSObject
{
    NSString *_uniqueID;
    IGAuthenticatedUser *_currentUser;
}

+ (_Bool)cookieIsMIDCookie:(id)arg1;
+ (id)sharedAuthService;
- (void).cxx_destruct;
- (id)_uniqueID;
- (void)archiveCurrentUser;
- (void)clearCookies;
- (id)cookieWithName:(id)arg1 cookieSource:(id)arg2;
- (id)cookieWithName:(id)arg1 value:(id)arg2 cookieSource:(id)arg3;
- (id)cookies;
- (_Bool)cookiesAreConsistentForUserPK:(id)arg1;
- (_Bool)cookiesAreValidAtColdStartForUserPK:(id)arg1;
- (_Bool)cookiesAreValidForUserPK:(id)arg1;
- (id)cookiesFromKeyChainForUserPK:(id)arg1;
@property(retain, nonatomic) IGAuthenticatedUser *currentUser; // @synthesize currentUser=_currentUser;
- (id)facebookUserID;
- (id)init;
- (void)logInWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)logOutWithSSOEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)restoreCurrentUser;
- (id)sessionCookieString;
- (id)sessionCookieStringFromKeyChainForUserPK:(id)arg1;
- (void)setFacebookUserID:(id)arg1;
- (void)syncCurrentCookiesFromKeyChainToNSHTTPCookiesForUserPk:(id)arg1;
- (void)syncCurrentCookiesFromNSHTTPCookiesToKeyChainForUserPk:(id)arg1;
- (void)unarchiveCurrentUser;
@property(readonly, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void)updateAuthenticatedUserWithDictionary:(id)arg1;
- (id)userIDCookieForPK:(id)arg1;
- (id)userIDCookieFromKeyChainForUserPK:(id)arg1;

@end

