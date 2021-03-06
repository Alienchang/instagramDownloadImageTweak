//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"
#import "RCTBridgeDelegate.h"
#import "RCTExceptionsManagerDelegate.h"

@class IGUserSession, NSLock, NSString, RCTAutoUpdater, RCTBridge;

@interface IGReactModule : NSObject <RCTBridgeDelegate, RCTExceptionsManagerDelegate, IGUserSessionObject>
{
    NSString *_currentModuleName;
    IGUserSession *_userSession;
    RCTBridge *_permanentBridge;
    CDUnknownBlockType _cancelBridgePreloadBlock;
    RCTBridge *_bridge;
    NSLock *_bridgeLock;
    double _retainBridgeSeconds;
    double _bridgeLastAccessTime;
    RCTAutoUpdater *_autoupdater;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RCTAutoUpdater *autoupdater; // @synthesize autoupdater=_autoupdater;
@property(nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void)bridgeDidInitializeModule:(id)arg1;
@property(nonatomic) double bridgeLastAccessTime; // @synthesize bridgeLastAccessTime=_bridgeLastAccessTime;
@property(retain, nonatomic) NSLock *bridgeLock; // @synthesize bridgeLock=_bridgeLock;
@property(copy, nonatomic) CDUnknownBlockType cancelBridgePreloadBlock; // @synthesize cancelBridgePreloadBlock=_cancelBridgePreloadBlock;
- (id)createBridgeIfNecessaryWithPerfLoggerSession:(id)arg1;
@property(copy, nonatomic) NSString *currentModuleName; // @synthesize currentModuleName=_currentModuleName;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)eventuallyDeallocateBridge;
- (id)extraModulesForBridge:(id)arg1;
- (void)handleFatalError:(id)arg1;
- (void)handleFatalJSExceptionWithMessage:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3;
- (void)handleSoftJSExceptionWithMessage:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3;
- (id)init;
- (id)initPrivateWithUserSession:(id)arg1;
- (void)logErrorToBreakpadWithTitle:(id)arg1 stack:(id)arg2;
@property(retain, nonatomic) RCTBridge *permanentBridge; // @synthesize permanentBridge=_permanentBridge;
- (void)preloadBridgeAfterDelay:(double)arg1;
@property(nonatomic) double retainBridgeSeconds; // @synthesize retainBridgeSeconds=_retainBridgeSeconds;
- (_Bool)shouldRetainBridge;
- (_Bool)shouldRetainBridgeUntilMemoryWarning;
- (id)sourceURLForBridge:(id)arg1;
@property(readonly, nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
- (id)viewControllerFromConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

