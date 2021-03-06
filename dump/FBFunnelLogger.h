//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBFunnelRegistry, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface FBFunnelLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_funnels;
    id <FBFunnelLoggerIntegrationDelegate> _funnelLoggerIntegrationDelegate;
    FBFunnelRegistry *_funnelRegistry;
    NSString *_persistedFunnelPath;
    NSString *_persistedFunnelDirectoryPath;
}

+ (id)sharedFunnelLogger;
- (void).cxx_destruct;
- (void)_addActionToFunnel:(id)arg1 actionName:(id)arg2 tag:(id)arg3 actionPayload:(id)arg4;
- (void)_addTagToFunnel:(id)arg1 tag:(id)arg2;
- (void)_cancelFunnel:(id)arg1;
- (id)_createNewInstanceForFunnel:(id)arg1 instanceID:(unsigned long long)arg2 funnelKey:(id)arg3;
- (void)_endFunnel:(id)arg1 reason:(unsigned long long)arg2;
- (void)_endPseudoFunnel:(id)arg1;
- (id)_getFunnelKeyFromFunnel:(id)arg1 instanceID:(unsigned long long)arg2;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)_loadPersistedFunnels;
- (void)_persistUnfinishedFunnels;
- (void)_reportNilValue:(id)arg1 actionName:(id)arg2 funnel:(id)arg3;
- (void)_sendAnalyticsEventForFunnel:(id)arg1;
- (void)_startFunnel:(id)arg1 instanceID:(unsigned long long)arg2 funnelKey:(id)arg3 bypassSampling:(_Bool)arg4;
- (void)addActionToFunnel:(id)arg1 actionName:(id)arg2 tag:(id)arg3;
- (void)addActionToFunnel:(id)arg1 actionName:(id)arg2 tag:(id)arg3 actionPayload:(id)arg4;
- (void)addActionToFunnelInConcurrentMode:(id)arg1 instanceID:(unsigned long long)arg2 actionName:(id)arg3 tag:(id)arg4;
- (void)addActionToFunnelInConcurrentMode:(id)arg1 instanceID:(unsigned long long)arg2 actionName:(id)arg3 tag:(id)arg4 actionPayload:(id)arg5;
- (void)addTagToFunnel:(id)arg1 tag:(id)arg2;
- (void)addTagToFunnelInConcurrentMode:(id)arg1 instanceID:(unsigned long long)arg2 tag:(id)arg3;
- (void)cancelFunnel:(id)arg1;
- (void)cancelFunnelInConcurrentMode:(id)arg1 instanceID:(unsigned long long)arg2;
- (void)dealloc;
- (void)endFunnel:(id)arg1;
- (void)endFunnel:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)endFunnelInConcurrentMode:(id)arg1 instanceID:(unsigned long long)arg2;
- (void)endFunnelInConcurrentMode:(id)arg1 instanceID:(unsigned long long)arg2 callback:(CDUnknownBlockType)arg3;
- (void)handleApplicationDidEnterBackground:(id)arg1;
- (id)initWithFunnelLoggerIntegrationDelegate:(id)arg1 funnelRegistry:(id)arg2;
- (id)internalQueue;
- (void)loadPersistedFunnels;
- (id)persistedFunnelDirectoryPath;
- (id)persistedFunnelPath;
- (void)removePersistedFileIfExists;
- (_Bool)setRandomTestingPersistedFilePath;
- (void)startFunnel:(id)arg1;
- (void)startFunnelInConcurrentMode:(id)arg1 instanceID:(unsigned long long)arg2;
- (void)startFunnelInConcurrentMode_DEV_MODE:(id)arg1 instanceID:(unsigned long long)arg2;
- (void)startFunnel_DEV_MODE:(id)arg1;

@end

