//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedHeartAnimator, IGFeedItemLogger, IGFeedUFITooltipManager, IGFeedVideoCellManager, IGListAdapter, IGListAdapterScrollingContext, IGSavePopoutView, IGUserSession;

@interface IGFeedSectionControllerFactory : NSObject
{
    id <IGFeedConfigurationType> _feedConfiguration;
    id <IGFeedItemConfigurationType> _itemConfiguration;
    IGFeedHeartAnimator *_heartAnimator;
    IGSavePopoutView *_savePopoutView;
    IGUserSession *_userSession;
    IGListAdapter *_listAdapter;
    IGFeedItemLogger *_feedItemLogger;
    IGFeedVideoCellManager *_videoCellManager;
    IGListAdapterScrollingContext *_scrollingContext;
    IGFeedUFITooltipManager *_ufiTooltipManager;
    id <IGAnalyticsModule> _analyticsModule;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <IGAnalyticsModule> analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) id <IGFeedConfigurationType> feedConfiguration; // @synthesize feedConfiguration=_feedConfiguration;
@property(readonly, nonatomic) IGFeedItemLogger *feedItemLogger; // @synthesize feedItemLogger=_feedItemLogger;
@property(readonly, nonatomic) IGFeedHeartAnimator *heartAnimator; // @synthesize heartAnimator=_heartAnimator;
- (id)initWithFeedConfiguration:(id)arg1 itemConfiguration:(id)arg2 viewController:(id)arg3 collectionView:(id)arg4 listAdapter:(id)arg5 userSession:(id)arg6 feedItemLogger:(id)arg7;
@property(readonly, nonatomic) id <IGFeedItemConfigurationType> itemConfiguration; // @synthesize itemConfiguration=_itemConfiguration;
@property(readonly, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
- (id)newFeedSectionController;
@property(readonly, nonatomic) IGSavePopoutView *savePopoutView; // @synthesize savePopoutView=_savePopoutView;
@property(readonly, nonatomic) IGListAdapterScrollingContext *scrollingContext; // @synthesize scrollingContext=_scrollingContext;
- (_Bool)supportsUFITooltip;
@property(readonly, nonatomic) IGFeedUFITooltipManager *ufiTooltipManager; // @synthesize ufiTooltipManager=_ufiTooltipManager;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGFeedVideoCellManager *videoCellManager; // @synthesize videoCellManager=_videoCellManager;

@end

