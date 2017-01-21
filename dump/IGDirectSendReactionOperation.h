//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectRetriableOperation.h"

@class IGDirectCache, IGDirectMessageLoggingContext, IGDirectMessageReaction, IGDirectMessageReliabilityLogger, IGDirectRealtimeMessageDispatcher, IGDirectRealtimeService, IGDirectTaskRetryConfig, IGDirectThreadService, IGDirectUploadTask, IGUser;

@interface IGDirectSendReactionOperation : IGDirectRetriableOperation
{
    CDUnknownBlockType messageCompletion;
    IGDirectTaskRetryConfig *retryConfig;
    IGDirectMessageReaction *_reaction;
    IGDirectMessageLoggingContext *_loggingContext;
    IGDirectMessageReliabilityLogger *_logger;
    IGDirectRealtimeService *_realtimeService;
    IGDirectRealtimeMessageDispatcher *_realtimeDispatcher;
    IGDirectThreadService *_threadService;
    IGDirectCache *_directCache;
    IGUser *_user;
    id <IGAPIClient> _networker;
    IGDirectUploadTask *_uploadTask;
}

- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) IGDirectCache *directCache; // @synthesize directCache=_directCache;
- (id)initWithReaction:(id)arg1 loggingContext:(id)arg2 realtimeService:(id)arg3 realtimeDispatcher:(id)arg4 threadService:(id)arg5 directCache:(id)arg6 user:(id)arg7 networker:(id)arg8;
- (void)logSendResult:(_Bool)arg1 ack:(id)arg2;
@property(readonly, nonatomic) IGDirectMessageReliabilityLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) IGDirectMessageLoggingContext *loggingContext; // @synthesize loggingContext=_loggingContext;
- (void)main;
- (CDUnknownBlockType)messageCompletion;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(readonly, nonatomic) IGDirectMessageReaction *reaction; // @synthesize reaction=_reaction;
@property(readonly, nonatomic) IGDirectRealtimeMessageDispatcher *realtimeDispatcher; // @synthesize realtimeDispatcher=_realtimeDispatcher;
@property(readonly, nonatomic) IGDirectRealtimeService *realtimeService; // @synthesize realtimeService=_realtimeService;
- (id)retryConfig;
- (void)setMessageCompletion:(CDUnknownBlockType)arg1;
- (void)setRetryConfig:(id)arg1;
@property(retain, nonatomic) IGDirectUploadTask *uploadTask; // @synthesize uploadTask=_uploadTask;
@property(readonly, nonatomic) IGDirectThreadService *threadService; // @synthesize threadService=_threadService;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;

@end
