//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGCameraNavigationControllerDelegate.h"
#import "IGCameraViewControllerProtocol.h"
#import "IGClipCollectionControllerDelegate.h"
#import "IGEditorTabBarDelegate.h"
#import "IGFilterCollectionControllerDelegate.h"
#import "IGFilterControlViewDelegate.h"
#import "IGOverlayNuxControllerDelegate.h"
#import "IGShareViewControllerDelegate.h"
#import "IGVideoPlaybackViewDelegate.h"
#import "IGVideoScrubberViewDelegate.h"
#import "IGVideoTrimConfirmationDelegate.h"
#import "IGVideoTrimControllerDelegate.h"

@class IGCameraNavigationController, IGCaptureFlowViewModel, IGClipCollectionController, IGEditorTabBar, IGFilterCollectionController, IGFilterControlView, IGMediaMetadata, IGOverlayNuxController, IGRearrangeOverlayView, IGSegmentedProgressView, IGShareListManager, IGUserSession, IGVideoComposition, IGVideoInfo, IGVideoPlayButton, IGVideoPlaybackView, IGVideoScrubberView, IGVideoTrimViewController, NSMutableDictionary, NSString, UIBarButtonItem, UICollectionView, UIImageView, UILabel, UIView, UIView<IGEditorTabView>;

@interface IGVideoEditorViewController : IGViewController <IGFilterCollectionControllerDelegate, IGClipCollectionControllerDelegate, IGVideoPlaybackViewDelegate, IGEditorTabBarDelegate, IGVideoScrubberViewDelegate, IGFilterControlViewDelegate, IGOverlayNuxControllerDelegate, IGCameraNavigationControllerDelegate, IGVideoTrimControllerDelegate, IGVideoTrimConfirmationDelegate, IGCameraViewControllerProtocol, IGShareViewControllerDelegate>
{
    _Bool _viewLoaded;
    _Bool _needsVideoUpdate;
    _Bool _trimAnimationAlreadyShown;
    _Bool _isClipTrimMode;
    _Bool _didReorderTray;
    _Bool _videoIsReady;
    _Bool _hasCancelledShareVC;
    id <IGVideoEditorDelegate> _delegate;
    IGUserSession *_userSession;
    IGVideoInfo *_videoInfo;
    IGVideoComposition *_workingVideoComposition;
    IGVideoPlaybackView *_playerView;
    IGVideoPlayButton *_playButton;
    IGMediaMetadata *_mediaMetadata;
    IGShareListManager *_shareListManager;
    IGCaptureFlowViewModel *_captureFlowViewModel;
    NSMutableDictionary *_adjustedFilterStrengthValues;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_cancelButton;
    UIImageView *_cinemaButton;
    UIImageView *_audioMuteButton;
    UIView<IGEditorTabView> *_coverFrameButton;
    UIView<IGEditorTabView> *_trimmerButton;
    UIView<IGEditorTabView> *_multiClipButton;
    UIView<IGEditorTabView> *_filtersButton;
    UIView *_audioMuteOverlayView;
    UILabel *_audioMutedLabel;
    UILabel *_audioOnLabel;
    long long _audioMuteToggleTick;
    double _originalVideoLength;
    double _maxVideoDuration;
    UIView *_toolsContainerView;
    IGEditorTabBar *_toolsTabBar;
    IGEditorTabBar *_toggleToolsTabBar;
    UIView *_toolView;
    IGRearrangeOverlayView *_rearrangeFilterOverlayView;
    IGRearrangeOverlayView *_rearrangeClipOverlayView;
    UICollectionView *_filterCollectionView;
    IGFilterCollectionController *_filterTrayController;
    IGFilterControlView *_filterControlView;
    IGClipCollectionController *_clipTrayController;
    IGVideoTrimViewController *_videoTrimViewController;
    IGSegmentedProgressView *_trimProgressView;
    IGVideoScrubberView *_scrubberView;
    IGOverlayNuxController *_overlayNuxController;
    IGClipCollectionController *_clipCollectionController;
    long long _videoOrigin;
    struct CGSize _videoDisplaySize;
    CDStruct_1b6d18a9 _keyTime;
    CDStruct_e83c9415 _previousTrimmedRange;
}

- (void).cxx_destruct;
- (id)accessibilityHintForView:(id)arg1;
- (id)accessibilityLabelForView:(id)arg1;
- (id)activeTrimTabView;
@property(retain, nonatomic) NSMutableDictionary *adjustedFilterStrengthValues; // @synthesize adjustedFilterStrengthValues=_adjustedFilterStrengthValues;
- (id)analyticsModule;
- (void)applicationWillResignActive:(id)arg1;
@property(retain, nonatomic) UIImageView *audioMuteButton; // @synthesize audioMuteButton=_audioMuteButton;
@property(retain, nonatomic) UIView *audioMuteOverlayView; // @synthesize audioMuteOverlayView=_audioMuteOverlayView;
@property(nonatomic) long long audioMuteToggleTick; // @synthesize audioMuteToggleTick=_audioMuteToggleTick;
@property(retain, nonatomic) UILabel *audioMutedLabel; // @synthesize audioMutedLabel=_audioMutedLabel;
@property(retain, nonatomic) UILabel *audioOnLabel; // @synthesize audioOnLabel=_audioOnLabel;
- (void)buildNavbar;
- (void)buildToggleToolsTabBar;
- (void)buildToolContainerView;
- (void)buildToolsTabBar;
- (id)cacheKeyForClip:(id)arg1 filter:(id)arg2 time:(CDStruct_1b6d18a9)arg3;
- (void)cacheThumbnail:(id)arg1 forClip:(id)arg2 andTime:(CDStruct_1b6d18a9)arg3;
- (id)cachedThumbnailForClip:(id)arg1 andTime:(CDStruct_1b6d18a9)arg2;
- (void)cameraControllerDidCancel;
- (void)cameraControllerDidFinishWithDirectShare:(_Bool)arg1;
- (void)cameraControllerDidFinishWithPhoto:(id)arg1 fromOrigin:(long long)arg2;
- (void)cameraControllerDidFinishWithVideoComposition:(id)arg1;
@property(retain, nonatomic) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void)cancelRenderAndUpload;
@property(retain, nonatomic) IGCaptureFlowViewModel *captureFlowViewModel; // @synthesize captureFlowViewModel=_captureFlowViewModel;
@property(retain, nonatomic) UIImageView *cinemaButton; // @synthesize cinemaButton=_cinemaButton;
@property(retain, nonatomic) IGClipCollectionController *clipCollectionController; // @synthesize clipCollectionController=_clipCollectionController;
- (void)clipController:(id)arg1 didChangeClipOrder:(id)arg2;
- (void)clipControllerDidFinishReordering:(id)arg1;
- (void)clipControllerDidStartReordering:(id)arg1;
@property(retain, nonatomic) IGClipCollectionController *clipTrayController; // @synthesize clipTrayController=_clipTrayController;
- (void)configureAccessibilityForTabBar:(id)arg1;
@property(retain, nonatomic) UIView<IGEditorTabView> *coverFrameButton; // @synthesize coverFrameButton=_coverFrameButton;
- (id)createTitleView:(id)arg1 withSubtitle:(id)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <IGVideoEditorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool didReorderTray; // @synthesize didReorderTray=_didReorderTray;
- (void)didTapCancel;
- (void)didTapClipAtIndexPath:(id)arg1;
- (void)discardCancel;
- (void)dismissFilterControlView:(id)arg1;
- (void)done;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
- (id)draggingContainerViewForClipController:(id)arg1;
- (_Bool)enableNavState;
- (void)exitTrimControlView;
@property(retain, nonatomic) UICollectionView *filterCollectionView; // @synthesize filterCollectionView=_filterCollectionView;
@property(retain, nonatomic) IGFilterControlView *filterControlView; // @synthesize filterControlView=_filterControlView;
- (void)filterControlView:(id)arg1 didChangeBorderSelection:(_Bool)arg2;
- (void)filterControlView:(id)arg1 didChangeTintColor:(unsigned long long)arg2 withTintType:(unsigned long long)arg3;
- (void)filterControlView:(id)arg1 didChangeValue:(double)arg2;
- (void)filterControlView:(id)arg1 didChangetintIntensity:(double)arg2 tintType:(unsigned long long)arg3;
- (void)filterControlViewDidEndDragging:(id)arg1;
- (void)filterControlViewDidPressCancel:(id)arg1;
- (void)filterControlViewDidPressDone:(id)arg1;
- (void)filterControlViewDidStartDragging:(id)arg1;
- (void)filterControlViewDidTapRotate:(id)arg1;
- (void)filterControlViewDidToggleGrid:(_Bool)arg1;
- (void)filterControlViewNeedUpdateValue;
- (void)filterController:(id)arg1 didSelectFilterStrengthForClass:(Class)arg2;
- (void)filterController:(id)arg1 didSelectFilterWithClass:(Class)arg2 changed:(_Bool)arg3 willScroll:(_Bool)arg4;
- (double)filterController:(id)arg1 filterStrengthForClass:(Class)arg2;
- (void)filterControllerDidFinishReordering:(id)arg1;
- (void)filterControllerDidSelectAddMoreFilters:(id)arg1;
- (void)filterControllerDidStartReordering:(id)arg1;
- (void)filterPlayerViewDidFinishPlaying;
- (void)filterPlayerViewDidFinishPlayingWithAnimation:(_Bool)arg1;
@property(retain, nonatomic) IGFilterCollectionController *filterTrayController; // @synthesize filterTrayController=_filterTrayController;
@property(retain, nonatomic) UIView<IGEditorTabView> *filtersButton; // @synthesize filtersButton=_filtersButton;
- (void)generateScrubberFrames;
@property(nonatomic) _Bool hasCancelledShareVC; // @synthesize hasCancelledShareVC=_hasCancelledShareVC;
- (id)initWithAssetInMediaMetadata:(id)arg1 shareListManager:(id)arg2 captureFlowViewModel:(id)arg3 userSession:(id)arg4;
- (id)initWithDraft:(id)arg1 shareListManager:(id)arg2 captureFlowViewModel:(id)arg3 userSession:(id)arg4;
- (id)initWithOrigin:(long long)arg1 videoInfo:(id)arg2 mediaMetadata:(id)arg3 shareListManager:(id)arg4 captureFlowViewModel:(id)arg5 userSession:(id)arg6;
- (void)initializeFromEditsDictionary;
- (_Bool)isAudioMutingEnabled;
@property(nonatomic) _Bool isClipTrimMode; // @synthesize isClipTrimMode=_isClipTrimMode;
- (_Bool)isDraftFiltered;
- (_Bool)isDraftWorthWarningBeforeDiscard;
- (_Bool)isValidDuration;
- (_Bool)isValidVideo:(id)arg1;
@property(nonatomic) CDStruct_1b6d18a9 keyTime; // @synthesize keyTime=_keyTime;
@property(nonatomic) double maxVideoDuration; // @synthesize maxVideoDuration=_maxVideoDuration;
@property(retain, nonatomic) IGMediaMetadata *mediaMetadata; // @synthesize mediaMetadata=_mediaMetadata;
@property(retain, nonatomic) UIView<IGEditorTabView> *multiClipButton; // @synthesize multiClipButton=_multiClipButton;
@property(readonly, nonatomic) IGCameraNavigationController *navController;
@property(nonatomic) _Bool needsVideoUpdate; // @synthesize needsVideoUpdate=_needsVideoUpdate;
- (void)onToolCancel:(id)arg1;
- (void)onToolDone:(id)arg1;
- (void)onVideoTapped;
@property(nonatomic) double originalVideoLength; // @synthesize originalVideoLength=_originalVideoLength;
@property(retain, nonatomic) IGOverlayNuxController *overlayNuxController; // @synthesize overlayNuxController=_overlayNuxController;
- (void)overlayNuxControllerWillDismiss;
@property(retain, nonatomic) IGVideoPlayButton *playButton; // @synthesize playButton=_playButton;
- (void)playbackView:(id)arg1 didPlayToTime:(CDStruct_1b6d18a9)arg2;
@property(retain, nonatomic) IGVideoPlaybackView *playerView; // @synthesize playerView=_playerView;
- (void)populateThumbnailCacheForClipIndex:(unsigned long long)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)prepareForShareStep;
- (void)presentFilterControlView:(id)arg1 withTitle:(id)arg2 subtitle:(id)arg3 andCompletion:(CDUnknownBlockType)arg4;
- (void)presentFilterControlView:(id)arg1 withTitle:(id)arg2 subtitle:(id)arg3 leftBarButtonItem:(id)arg4 rightBarButtonItem:(id)arg5 andCompletion:(CDUnknownBlockType)arg6;
@property(nonatomic) CDStruct_e83c9415 previousTrimmedRange; // @synthesize previousTrimmedRange=_previousTrimmedRange;
@property(retain, nonatomic) IGRearrangeOverlayView *rearrangeClipOverlayView; // @synthesize rearrangeClipOverlayView=_rearrangeClipOverlayView;
@property(retain, nonatomic) IGRearrangeOverlayView *rearrangeFilterOverlayView; // @synthesize rearrangeFilterOverlayView=_rearrangeFilterOverlayView;
- (void)reconcileVideoPlayer;
@property(retain, nonatomic) IGVideoScrubberView *scrubberView; // @synthesize scrubberView=_scrubberView;
- (void)scrubberViewBeganMovingHandle;
- (void)scrubberViewDidMoveHandleToPosition:(double)arg1;
- (void)scrubberViewDidTapOnHandle;
- (void)scrubberViewFinishedMovingHandle;
- (id)sendAnalyticsEvent:(id)arg1;
- (void)setNavigationItemTitle:(id)arg1 subtitle:(id)arg2;
@property(retain, nonatomic) IGShareListManager *shareListManager; // @synthesize shareListManager=_shareListManager;
@property(retain, nonatomic) IGEditorTabBar *toggleToolsTabBar; // @synthesize toggleToolsTabBar=_toggleToolsTabBar;
@property(retain, nonatomic) UIView *toolView; // @synthesize toolView=_toolView;
@property(retain, nonatomic) UIView *toolsContainerView; // @synthesize toolsContainerView=_toolsContainerView;
@property(retain, nonatomic) IGEditorTabBar *toolsTabBar; // @synthesize toolsTabBar=_toolsTabBar;
@property(nonatomic) _Bool trimAnimationAlreadyShown; // @synthesize trimAnimationAlreadyShown=_trimAnimationAlreadyShown;
@property(retain, nonatomic) IGSegmentedProgressView *trimProgressView; // @synthesize trimProgressView=_trimProgressView;
@property(retain, nonatomic) UIView<IGEditorTabView> *trimmerButton; // @synthesize trimmerButton=_trimmerButton;
@property(nonatomic) struct CGSize videoDisplaySize; // @synthesize videoDisplaySize=_videoDisplaySize;
@property(retain, nonatomic) IGVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) _Bool videoIsReady; // @synthesize videoIsReady=_videoIsReady;
@property(nonatomic) long long videoOrigin; // @synthesize videoOrigin=_videoOrigin;
@property(retain, nonatomic) IGVideoTrimViewController *videoTrimViewController; // @synthesize videoTrimViewController=_videoTrimViewController;
@property(retain, nonatomic) IGVideoComposition *workingVideoComposition; // @synthesize workingVideoComposition=_workingVideoComposition;
- (void)shareViewControllerDidAppear:(id)arg1;
- (void)shareViewControllerDidCancel:(id)arg1;
- (void)shareViewControllerWillFinish:(id)arg1;
- (void)showClips;
- (void)showCoverFramePicker;
- (void)showFilters;
- (void)showInvalidVideoError;
- (void)showTrimAnimation;
- (void)showTrimOverlayNux;
- (void)showVideoTrimmer;
- (_Bool)stabilizationEnabled;
- (void)startVideoRender;
- (void)tabBar:(id)arg1 didSelectTabView:(id)arg2 previousTabView:(id)arg3;
- (_Bool)tabBar:(id)arg1 shouldSelectTabView:(id)arg2;
- (id)titleForItem:(id)arg1;
- (void)toggleAudioMuting;
- (void)togglePlayback;
- (void)toggleStabilization;
- (void)trimClips;
- (double)trimViewTimeScaleForClipDuration:(double)arg1;
- (void)trimmerNuxTapped;
- (void)updateClipsWithVideoComposition:(id)arg1;
- (void)updateModeTabBarButtons;
- (void)updateTrimProgressSegmentColors;
- (void)updateVideoDependentViews;
- (void)updateVideoDisplaySize;
- (void)updateWithVideoComposition:(id)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (double)videoContentWidth;
- (struct CGRect)videoDisplayFrame;
- (void)videoInfoReady:(id)arg1;
- (void)videoTrimController:(id)arg1 didConfirmTrimmedRange:(CDStruct_e83c9415)arg2;
- (void)videoTrimController:(id)arg1 didFinishUpdatingWithTrimmedRange:(CDStruct_e83c9415)arg2;
- (void)videoTrimController:(id)arg1 didUpdateWithTrimmedRange:(CDStruct_e83c9415)arg2;
- (void)videoTrimController:(id)arg1 willBeginUpdatingWithTrimmedRange:(CDStruct_e83c9415)arg2;
- (void)videoTrimControllerDidRejectChanges:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillAppearInner:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

