//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectRetriableOperation.h"

@class IGDirectRealtimeService, IGDirectSeenMark;

@interface IGDirectSendSeenOperation : IGDirectRetriableOperation
{
    _Bool _shouldSynchronizeExecution;
    IGDirectSeenMark *_seenMark;
    id <IGAPIClient> _networker;
    IGDirectRealtimeService *_realtimeService;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (id)badgeCountFromResponseDict:(id)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (id)description;
- (id)initWithSeenMark:(id)arg1 networker:(id)arg2 realtimeService:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)logSendResult:(_Bool)arg1 ack:(id)arg2;
- (void)main;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(readonly, nonatomic) IGDirectRealtimeService *realtimeService; // @synthesize realtimeService=_realtimeService;
@property(readonly, nonatomic) IGDirectSeenMark *seenMark; // @synthesize seenMark=_seenMark;
- (void)sendSeenMarkThroughHTTPRequest:(id)arg1;
@property(readonly, nonatomic) _Bool shouldSynchronizeExecution; // @synthesize shouldSynchronizeExecution=_shouldSynchronizeExecution;

@end

