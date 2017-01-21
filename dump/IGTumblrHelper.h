//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGServiceHelperLoginProtocol.h"
#import "IGServiceHelperProtocol.h"

@class IGSwitch, IGUser, IGUserDefaults, NSString, OAConsumer, OAToken;

@interface IGTumblrHelper : NSObject <IGServiceHelperProtocol, IGServiceHelperLoginProtocol>
{
    IGSwitch *_followSwitch;
    _Bool _loginPending;
    OAConsumer *_consumer;
    OAToken *_accessToken;
    NSString *_tokenString;
    IGUser *_currentUser;
    IGUserDefaults *_sessionUserDefaults;
}

+ (void)clearForUserPK:(id)arg1;
+ (_Bool)hasAdvancedOptions;
+ (void)logoutFromDefaults:(id)arg1;
+ (id)serviceName;
+ (id)shortServiceName;
- (void).cxx_destruct;
@property(retain, nonatomic) OAToken *accessToken; // @synthesize accessToken=_accessToken;
@property(retain, nonatomic) OAConsumer *consumer; // @synthesize consumer=_consumer;
@property(retain, nonatomic) IGUser *currentUser; // @synthesize currentUser=_currentUser;
- (id)currentUsername;
- (void)dealloc;
- (void)doAuthWithUsername:(id)arg1 password:(id)arg2;
- (void)followInstagram;
- (id)followSwitch;
- (void)followTicket:(id)arg1 didFailWithError:(id)arg2;
- (void)followTicket:(id)arg1 didSucceedWithData:(id)arg2;
- (_Bool)hasEverBeenConfigured;
- (id)initWithSessionUserDefaults:(id)arg1 networker:(id)arg2;
- (_Bool)isAvailableInCurrentLocale;
- (_Bool)isConfigurable;
- (_Bool)isConfigured;
- (id)loginErrorMessage;
- (id)loginFooterMessage;
@property(nonatomic) _Bool loginPending; // @synthesize loginPending=_loginPending;
- (id)loginViewController;
- (void)logout;
- (void)logoutAndUnlink;
- (_Bool)needsToReauthorize;
- (long long)numberOfExtraRowsForLogin;
- (void)onTumblrLoginCompleted:(id)arg1;
- (id)prefUsernameKey;
- (void)prepareCell:(id)arg1 forIndexPath:(id)arg2;
- (void)reauthorizeIfNeeded;
- (void)requestTokenTicket:(id)arg1 didFailWithError:(id)arg2;
- (void)requestTokenTicket:(id)arg1 didFinishWithData:(id)arg2;
- (_Bool)requiresLocationCoordinate;
- (void)saveLoginInfo;
@property(retain, nonatomic) IGUserDefaults *sessionUserDefaults; // @synthesize sessionUserDefaults=_sessionUserDefaults;
- (void)setAccessTokenFromTokenString:(id)arg1;
@property(copy, nonatomic) NSString *tokenString; // @synthesize tokenString=_tokenString;
- (id)sharingInfo;
- (_Bool)supportsMediaType:(long long)arg1;
- (id)viewControllerForAdvancedOptionsWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

