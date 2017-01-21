//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTIGUserSessionModule.h"

@class IGReactModule, IGUserSession, NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface IGReactNavigator : NSObject <RCTIGUserSessionModule>
{
    IGUserSession *_userSession;
    IGReactModule *_reactModule;
}

+ (id)__rct_export__1025;
+ (id)__rct_export__1086;
+ (id)__rct_export__1167;
+ (id)__rct_export__1238;
+ (id)__rct_export__1299;
+ (id)__rct_export__13510;
+ (id)__rct_export__14111;
+ (id)__rct_export__14712;
+ (id)__rct_export__15313;
+ (id)__rct_export__440;
+ (id)__rct_export__501;
+ (id)__rct_export__562;
+ (id)__rct_export__733;
+ (id)__rct_export__894;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (void)cancelTouchesOnPop:(_Bool)arg1 reactTag:(id)arg2;
- (void)disableNavigationGesture:(_Bool)arg1 reactTag:(id)arg2;
- (void)dismissViewWithReactTag:(id)arg1;
- (id)initWithReactModule:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
- (void)openUrl:(id)arg1 reactTag:(id)arg2;
- (void)popToViewWithReactTag:(id)arg1 fromViewWithReactTag:(id)arg2;
- (void)popViewWithReactTag:(id)arg1;
- (void)presentView:(id)arg1 withTitle:(id)arg2 withInitialProperties:(id)arg3 withReactTag:(id)arg4;
- (void)pushView:(id)arg1 withTitle:(id)arg2 withInitialProperties:(id)arg3 withReactTag:(id)arg4;
@property(readonly, nonatomic) IGReactModule *reactModule; // @synthesize reactModule=_reactModule;
- (void)setLeftAction:(id)arg1 enabled:(_Bool)arg2 withReactTag:(id)arg3;
- (void)setLeftActionEnabled:(_Bool)arg1 withReactTag:(id)arg2;
- (void)setLogoAsTitle:(id)arg1;
- (void)setRightAction:(id)arg1 enabled:(_Bool)arg2 title:(id)arg3 withReactTag:(id)arg4;
- (void)setRightActionEnabled:(_Bool)arg1 withReactTag:(id)arg2;
- (void)setTitle:(id)arg1 reactTag:(id)arg2;
@property(nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
