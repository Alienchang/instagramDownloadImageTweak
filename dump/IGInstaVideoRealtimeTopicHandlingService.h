//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"

@class IGInstaVideoRealtimeTopicHandler, IGRealtimeClient, NSString;

@interface IGInstaVideoRealtimeTopicHandlingService : NSObject <IGUserSessionObject>
{
    IGInstaVideoRealtimeTopicHandler *_realtimeTopicHandler;
    IGRealtimeClient *_realtimeClient;
}

- (void).cxx_destruct;
- (void)handleTopicPayloadWithBroadcastId:(id)arg1;
- (id)initWithUserSession:(id)arg1 realtimeClient:(id)arg2;
@property(readonly, nonatomic) IGRealtimeClient *realtimeClient; // @synthesize realtimeClient=_realtimeClient;
@property(readonly, nonatomic) IGInstaVideoRealtimeTopicHandler *realtimeTopicHandler; // @synthesize realtimeTopicHandler=_realtimeTopicHandler;
- (void)startService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

