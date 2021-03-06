//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGActionSheetDelegate.h"
#import "IGAdsManagerAdViewControllerDelegate.h"
#import "IGDirectShareSheetDelegate.h"
#import "IGFeedItemActionCellConfigurableDelegate.h"
#import "IGFeedItemBusinessCellDelegate.h"
#import "IGFeedItemHeaderDelegate.h"
#import "IGFeedItemHiddenConfirmationCellDelegate.h"
#import "IGFeedItemPageCellDelegate.h"
#import "IGFeedItemPhotoCellDelegate.h"
#import "IGFeedItemTextCellDataSourceProtocol.h"
#import "IGFeedItemTextCellLinkHandlerDelegate.h"
#import "IGFeedItemZoomHandlerDelegate.h"
#import "IGFeedVideoCellInteractionDelegate.h"
#import "IGInFeedCommentViewControllerDelegate.h"
#import "IGListDisplayDelegate.h"
#import "IGListSectionType.h"
#import "IGListSupplementaryViewSource.h"
#import "IGObjectInTagDisplayDelegate.h"
#import "IGRaindropAnalyticsDelegate.h"
#import "IGReelSeenStateStoreListener.h"
#import "IGShowActionSheetProtocol.h"
#import "IGStoryViewerDelegate.h"
#import "IGTranslationNetworkDataSourceDelegate.h"

@class FBTimer, IGAdsManagerLogger, IGAnalyticsMetadata, IGCameraNavigationControllerTransitionDelegate, IGDirectResponseLogger, IGFeedDirectResponseHandler, IGFeedHeartAnimator, IGFeedItem, IGFeedItemActionCellState, IGFeedItemHeader, IGFeedItemPageCellState, IGFeedItemTextCellLinkHandler, IGFeedItemTimelineViewModel, IGFeedItemZoomHandler, IGFeedItemZoomLogger, IGFeedUFITooltipManager, IGFeedVideoCellManager, IGImagePreparer, IGListAdapterScrollingContext, IGSavePopoutView, IGStoryTrayLoggingContext, IGStoryViewerPresentationAnimationController, IGTranslationNetworkDataSource, IGUserSession, IGWatchAndActionController, IGZoomViewPresenter, NSString, UISelectionFeedbackGenerator;

@interface IGFeedSectionController : IGListSectionController <IGActionSheetDelegate, IGAdsManagerAdViewControllerDelegate, IGDirectShareSheetDelegate, IGFeedItemActionCellConfigurableDelegate, IGFeedItemBusinessCellDelegate, IGFeedItemHeaderDelegate, IGFeedItemHiddenConfirmationCellDelegate, IGFeedItemPageCellDelegate, IGFeedItemPhotoCellDelegate, IGFeedItemTextCellLinkHandlerDelegate, IGFeedItemTextCellDataSourceProtocol, IGFeedItemZoomHandlerDelegate, IGFeedVideoCellInteractionDelegate, IGListDisplayDelegate, IGListSupplementaryViewSource, IGObjectInTagDisplayDelegate, IGRaindropAnalyticsDelegate, IGTranslationNetworkDataSourceDelegate, IGInFeedCommentViewControllerDelegate, IGReelSeenStateStoreListener, IGStoryViewerDelegate, IGListSectionType, IGShowActionSheetProtocol>
{
    _Bool _isVisible;
    _Bool _pendingDidEndDisplayCollapse;
    _Bool _hasQueuedBatchUpdate;
    _Bool _showEasyReportingActionSheet;
    id <IGFeedSectionControllerActionDelegate> _actionDelegate;
    IGAdsManagerLogger *_adsManagerLogger;
    IGUserSession *_userSession;
    IGFeedItem *_feedItem;
    id <IGFeedItemConfigurationType> _itemConfiguration;
    id <IGFeedConfigurationType> _feedConfiguration;
    IGAnalyticsMetadata *_analyticsMetadata;
    IGFeedHeartAnimator *_heartAnimator;
    IGFeedVideoCellManager *_videoCellManager;
    IGListAdapterScrollingContext *_scrollingContext;
    IGFeedUFITooltipManager *_ufiTooltipManager;
    id <IGFeedItemLoggingProviderDelegate><IGFeedItemDirectResponseLoggingProviderDelegate> _loggingProvider;
    IGFeedDirectResponseHandler *_directResponseHandler;
    IGFeedItemTimelineViewModel *_itemViewModel;
    IGFeedItemPageCellState *_pageCellState;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    IGCameraNavigationControllerTransitionDelegate *_boostPostTransitionDelegate;
    IGFeedItemHeader *_headerView;
    IGDirectResponseLogger *_directResponseLogger;
    IGImagePreparer *_imagePreparer;
    FBTimer *_ctaDwellDetectionTimer;
    FBTimer *_dwellDetectionTimer;
    IGFeedItemActionCellState *_actionCellState;
    IGFeedItemTextCellLinkHandler *_textCellLinkHandler;
    IGFeedItemZoomHandler *_zoomHandler;
    IGFeedItemZoomLogger *_zoomLogger;
    IGZoomViewPresenter *_zoomViewPresenter;
    IGTranslationNetworkDataSource *_translationDataSource;
    IGWatchAndActionController *_watchAndActionController;
    IGSavePopoutView *_savePopoutView;
    IGStoryViewerPresentationAnimationController *_animationController;
    IGStoryTrayLoggingContext *_storyTrayLoggingContext;
}

+ (id)feedCellTypeClassMap;
- (void).cxx_destruct;
- (id)actionCell;
@property(retain, nonatomic) IGFeedItemActionCellState *actionCellState; // @synthesize actionCellState=_actionCellState;
@property(nonatomic) __weak id <IGFeedSectionControllerActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)actionSheetDismissedWithButtonTitled:(id)arg1;
- (void)actionSheetFinishedHiding;
@property(retain, nonatomic) IGAdsManagerLogger *adsManagerLogger; // @synthesize adsManagerLogger=_adsManagerLogger;
@property(readonly, nonatomic) IGAnalyticsMetadata *analyticsMetadata; // @synthesize analyticsMetadata=_analyticsMetadata;
- (void)animateHeartAndPerformLike;
- (void)animateHeartLikeForMediaCell;
@property(readonly, nonatomic) IGStoryViewerPresentationAnimationController *animationController; // @synthesize animationController=_animationController;
@property(readonly, nonatomic) IGCameraNavigationControllerTransitionDelegate *boostPostTransitionDelegate; // @synthesize boostPostTransitionDelegate=_boostPostTransitionDelegate;
- (id)cellForItemAtIndex:(long long)arg1;
- (void)clearCTADwellDetectionTimer;
- (void)clearDwellDetectionTimer;
- (void)configureActionCell:(id)arg1;
- (void)configureBusinessCell:(id)arg1;
- (void)configureDismissExploreConfirmationCell:(id)arg1;
- (void)configureHeaderView:(id)arg1;
- (void)configureHiddenAdConfirmationCell:(id)arg1;
- (void)configureHiddenNoReasonCell:(id)arg1;
- (void)configureHiddenSpamConfirmationCell:(id)arg1;
- (void)configurePageCell:(id)arg1;
- (void)configurePhotoCell:(id)arg1;
- (void)configurePlaceholderCell:(id)arg1 forType:(long long)arg2;
- (void)configureTextCell:(id)arg1 forIndex:(long long)arg2;
- (void)configureVideoCell:(id)arg1;
- (double)containerWidth;
@property(retain, nonatomic) FBTimer *ctaDwellDetectionTimer; // @synthesize ctaDwellDetectionTimer=_ctaDwellDetectionTimer;
- (id)ctaPresenterContextForFeedItem:(id)arg1 viewController:(id)arg2 feedDirectResponseActionContext:(unsigned long long)arg3;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
@property(retain, nonatomic) IGFeedDirectResponseHandler *directResponseHandler; // @synthesize directResponseHandler=_directResponseHandler;
@property(retain, nonatomic) IGDirectResponseLogger *directResponseLogger; // @synthesize directResponseLogger=_directResponseLogger;
- (void)directShareSheetDidTapSend:(id)arg1;
@property(retain, nonatomic) FBTimer *dwellDetectionTimer; // @synthesize dwellDetectionTimer=_dwellDetectionTimer;
@property(readonly, nonatomic) id <IGFeedConfigurationType> feedConfiguration; // @synthesize feedConfiguration=_feedConfiguration;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (void)feedItemActionCellCustomizableButtonDidChange:(id)arg1 toVisible:(_Bool)arg2;
- (void)feedItemActionCellCustomizableButtonStateDidChange:(id)arg1 toState:(long long)arg2 withIntent:(id)arg3;
- (void)feedItemActionCellDidTapCommentButton:(id)arg1;
- (void)feedItemActionCellDidTapCommentCount:(id)arg1;
- (void)feedItemActionCellDidTapCustomizableButton:(id)arg1;
- (void)feedItemActionCellDidTapLikeButton:(id)arg1;
- (void)feedItemActionCellDidTapLikeViewCount:(id)arg1;
- (void)feedItemActionCellDidTapMoreButton:(id)arg1;
- (void)feedItemActionCellDidTapSaveButton:(id)arg1;
- (void)feedItemActionCellDidTapSendButton:(id)arg1;
- (void)feedItemActionCellDidTapShareButton:(id)arg1;
- (_Bool)feedItemActionCellIsOwnPhoto:(id)arg1;
- (void)feedItemActionCellPageControlDidChangeValue:(id)arg1;
- (void)feedItemBusinessCellDidTapPromote:(id)arg1;
- (void)feedItemBusinessCellDidTapViewAdGuideline:(id)arg1;
- (void)feedItemBusinessCellDidTapViewInsights:(id)arg1;
- (id)feedItemForCell:(id)arg1;
- (id)feedItemForFeedItemTextCell:(id)arg1;
- (void)feedItemHeaderDidTapAddLocation:(id)arg1;
- (void)feedItemHeaderDidTapCustomizableButton:(id)arg1;
- (void)feedItemHeaderDidTapFollowButton:(id)arg1;
- (void)feedItemHeaderDidTapLocation:(id)arg1;
- (void)feedItemHeaderDidTapOnDismissButton:(id)arg1;
- (void)feedItemHeaderDidTapOnMoreButton:(id)arg1;
- (void)feedItemHeaderDidTapToPresentStory:(id)arg1;
- (void)feedItemHeaderDidTapUser:(id)arg1;
- (void)feedItemHiddenConfirmationCellDidDismiss:(id)arg1;
- (void)feedItemHiddenConfirmationCellDidReport:(id)arg1;
- (void)feedItemHiddenConfirmationCellDidTapShowPost:(id)arg1;
- (void)feedItemPageCell:(id)arg1 didScrollToPageIndex:(long long)arg2 fromIndex:(long long)arg3;
- (void)feedItemPageCell:(id)arg1 itemDidStartViewing:(id)arg2;
- (void)feedItemPageCellDidDoubleTapToLike:(id)arg1;
- (void)feedItemPageCellDidSingleTap:(id)arg1;
- (void)feedItemPhotoCellDidDoubleTapToLike:(id)arg1;
- (void)feedItemPhotoCellDidShowTags:(id)arg1;
- (void)feedItemPhotoCellDidSingleTap:(id)arg1;
- (void)feedItemPhotoCellImageDidLoadImage:(id)arg1;
- (void)feedItemPhotoCellPercentVisibleDidChange:(id)arg1 percentVisible:(double)arg2;
- (void)feedItemTextCellLinkHandler:(id)arg1 feedItemTextCell:(id)arg2 didLongPressReplyText:(id)arg3;
- (void)feedItemTextCellLinkHandler:(id)arg1 feedItemTextCell:(id)arg2 didTapOnURL:(id)arg3;
- (void)feedItemTextCellLinkHandler:(id)arg1 feedItemTextCellDidTapOnMore:(id)arg2;
- (void)feedItemTextCellLinkHandler:(id)arg1 feedItemTextCellDidTapTranslation:(id)arg2;
- (id)feedVideoCellManager;
@property(readonly, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
- (void)followButton:(id)arg1 logfollowButtonTapWithAction:(long long)arg2 targetID:(id)arg3;
- (void)handleCTADwellDetectionTimer;
- (void)handleDwellDetectionTimer;
@property(nonatomic) _Bool hasQueuedBatchUpdate; // @synthesize hasQueuedBatchUpdate=_hasQueuedBatchUpdate;
@property(retain, nonatomic) IGFeedItemHeader *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) __weak IGFeedHeartAnimator *heartAnimator; // @synthesize heartAnimator=_heartAnimator;
- (void)hideForDidEndDisplay;
@property(retain, nonatomic) IGImagePreparer *imagePreparer; // @synthesize imagePreparer=_imagePreparer;
- (void)inFeedCommentViewControllerDidPostComment:(id)arg1 feedItem:(id)arg2;
- (id)initWithItemConfiguration:(id)arg1 feedConfiguration:(id)arg2 heartAnimator:(id)arg3 savePopoutView:(id)arg4 videoCellManager:(id)arg5 scrollingContext:(id)arg6 loggingProvider:(id)arg7 userSession:(id)arg8 ufiTooltipManager:(id)arg9 analyticsMetadata:(id)arg10;
- (struct UIEdgeInsets)inset;
- (_Bool)isCustomizableButtonDarkenedForFeedItemActionCell:(id)arg1;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(readonly, nonatomic) id <IGFeedItemConfigurationType> itemConfiguration; // @synthesize itemConfiguration=_itemConfiguration;
@property(retain, nonatomic) IGFeedItemTimelineViewModel *itemViewModel; // @synthesize itemViewModel=_itemViewModel;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)logMediaShowTagsWithExtra:(id)arg1;
- (void)logSingleMediaTapWithExtra:(id)arg1;
@property(readonly, nonatomic) __weak id <IGFeedItemLoggingProviderDelegate><IGFeedItemDirectResponseLoggingProviderDelegate> loggingProvider; // @synthesize loggingProvider=_loggingProvider;
- (long long)numberOfItems;
- (void)objectInTagView:(id)arg1 didTapOnTagView:(id)arg2;
- (void)onFeedItemDeleted:(id)arg1;
- (void)onFeedItemHidden:(id)arg1;
- (void)onFeedItemUpdated:(id)arg1;
- (void)onLeadGenFormSubmitted:(id)arg1;
- (id)pageCell;
@property(retain, nonatomic) IGFeedItemPageCellState *pageCellState; // @synthesize pageCellState=_pageCellState;
@property(nonatomic) _Bool pendingDidEndDisplayCollapse; // @synthesize pendingDidEndDisplayCollapse=_pendingDidEndDisplayCollapse;
- (id)photoCell;
- (void)presentAdsManagerWithFeedItem:(id)arg1;
- (void)presentBoostPostViewControllerWithCell:(id)arg1;
- (void)presentUsertagsController;
- (void)pushCommentsWithReplyText:(id)arg1 showKeyboard:(_Bool)arg2;
- (void)pushControllerForInternalURL:(id)arg1;
- (void)pushControllerForUser:(id)arg1;
- (void)pushLikersViewController;
- (void)pushLocationController;
- (void)pushVideoViewsController;
- (void)reelSeenStateStoreDidUpdate;
- (void)reloadCaptionCell;
@property(readonly, nonatomic) IGSavePopoutView *savePopoutView; // @synthesize savePopoutView=_savePopoutView;
@property(readonly, nonatomic) __weak IGListAdapterScrollingContext *scrollingContext; // @synthesize scrollingContext=_scrollingContext;
- (void)setActionCellCTAHighlighted:(_Bool)arg1 universe:(id)arg2 experiment:(id)arg3 intent:(id)arg4 animated:(_Bool)arg5;
@property(nonatomic) _Bool showEasyReportingActionSheet; // @synthesize showEasyReportingActionSheet=_showEasyReportingActionSheet;
@property(retain, nonatomic) IGStoryTrayLoggingContext *storyTrayLoggingContext; // @synthesize storyTrayLoggingContext=_storyTrayLoggingContext;
@property(retain, nonatomic) IGFeedItemTextCellLinkHandler *textCellLinkHandler; // @synthesize textCellLinkHandler=_textCellLinkHandler;
@property(retain, nonatomic) IGTranslationNetworkDataSource *translationDataSource; // @synthesize translationDataSource=_translationDataSource;
- (void)setUpDwellDetectionTimer;
@property(retain, nonatomic) IGWatchAndActionController *watchAndActionController; // @synthesize watchAndActionController=_watchAndActionController;
@property(retain, nonatomic) IGFeedItemZoomHandler *zoomHandler; // @synthesize zoomHandler=_zoomHandler;
@property(retain, nonatomic) IGFeedItemZoomLogger *zoomLogger; // @synthesize zoomLogger=_zoomLogger;
@property(retain, nonatomic) IGZoomViewPresenter *zoomViewPresenter; // @synthesize zoomViewPresenter=_zoomViewPresenter;
- (void)showActionSheetWithFeedItem:(id)arg1 entryPoint:(unsigned long long)arg2;
- (void)showReportActionSheet;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndex:(long long)arg2;
- (void)storyViewer:(id)arg1 didFocusOnReelWithPK:(id)arg2;
- (void)storyViewerDidFinish:(id)arg1;
- (id)supplementaryViewKindClasses;
- (id)supportedElementKinds;
- (void)translationNetworkDataSource:(id)arg1 didFailWithError:(id)arg2;
- (void)translationNetworkDataSource:(id)arg1 didLoadTranslations:(id)arg2;
@property(readonly, nonatomic) __weak IGFeedUFITooltipManager *ufiTooltipManager; // @synthesize ufiTooltipManager=_ufiTooltipManager;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)videoCellDidDoubleTap:(id)arg1;
- (void)videoCellDidSingleTap:(id)arg1;
@property(readonly, nonatomic) __weak IGFeedVideoCellManager *videoCellManager; // @synthesize videoCellManager=_videoCellManager;
- (void)viewControllerDidDeletePromotion:(id)arg1;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

