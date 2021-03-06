//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeModule.h"

@class NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface RCTEventEmitter : NSObject <RCTBridgeModule>
{
    long long _listenerCount;
    RCTBridge *_bridge;
}

+ (id)__rct_export__750;
+ (id)__rct_export__871;
+ (void)initialize;
+ (id)moduleName;
- (void).cxx_destruct;
- (void)addListener:(id)arg1;
@property(nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void)dealloc;
- (void)removeListeners:(long long)arg1;
- (void)sendEventWithName:(id)arg1 body:(id)arg2;
- (void)startObserving;
- (void)stopObserving;
- (id)supportedEvents;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

