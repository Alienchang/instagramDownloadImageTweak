//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGDirectStoryRecipientListViewControllerDelegate.h"
#import "IGDirectStoryTextTransitionCoordinatorDatasource.h"
#import "IGDirectStoryTextTransitionCoordinatorDelegate.h"
#import "IGSoundStateListenerDelegate.h"
#import "IGStoryAssetManagerDelegate.h"
#import "IGStoryCreationDrawingViewControllerDelegate.h"
#import "IGStoryEmojiViewControllerDelegate.h"
#import "IGStoryPreviewDefaultFooterViewDelegate.h"
#import "IGStoryPreviewLeftHeaderViewDelegate.h"
#import "IGStoryPreviewOverlayGestureControllerDelegate.h"
#import "IGStoryPreviewOverlayGestureControllerPanDelegate.h"
#import "IGStoryPreviewOverlayGestureControllerSwipeDelegate.h"
#import "IGStoryPreviewRavenChromeViewDataSource.h"
#import "IGStoryPreviewRavenFooterViewDelegate.h"
#import "IGStoryPreviewRightHeaderViewDelegate.h"
#import "IGStorySaveMediaRequestDelegate.h"
#import "IGStorySwipableFilterViewDelegate.h"
#import "IGStoryTextEntryDelegate.h"
#import "IGStoryWebLinksCreationViewControllerDelegate.h"
#import "IGTooltipViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class IGForceTouchGestureRecognizer, IGGradientView, IGReelCreationModel, IGSoundStateListener, IGStoryAssetManager, IGStoryBoomerangManager, IGStoryComposerWaterfallLoggingContext, IGStoryCreationDrawingViewController, IGStoryEmojiDataSource, IGStoryFullscreenWordOverlayView, IGStoryGradientRingView, IGStoryPreviewCenterHeaderView, IGStoryPreviewDeleteOptionView, IGStoryPreviewLeftHeaderView, IGStoryPreviewOverlayGestureController, IGStoryPreviewRightHeaderView, IGStorySaveMediaRequest, IGStorySwipableFilterView, IGStoryTextEntryViewController, IGStoryWebLinksCreationViewController, IGTooltipView, IGUserSession, NSString, UIImageView, UITapGestureRecognizer, UIView, UIView<IGStoryPreviewFooterViewType>;

@interface IGStoryCameraPreviewViewController : IGViewController <IGStoryCreationDrawingViewControllerDelegate, IGStorySaveMediaRequestDelegate, UIGestureRecognizerDelegate, IGStorySwipableFilterViewDelegate, IGTooltipViewDelegate, IGSoundStateListenerDelegate, IGStoryEmojiViewControllerDelegate, IGStoryPreviewRightHeaderViewDelegate, IGStoryPreviewLeftHeaderViewDelegate, IGStoryPreviewRavenFooterViewDelegate, IGStoryPreviewRavenChromeViewDataSource, IGStoryPreviewDefaultFooterViewDelegate, IGStoryPreviewOverlayGestureControllerDelegate, IGStoryPreviewOverlayGestureControllerPanDelegate, IGStoryPreviewOverlayGestureControllerSwipeDelegate, IGStoryTextEntryDelegate, IGStoryWebLinksCreationViewControllerDelegate, IGStoryAssetManagerDelegate, IGDirectStoryRecipientListViewControllerDelegate, IGDirectStoryTextTransitionCoordinatorDelegate, IGDirectStoryTextTransitionCoordinatorDatasource>
{
    _Bool _mentionsEnabled;
    _Bool _multipleTextEnabled;
    _Bool _canZoomScreenForLivePhoto;
    id <IGStoryCameraPreviewViewControllerDelegate> _delegate;
    IGStoryPreviewLeftHeaderView *_leftHeaderView;
    IGStoryPreviewCenterHeaderView *_centerHeaderView;
    IGStoryPreviewRightHeaderView *_rightHeaderView;
    UIView<IGStoryPreviewFooterViewType> *_footerView;
    IGStoryBoomerangManager *_boomerangManager;
    IGStoryAssetManager *_assetManager;
    IGStoryComposerWaterfallLoggingContext *_loggingContext;
    NSString *_directStoryId;
    IGUserSession *_userSession;
    UIView *_containerView;
    UIImageView *_previewImageView;
    UIView *_contentView;
    UIView *_drawingCanvasView;
    IGReelCreationModel *_storyModel;
    IGStorySaveMediaRequest *_saveRequest;
    IGGradientView *_topGradient;
    IGGradientView *_bottomGradient;
    UIView *_overlayContainerView;
    IGStoryPreviewDeleteOptionView *_deleteOptionView;
    IGStoryTextEntryViewController *_textEntryViewController;
    UITapGestureRecognizer *_captionBackgroundTapRecognizer;
    IGStoryPreviewOverlayGestureController *_gestureController;
    IGStoryCreationDrawingViewController *_drawingViewController;
    IGStorySwipableFilterView *_swipableFilterView;
    IGSoundStateListener *_soundStateListener;
    IGStoryWebLinksCreationViewController *_webLinksCreationViewController;
    IGStoryGradientRingView *_loadingView;
    IGStoryFullscreenWordOverlayView *_fullscreenWordOverlayView;
    IGForceTouchGestureRecognizer *_toggleLiveBoomerangGesture;
    IGTooltipView *_nuxView;
    IGStoryEmojiDataSource *_stickerDataSource;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)applyFilterToAsset;
@property(readonly, nonatomic) IGStoryAssetManager *assetManager; // @synthesize assetManager=_assetManager;
- (void)beginEditingTextView:(id)arg1;
@property(readonly, nonatomic) IGStoryBoomerangManager *boomerangManager; // @synthesize boomerangManager=_boomerangManager;
@property(retain, nonatomic) IGGradientView *bottomGradient; // @synthesize bottomGradient=_bottomGradient;
- (_Bool)canBeginInteractiveTransition;
- (_Bool)canShowBoomButton;
@property(nonatomic) _Bool canZoomScreenForLivePhoto; // @synthesize canZoomScreenForLivePhoto=_canZoomScreenForLivePhoto;
- (void)cancelShare;
@property(readonly, nonatomic) UITapGestureRecognizer *captionBackgroundTapRecognizer; // @synthesize captionBackgroundTapRecognizer=_captionBackgroundTapRecognizer;
- (void)captionBackgroundTapped:(id)arg1;
@property(readonly, nonatomic) IGStoryPreviewCenterHeaderView *centerHeaderView; // @synthesize centerHeaderView=_centerHeaderView;
- (struct CGRect)containerFrameForViewBounds;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)dealloc;
- (void)defaultFooterView:(id)arg1 didTapCancelButton:(id)arg2;
- (void)defaultFooterView:(id)arg1 didTapDownloadButton:(id)arg2;
- (void)defaultFooterView:(id)arg1 didTapStoryButton:(id)arg2;
@property(nonatomic) __weak id <IGStoryCameraPreviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGStoryPreviewDeleteOptionView *deleteOptionView; // @synthesize deleteOptionView=_deleteOptionView;
- (void)didDismissEmojiViewController:(id)arg1;
- (void)didTapAddDrawingButton:(id)arg1;
- (void)didTapAddStickerButton:(id)arg1;
- (void)didTapAddStoryLinkButton:(id)arg1;
- (void)didTapAddTextButton:(id)arg1;
- (void)didTapBoomButton:(id)arg1;
- (void)didTapCloseButton:(id)arg1;
- (void)didTapToggleAudioButton:(id)arg1;
- (void)didTapTooltipView:(id)arg1;
- (void)didToggleLiveBoomerang:(id)arg1;
@property(readonly, copy, nonatomic) NSString *directStoryId; // @synthesize directStoryId=_directStoryId;
- (void)directStoryTextTransitionCoordinatorDidBeginTransition:(id)arg1;
- (void)downloadButtonTapped;
@property(retain, nonatomic) UIView *drawingCanvasView; // @synthesize drawingCanvasView=_drawingCanvasView;
@property(retain, nonatomic) IGStoryCreationDrawingViewController *drawingViewController; // @synthesize drawingViewController=_drawingViewController;
- (void)drawingViewControllerDidDismiss:(id)arg1;
- (void)emojiViewController:(id)arg1 didSelectEmojiUnicode:(id)arg2 atPoint:(struct CGPoint)arg3 size:(struct CGSize)arg4;
- (void)emojiViewController:(id)arg1 didSelectLocationStickerModel:(id)arg2;
- (void)emojiViewController:(id)arg1 didSelectStaticSticker:(id)arg2 atPoint:(struct CGPoint)arg3 size:(struct CGSize)arg4;
- (void)emojiViewController:(id)arg1 didSelectTimeStickerModel:(id)arg2 atPoint:(struct CGPoint)arg3 size:(struct CGSize)arg4;
- (void)finalizeOutputAsset;
- (void)finalizeOverlayContainerView;
- (void)finalizeStoryModel;
@property(readonly, nonatomic) UIView<IGStoryPreviewFooterViewType> *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) IGStoryFullscreenWordOverlayView *fullscreenWordOverlayView; // @synthesize fullscreenWordOverlayView=_fullscreenWordOverlayView;
@property(readonly, nonatomic) IGStoryPreviewOverlayGestureController *gestureController; // @synthesize gestureController=_gestureController;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)hideControls:(_Bool)arg1;
- (void)hideNUX;
- (id)image;
- (id)initWithAssetManager:(id)arg1 frame:(struct CGRect)arg2 loggingContext:(id)arg3 directStoryId:(id)arg4 userSession:(id)arg5 storyModel:(id)arg6;
- (id)internalFeatures;
- (_Bool)isAfterBoomEnabled;
- (_Bool)isDirectStory;
- (_Bool)isTextOnly;
@property(readonly, nonatomic) IGStoryPreviewLeftHeaderView *leftHeaderView; // @synthesize leftHeaderView=_leftHeaderView;
- (void)leftHeaderView:(id)arg1 didTapCancelButton:(id)arg2;
@property(retain, nonatomic) IGStoryGradientRingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) IGStoryComposerWaterfallLoggingContext *loggingContext; // @synthesize loggingContext=_loggingContext;
@property(readonly, nonatomic) _Bool mentionsEnabled; // @synthesize mentionsEnabled=_mentionsEnabled;
@property(readonly, nonatomic) _Bool multipleTextEnabled; // @synthesize multipleTextEnabled=_multipleTextEnabled;
- (struct CGPoint)nuxPosition;
@property(retain, nonatomic) IGTooltipView *nuxView; // @synthesize nuxView=_nuxView;
@property(readonly, nonatomic) UIView *overlayContainerView; // @synthesize overlayContainerView=_overlayContainerView;
- (void)overlayGestureController:(id)arg1 didEndPanView:(id)arg2;
- (void)overlayGestureController:(id)arg1 didRemoveView:(id)arg2;
- (void)overlayGestureController:(id)arg1 didStartPanView:(id)arg2;
- (void)overlayGestureController:(id)arg1 didSwipeUp:(id)arg2;
- (void)overlayGestureController:(id)arg1 didTapView:(id)arg2;
- (void)overlayGestureController:(id)arg1 didUpdateTransformForView:(id)arg2;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersTabBarHidden;
- (void)presentStickerViewController;
- (void)presentStoryLinkViewController;
@property(retain, nonatomic) UIImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
- (_Bool)ravenEnabled;
- (void)ravenFooterView:(id)arg1 didTapDownloadButton:(id)arg2;
- (void)ravenFooterView:(id)arg1 didTapSendButton:(id)arg2;
- (void)ravenFooterView:(id)arg1 didTapStoryButton:(id)arg2;
@property(readonly, nonatomic) IGStoryPreviewRightHeaderView *rightHeaderView; // @synthesize rightHeaderView=_rightHeaderView;
- (void)saveMediaRequest:(id)arg1 didSaveToCameraRollURL:(id)arg2;
- (void)saveMediaRequestDidFailSaving:(id)arg1;
@property(retain, nonatomic) IGStorySaveMediaRequest *saveRequest; // @synthesize saveRequest=_saveRequest;
- (void)selectRecipientViewControllerDidSend:(id)arg1 storyModel:(id)arg2 asset:(id)arg3 toStory:(_Bool)arg4 toDirectRecipients:(id)arg5;
- (void)sendToDirectStoryIfPossible;
- (void)setImage:(id)arg1 fadeIn:(_Bool)arg2;
- (void)setOverlayGesturesEnabled:(_Bool)arg1;
- (void)setPreviewImage:(id)arg1;
@property(retain, nonatomic) IGSoundStateListener *soundStateListener; // @synthesize soundStateListener=_soundStateListener;
@property(retain, nonatomic) IGReelCreationModel *storyModel; // @synthesize storyModel=_storyModel;
@property(retain, nonatomic) IGStorySwipableFilterView *swipableFilterView; // @synthesize swipableFilterView=_swipableFilterView;
@property(retain, nonatomic) IGForceTouchGestureRecognizer *toggleLiveBoomerangGesture; // @synthesize toggleLiveBoomerangGesture=_toggleLiveBoomerangGesture;
@property(retain, nonatomic) IGGradientView *topGradient; // @synthesize topGradient=_topGradient;
- (void)setUpDrawingViewController;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)setVideo:(id)arg1 fadeIn:(_Bool)arg2;
@property(retain, nonatomic) IGStoryWebLinksCreationViewController *webLinksCreationViewController; // @synthesize webLinksCreationViewController=_webLinksCreationViewController;
- (void)shareItemWithStoryModel:(id)arg1 asset:(id)arg2 toStory:(_Bool)arg3 directRecipients:(id)arg4;
- (void)showNUXIfNeeded;
- (void)showOutputLoadingIndicatorWithDelay;
- (void)showSwipableFilterView:(id)arg1 fadeIn:(_Bool)arg2;
- (void)soundListenerDidUpdate:(id)arg1;
@property(readonly, nonatomic) IGStoryEmojiDataSource *stickerDataSource; // @synthesize stickerDataSource=_stickerDataSource;
- (id)stickerIdForStickerView:(id)arg1;
- (void)storyAssetManagerDidBeginUpdatingOutputAsset:(id)arg1;
- (void)storyAssetManagerDidFinishUpdatingOutputAsset:(id)arg1 withSuccess:(_Bool)arg2;
- (void)storyButtonTapped;
- (void)storySwipableFilterViewDidSwipeToFilter:(id)arg1;
- (void)storyTextEntry:(id)arg1 didEndEditingWithTextView:(id)arg2 didTapSend:(_Bool)arg3;
@property(readonly, nonatomic) IGStoryTextEntryViewController *textEntryViewController; // @synthesize textEntryViewController=_textEntryViewController;
- (id)textViews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)tryBeginEditingText;
- (void)updateControlsForAssetAvailability;
- (void)updateForCurrentAssetWithFadeTransition:(_Bool)arg1;
- (void)updateFullscreenWordOverlayViewWithMode:(long long)arg1;
- (void)updateViewsForTextOnlyModeIfNeeded;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)webLinksCreationViewControllerDidEnterUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

