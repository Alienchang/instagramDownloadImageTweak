//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFollowPeopleLoggerProtocol.h"

@class IGUser, NSMutableSet, NSString;

@interface IGProfileChainingLogger : NSObject <IGFollowPeopleLoggerProtocol>
{
    NSString *_module;
    NSString *_view;
    NSMutableSet *_set;
    IGUser *_chainingUser;
    NSString *_chainingUserPK;
    unsigned long long _similarAccountSource;
    id <IGAPIClient> _networker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGUser *chainingUser; // @synthesize chainingUser=_chainingUser;
@property(readonly, copy, nonatomic) NSString *chainingUserPK; // @synthesize chainingUserPK=_chainingUserPK;
- (id)initWithModule:(id)arg1 view:(id)arg2 source:(unsigned long long)arg3 chainingUser:(id)arg4 networker:(id)arg5;
- (void)logClickWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logDismissWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logFollowWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logImpressionWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logSimilarAccountsEvent:(id)arg1 chainedUserPK:(id)arg2 targetUserPK:(id)arg3 source:(unsigned long long)arg4 position:(unsigned long long)arg5;
@property(copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(readonly, nonatomic) NSMutableSet *set; // @synthesize set=_set;
@property(nonatomic) unsigned long long similarAccountSource; // @synthesize similarAccountSource=_similarAccountSource;
@property(copy, nonatomic) NSString *view; // @synthesize view=_view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

