//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionClearableObject.h"

@class IGBadgeHelper, IGDirectCache, IGDirectInboxNetworker, IGDirectStoryNetworker, IGDirectStoryService, NSString;

@interface IGDirectRefreshService : NSObject <IGUserSessionClearableObject>
{
    NSString *_userPK;
    IGDirectCache *_cache;
    IGDirectInboxNetworker *_inboxNetworker;
    IGDirectStoryNetworker *_directStoryNetworker;
    IGBadgeHelper *_badgeHelper;
    IGDirectStoryService *_directStoryService;
}

+ (void)clearForUserPK:(id)arg1;
- (void).cxx_destruct;
- (void)appWillEnterForegroundNotification:(id)arg1;
@property(readonly, nonatomic) IGBadgeHelper *badgeHelper; // @synthesize badgeHelper=_badgeHelper;
@property(readonly, nonatomic) IGDirectCache *cache; // @synthesize cache=_cache;
- (void)dealloc;
@property(readonly, nonatomic) IGDirectStoryNetworker *directStoryNetworker; // @synthesize directStoryNetworker=_directStoryNetworker;
@property(readonly, nonatomic) IGDirectStoryService *directStoryService; // @synthesize directStoryService=_directStoryService;
- (void)forceRefreshDirectStories;
- (void)forceRefreshInboxData;
@property(readonly, nonatomic) IGDirectInboxNetworker *inboxNetworker; // @synthesize inboxNetworker=_inboxNetworker;
- (id)initWithUserPK:(id)arg1 cache:(id)arg2 inboxNetworker:(id)arg3 directStoryNetworker:(id)arg4 badgeHelper:(id)arg5 directStoryService:(id)arg6;
- (void)realtimeDidRefreshNotification:(id)arg1;
- (void)setupNotifications;
- (void)showDirectStoryIgMessageNuxIfNeeded;
@property(readonly, nonatomic) __weak NSString *userPK; // @synthesize userPK=_userPK;
- (void)willLogOut;
- (void)willSwitchUsers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

