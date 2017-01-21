//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUserSession, NSMutableSet;

@interface IGExploreInterestSelectionLogger : NSObject
{
    IGUserSession *_userSession;
    NSMutableSet *_loggedImpressions;
}

- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1;
- (void)logClickDoneWithModel:(id)arg1 module:(id)arg2 position:(CDStruct_4bcfbbae)arg3 sessionId:(id)arg4;
- (void)logClickSeeMoreWithModel:(id)arg1 module:(id)arg2 position:(CDStruct_4bcfbbae)arg3 sessionId:(id)arg4;
- (id)logEvent:(id)arg1 module:(id)arg2 model:(id)arg3 position:(CDStruct_4bcfbbae)arg4 sessionId:(id)arg5;
- (void)logImpressionWithModel:(id)arg1 module:(id)arg2 position:(CDStruct_4bcfbbae)arg3 sessionId:(id)arg4;
@property(readonly, nonatomic) NSMutableSet *loggedImpressions; // @synthesize loggedImpressions=_loggedImpressions;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

@end
