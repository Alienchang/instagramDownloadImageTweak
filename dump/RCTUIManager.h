//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeModule.h"
#import "RCTInvalidating.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, RCTBridge, RCTLayoutAnimation;

@interface RCTUIManager : NSObject <RCTBridgeModule, RCTInvalidating>
{
    NSMutableSet *_rootViewTags;
    NSMutableArray *_pendingUIBlocks;
    RCTLayoutAnimation *_layoutAnimation;
    NSMutableSet *_viewsToBeDeleted;
    NSMutableDictionary *_shadowViewRegistry;
    NSMutableDictionary *_viewRegistry;
    NSDictionary *_componentDataByName;
    NSMutableSet *_bridgeTransactionListeners;
    long long _currentInterfaceOrientation;
    _Bool _unsafeFlushUIChangesBeforeBatchEnds;
    RCTBridge *_bridge;
}

+ (id)JSResponder;
+ (id)__rct_export__10446;
+ (id)__rct_export__10567;
+ (id)__rct_export__10678;
+ (id)__rct_export__10759;
+ (id)__rct_export__109810;
+ (id)__rct_export__119511;
+ (id)__rct_export__122912;
+ (id)__rct_export__125713;
+ (id)__rct_export__130814;
+ (id)__rct_export__132415;
+ (id)__rct_export__134016;
+ (id)__rct_export__138617;
+ (id)__rct_export__145518;
+ (id)__rct_export__146519;
+ (id)__rct_export__155020;
+ (id)__rct_export__156721;
+ (id)__rct_export__7240;
+ (id)__rct_export__8311;
+ (id)__rct_export__8542;
+ (id)__rct_export__8783;
+ (id)__rct_export__9094;
+ (id)__rct_export__9975;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (void)_amendPendingUIBlocksWithStylePropagationUpdateForShadowView:(id)arg1;
- (id)_childrenToRemoveFromContainer:(id)arg1 atIndices:(id)arg2;
- (void)_layoutAndMount;
- (void)_manageChildren:(id)arg1 moveFromIndices:(id)arg2 moveToIndices:(id)arg3 addChildReactTags:(id)arg4 addAtIndices:(id)arg5 removeAtIndices:(id)arg6 registry:(id)arg7;
- (void)_purgeChildren:(id)arg1 fromRegistry:(id)arg2;
- (void)_removeChildren:(id)arg1 fromContainer:(id)arg2;
- (void)_removeChildren:(id)arg1 fromContainer:(id)arg2 withAnimation:(id)arg3;
- (id)_rootTagForReactTag:(id)arg1;
- (void)addUIBlock:(CDUnknownBlockType)arg1;
- (id)allocateRootTag;
- (void)batchDidComplete;
- (void)blur:(id)arg1;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void)clearJSResponder;
- (void)configureNextLayoutAnimation:(id)arg1 withCallback:(CDUnknownBlockType)arg2 errorCallback:(CDUnknownBlockType)arg3;
- (id)constantsToExport;
- (void)createView:(id)arg1 viewName:(id)arg2 rootTag:(id)arg3 props:(id)arg4;
- (void)didReceiveNewContentSizeMultiplier;
- (void)dispatchViewManagerCommand:(id)arg1 commandID:(long long)arg2 commandArgs:(id)arg3;
- (void)findSubviewIn:(id)arg1 atPoint:(struct CGPoint)arg2 callback:(CDUnknownBlockType)arg3;
- (void)flushUIBlocks;
- (void)focus:(id)arg1;
- (void)getContentSizeMultiplier:(CDUnknownBlockType)arg1;
- (void)interfaceOrientationWillChange:(id)arg1;
- (void)invalidate;
- (void)manageChildren:(id)arg1 moveFromIndices:(id)arg2 moveToIndices:(id)arg3 addChildReactTags:(id)arg4 addAtIndices:(id)arg5 removeAtIndices:(id)arg6;
- (void)measure:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)measureInWindow:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)measureLayout:(id)arg1 relativeTo:(id)arg2 errorCallback:(CDUnknownBlockType)arg3 callback:(CDUnknownBlockType)arg4;
- (void)measureLayoutRelativeToParent:(id)arg1 errorCallback:(CDUnknownBlockType)arg2 callback:(CDUnknownBlockType)arg3;
- (void)measureViewsInRect:(struct CGRect)arg1 parentView:(id)arg2 errorCallback:(CDUnknownBlockType)arg3 callback:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
- (void)partialBatchDidFlush;
- (void)registerRootView:(id)arg1 withSizeFlexibility:(long long)arg2;
- (void)removeRootView:(id)arg1;
- (void)removeSubviewsFromContainerWithID:(id)arg1;
- (void)replaceExistingNonRootView:(id)arg1 withView:(id)arg2;
- (void)rootViewForReactTag:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setBackgroundColor:(id)arg1 forView:(id)arg2;
- (void)setBridge:(id)arg1;
- (void)setChildren:(id)arg1 reactTags:(id)arg2;
- (void)setFrame:(struct CGRect)arg1 forView:(id)arg2;
- (void)setIntrinsicContentSize:(struct CGSize)arg1 forView:(id)arg2;
- (void)setJSResponder:(id)arg1 blockNativeResponder:(_Bool)arg2;
- (void)setNeedsLayout;
@property _Bool unsafeFlushUIChangesBeforeBatchEnds; // @synthesize unsafeFlushUIChangesBeforeBatchEnds=_unsafeFlushUIChangesBeforeBatchEnds;
- (id)shadowViewRegistry;
- (void)takeSnapshot:(id)arg1 withOptions:(id)arg2 resolve:(CDUnknownBlockType)arg3 reject:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)uiBlockWithLayoutUpdateForRootView:(id)arg1;
- (void)updateView:(id)arg1 viewName:(id)arg2 props:(id)arg3;
- (id)viewForReactTag:(id)arg1;
- (void)viewIsDescendantOf:(id)arg1 ancestor:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)viewRegistry;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

