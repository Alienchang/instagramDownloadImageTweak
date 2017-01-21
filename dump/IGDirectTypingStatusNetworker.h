//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"

@class IGDirectRealtimeMessageDispatcher, IGDirectRealtimeService, NSString;

@interface IGDirectTypingStatusNetworker : NSObject <IGUserSessionObject>
{
    IGDirectRealtimeService *_realtimeService;
    IGDirectRealtimeMessageDispatcher *_realtimeDispatcher;
}

- (void).cxx_destruct;
- (id)initWithRealtimeService:(id)arg1 realtimeDispatcher:(id)arg2;
@property(readonly, nonatomic) IGDirectRealtimeMessageDispatcher *realtimeDispatcher; // @synthesize realtimeDispatcher=_realtimeDispatcher;
@property(readonly, nonatomic) IGDirectRealtimeService *realtimeService; // @synthesize realtimeService=_realtimeService;
- (void)requestUpdateTypingStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
