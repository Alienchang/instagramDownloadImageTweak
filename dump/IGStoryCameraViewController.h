//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGCameraZoomControllerDelegate.h"
#import "IGCaptureManagerAudioSampleBufferDelegate.h"
#import "IGCaptureManagerAudioSessionDelegate.h"
#import "IGCaptureManagerDelegate.h"
#import "IGCaptureManagerVideoSampleBufferDelegate.h"
#import "IGCountdownControllerDelegate.h"
#import "IGCustomViewController.h"
#import "IGDirectStoryTextTransitionCoordinatorDatasource.h"
#import "IGDirectStoryTextTransitionCoordinatorDelegate.h"
#import "IGDirectThreadInfoViewControllerDelegate.h"
#import "IGInstaVideoBroadcastMainViewControllerDelegate.h"
#import "IGInstaVideoLegacyBroadcastViewControllerDelegate.h"
#import "IGPresentableStoryViewer.h"
#import "IGQuickCamCaptureButtonDelegate.h"
#import "IGStoryCameraFooterViewDelegate.h"
#import "IGStoryCameraPermissionViewDelegate.h"
#import "IGStoryCameraReplyHeaderViewDelegate.h"
#import "IGStoryGalleryDelegate.h"
#import "IGSwipeDismissibleContainerControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITextViewDelegate.h"

@class FBTimer, IGCameraPreviewView, IGCameraZoomController, IGCaptureManager, IGContext, IGCountdownController, IGCountdownView, IGDirectStoryService, IGDirectThreadService, IGGradientView, IGPerformanceEvent, IGStoryBoomerangManager, IGStoryCameraFooterView, IGStoryCameraPermissionView, IGStoryComposerWaterfallLoggingContext, IGStoryGalleryViewController, IGStoryLiveNuxView, IGSwipeDismissibleContainerController, IGTooltipView, IGUserSession, IGVideoComposition, IGVideoRecorder, NSDate, NSMutableDictionary, NSString, NSTimer, UIImageView, UIImpactFeedbackGenerator, UISwipeGestureRecognizer, UIView, UIVisualEffectView;

@interface IGStoryCameraViewController : IGViewController <IGCountdownControllerDelegate, IGCameraZoomControllerDelegate, IGStoryCameraPermissionViewDelegate, IGStoryGalleryDelegate, IGCaptureManagerAudioSampleBufferDelegate, IGCaptureManagerAudioSessionDelegate, IGCaptureManagerDelegate, IGCaptureManagerVideoSampleBufferDelegate, IGInstaVideoBroadcastMainViewControllerDelegate, IGInstaVideoLegacyBroadcastViewControllerDelegate, IGQuickCamCaptureButtonDelegate, IGSwipeDismissibleContainerControllerDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate, UITextViewDelegate, IGStoryCameraFooterViewDelegate, IGStoryCameraReplyHeaderViewDelegate, IGDirectThreadInfoViewControllerDelegate, IGCustomViewController, IGPresentableStoryViewer, IGDirectStoryTextTransitionCoordinatorDelegate, IGDirectStoryTextTransitionCoordinatorDatasource>
{
    _Bool _visible;
    _Bool _isBackgrounded;
    _Bool _usesCameraPreviewView;
    _Bool _hasStartedCapture;
    _Bool _hasReceivedAudioFrames;
    _Bool _volumeButtonIsRecordingVideo;
    _Bool _lowLightEnabled;
    _Bool _lowLightAvailable;
    _Bool _shouldSendBufferToBoomerangManager;
    long long _cameraMode;
    IGStoryComposerWaterfallLoggingContext *_loggingContext;
    long long _state;
    id <IGStoryCameraViewControllerDelegate> _delegate;
    UIView *_leftHeaderItemView;
    UIView *_centerHeaderItemView;
    UIView *_rightHeaderItemView;
    UIView *_flashScreenView;
    IGStoryCameraFooterView *_footerView;
    IGUserSession *_userSession;
    NSString *_directStoryId;
    UIView *_contentView;
    IGSwipeDismissibleContainerController *_dismissableContainerController;
    UISwipeGestureRecognizer *_gallerySwipeGestureRecognizer;
    IGGradientView *_topGradient;
    IGGradientView *_bottomGradient;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    UIView *_previewView;
    IGCameraPreviewView *_cameraPreviewView;
    IGContext *_igContext;
    UIImageView *_focusRing;
    IGCameraZoomController *_zoomController;
    IGCaptureManager *_captureManager;
    IGVideoRecorder *_videoRecorder;
    IGStoryCameraPermissionView *_permissionView;
    IGVideoComposition *_currentVideoComposition;
    struct opaqueCMSampleBuffer *_lastReceivedBuffer;
    UIImageView *_lastFrameImageView;
    IGTooltipView *_captureNUXView;
    double _recordingStoppedTime;
    NSTimer *_volumePressTimer;
    NSDate *_lastVolumePress;
    CDUnknownBlockType _recordAwaitingAudioSessionBlock;
    CDUnknownBlockType _awaitingEndOfAudioSessionBlock;
    IGStoryGalleryViewController *_galleryViewController;
    UIVisualEffectView *_cameraBlurOverlay;
    UIImageView *_galleryPreviewImageView;
    IGPerformanceEvent *_capturePhotoPerformanceEvent;
    IGPerformanceEvent *_captureVideoPerformanceEvent;
    IGStoryLiveNuxView *_liveNuxView;
    double _initialZoomPercent;
    double _currentZoomPercent;
    NSMutableDictionary *_lastSavedZoomForCamera;
    IGDirectStoryService *_directStoryService;
    IGDirectThreadService *_threadService;
    IGStoryBoomerangManager *_boomerangManager;
    UIView *_boomerangBurstView;
    IGCountdownController *_countdownController;
    IGCountdownView *_countdownView;
    FBTimer *_debugTimer;
    struct CGPoint _previousGalleryScrollPosition;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType awaitingEndOfAudioSessionBlock; // @synthesize awaitingEndOfAudioSessionBlock=_awaitingEndOfAudioSessionBlock;
@property(readonly, nonatomic) UIView *backgroundViewForAnimation;
@property(retain, nonatomic) UIView *boomerangBurstView; // @synthesize boomerangBurstView=_boomerangBurstView;
@property(retain, nonatomic) IGStoryBoomerangManager *boomerangManager; // @synthesize boomerangManager=_boomerangManager;
@property(retain, nonatomic) IGGradientView *bottomGradient; // @synthesize bottomGradient=_bottomGradient;
@property(retain, nonatomic) UIVisualEffectView *cameraBlurOverlay; // @synthesize cameraBlurOverlay=_cameraBlurOverlay;
- (id)cameraContentView;
- (_Bool)cameraIsReady;
@property(readonly, nonatomic) long long cameraMode; // @synthesize cameraMode=_cameraMode;
@property(retain, nonatomic) IGCameraPreviewView *cameraPreviewView; // @synthesize cameraPreviewView=_cameraPreviewView;
- (void)cameraReplyHeaderViewDidTap:(id)arg1;
- (_Bool)canBeginInteractiveTransition;
@property(readonly, nonatomic) _Bool canBeginScrollingToFeed;
- (_Bool)canShowLowLight;
- (void)cancelRecording;
- (void)captureButtonDidBeginExpanding;
- (void)captureButtonDidConfirm;
- (void)captureButtonDidEndExpanding;
- (void)captureButtonDidRelease;
- (void)captureButtonDidReleaseAfterExpandingFinished;
- (void)captureButtonDidReleaseBeforeExpandingFinished;
- (void)captureButtonDidTouchDown;
- (void)captureButtonDidZoomPercent:(double)arg1;
@property(retain, nonatomic) IGCaptureManager *captureManager; // @synthesize captureManager=_captureManager;
- (void)captureManagerAudioSessionDidFinishCleanup:(id)arg1;
- (void)captureManagerAudioSessionDidStartRunning:(id)arg1;
- (void)captureManagerAudioSessionInterruptionEnded:(id)arg1;
- (void)captureManagerAudioSessionWasInterrupted:(id)arg1;
- (void)captureManagerDidCaptureAudioBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)captureManagerDidCaptureVideoBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)captureManagerDidDropAudioBuffer;
- (void)captureManagerDidDropVideoBuffer;
- (void)captureManagerDidReceiveUnhandledError:(id)arg1;
- (void)captureManagerDidSatisfyFocusRequest;
- (void)captureManagerNeedsResume:(_Bool)arg1;
- (void)captureManagerWillTakePhoto;
@property(readonly, nonatomic) IGTooltipView *captureNUXView; // @synthesize captureNUXView=_captureNUXView;
@property(retain, nonatomic) IGPerformanceEvent *capturePhotoPerformanceEvent; // @synthesize capturePhotoPerformanceEvent=_capturePhotoPerformanceEvent;
@property(retain, nonatomic) IGPerformanceEvent *captureVideoPerformanceEvent; // @synthesize captureVideoPerformanceEvent=_captureVideoPerformanceEvent;
@property(readonly, nonatomic) UIView *centerHeaderItemView; // @synthesize centerHeaderItemView=_centerHeaderItemView;
- (void)cleanUpBroadcastViewController:(id)arg1 afterSuccessfulBroadcasting:(_Bool)arg2;
- (void)closeButtonTapped;
- (void)configureStateForInstaVideo:(_Bool)arg1;
- (void)confirmInputAsset:(id)arg1;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIView *contentViewForAnimation;
@property(readonly, nonatomic) UIView *contentViewForSnapshot;
@property(retain, nonatomic) IGCountdownController *countdownController; // @synthesize countdownController=_countdownController;
- (void)countdownController:(id)arg1 didCountTo:(long long)arg2;
@property(retain, nonatomic) IGCountdownView *countdownView; // @synthesize countdownView=_countdownView;
@property(retain, nonatomic) IGVideoComposition *currentVideoComposition; // @synthesize currentVideoComposition=_currentVideoComposition;
@property(nonatomic) double currentZoomPercent; // @synthesize currentZoomPercent=_currentZoomPercent;
- (void)dealloc;
@property(retain, nonatomic) FBTimer *debugTimer; // @synthesize debugTimer=_debugTimer;
@property(nonatomic) __weak id <IGStoryCameraViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapAddTextButton:(id)arg1;
- (void)didTapCancelButtonFromThreadInfoVC;
@property(readonly, copy, nonatomic) NSString *directStoryId; // @synthesize directStoryId=_directStoryId;
@property(retain, nonatomic) IGDirectStoryService *directStoryService; // @synthesize directStoryService=_directStoryService;
- (void)directStoryTextTransitionCoordinatorDidBeginTransition:(id)arg1;
- (void)disableButtonsDuringHandsFreeCountdown:(_Bool)arg1;
- (void)dismissGalleryWithCompletion:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) IGSwipeDismissibleContainerController *dismissableContainerController; // @synthesize dismissableContainerController=_dismissableContainerController;
- (void)doubleTapCamera:(id)arg1;
- (id)doubleTapCameraSwitchRecognizer;
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
- (void)flashScreen;
@property(readonly, nonatomic) UIView *flashScreenView; // @synthesize flashScreenView=_flashScreenView;
@property(retain, nonatomic) UIImageView *focusRing; // @synthesize focusRing=_focusRing;
- (void)focusTap:(id)arg1;
@property(readonly, nonatomic) IGStoryCameraFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIImageView *galleryPreviewImageView; // @synthesize galleryPreviewImageView=_galleryPreviewImageView;
@property(retain, nonatomic) UISwipeGestureRecognizer *gallerySwipeGestureRecognizer; // @synthesize gallerySwipeGestureRecognizer=_gallerySwipeGestureRecognizer;
@property(retain, nonatomic) IGStoryGalleryViewController *galleryViewController; // @synthesize galleryViewController=_galleryViewController;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleGallerySwipeGesture:(id)arg1;
- (void)handleSwipeUpToDismissGesture:(id)arg1;
- (void)handleTapToDismissGesture:(id)arg1;
- (_Bool)hasGrantedAllPermissions;
@property _Bool hasReceivedAudioFrames; // @synthesize hasReceivedAudioFrames=_hasReceivedAudioFrames;
@property(nonatomic) _Bool hasStartedCapture; // @synthesize hasStartedCapture=_hasStartedCapture;
- (void)hideCaptureNUX;
@property(readonly, nonatomic) IGContext *igContext; // @synthesize igContext=_igContext;
- (id)ig_keyViewControllers;
- (id)initWithUserSession:(id)arg1 directStoryId:(id)arg2;
@property(nonatomic) double initialZoomPercent; // @synthesize initialZoomPercent=_initialZoomPercent;
- (void)instaVideoMainViewController:(id)arg1 didFailWithMessage:(id)arg2;
- (void)instaVideoMainViewControllerDidFinishSession:(id)arg1 afterSuccessfulBroadcasting:(_Bool)arg2;
- (void)instaVideoViewController:(id)arg1 didFailWithMessage:(id)arg2;
- (void)instaVideoViewControllerDidFinishSession:(id)arg1 afterSuccessfulBroadcasting:(_Bool)arg2;
- (_Bool)isAllowedStateTransitionWithStartingState:(long long)arg1 endingState:(long long)arg2;
@property(nonatomic) _Bool isBackgrounded; // @synthesize isBackgrounded=_isBackgrounded;
- (_Bool)isInLiveCameraMode;
- (_Bool)isRavenEnabled;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) UIImageView *lastFrameImageView; // @synthesize lastFrameImageView=_lastFrameImageView;
@property(nonatomic) struct opaqueCMSampleBuffer *lastReceivedBuffer; // @synthesize lastReceivedBuffer=_lastReceivedBuffer;
@property(retain, nonatomic) NSMutableDictionary *lastSavedZoomForCamera; // @synthesize lastSavedZoomForCamera=_lastSavedZoomForCamera;
@property(retain, nonatomic) NSDate *lastVolumePress; // @synthesize lastVolumePress=_lastVolumePress;
@property(readonly, nonatomic) UIView *leftHeaderItemView; // @synthesize leftHeaderItemView=_leftHeaderItemView;
@property(readonly, nonatomic) IGStoryLiveNuxView *liveNuxView; // @synthesize liveNuxView=_liveNuxView;
- (void)liveVideoButtonTapped;
@property(retain, nonatomic) IGStoryComposerWaterfallLoggingContext *loggingContext; // @synthesize loggingContext=_loggingContext;
@property(nonatomic) _Bool lowLightAvailable; // @synthesize lowLightAvailable=_lowLightAvailable;
@property(nonatomic) _Bool lowLightEnabled; // @synthesize lowLightEnabled=_lowLightEnabled;
- (void)openSettings;
- (void)pauseAndResetBoomerangManager;
@property(retain, nonatomic) IGStoryCameraPermissionView *permissionView; // @synthesize permissionView=_permissionView;
- (void)permissionsViewDidTapCameraEnable:(id)arg1;
- (void)permissionsViewDidTapMicrophoneEnable:(id)arg1;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersTabBarHidden;
- (void)prepareToBeginRecording;
- (void)prepareToStopRecording;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) struct CGPoint previousGalleryScrollPosition; // @synthesize previousGalleryScrollPosition=_previousGalleryScrollPosition;
@property(readonly, nonatomic) UIView *profileImageViewForAnimation;
@property(copy, nonatomic) CDUnknownBlockType recordAwaitingAudioSessionBlock; // @synthesize recordAwaitingAudioSessionBlock=_recordAwaitingAudioSessionBlock;
@property(nonatomic) double recordingStoppedTime; // @synthesize recordingStoppedTime=_recordingStoppedTime;
- (void)resetCaptureManagerStatePostRecording;
@property(readonly, nonatomic) UIView *rightHeaderItemView; // @synthesize rightHeaderItemView=_rightHeaderItemView;
- (void)setCaptureUIElementsEnabled:(_Bool)arg1;
- (void)setFlashMode:(long long)arg1;
@property(nonatomic) _Bool shouldSendBufferToBoomerangManager; // @synthesize shouldSendBufferToBoomerangManager=_shouldSendBufferToBoomerangManager;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) IGDirectThreadService *threadService; // @synthesize threadService=_threadService;
@property(retain, nonatomic) IGGradientView *topGradient; // @synthesize topGradient=_topGradient;
@property(nonatomic) _Bool usesCameraPreviewView; // @synthesize usesCameraPreviewView=_usesCameraPreviewView;
@property(retain, nonatomic) IGVideoRecorder *videoRecorder; // @synthesize videoRecorder=_videoRecorder;
- (void)setViewColorToDefault;
@property(nonatomic) _Bool volumeButtonIsRecordingVideo; // @synthesize volumeButtonIsRecordingVideo=_volumeButtonIsRecordingVideo;
@property(retain, nonatomic) NSTimer *volumePressTimer; // @synthesize volumePressTimer=_volumePressTimer;
@property(retain, nonatomic) IGCameraZoomController *zoomController; // @synthesize zoomController=_zoomController;
- (void)settingsButtonTapped;
- (void)settingsDoneButtonTapped;
- (_Bool)shouldShowDirectStoryReplyControls;
- (void)showBoomerangBurstFrames;
- (void)showCaptureNUXIfNecessary;
- (void)showGalleryFromSwipeDirection:(unsigned long long)arg1;
- (void)showMissingPermissionOverlay;
- (void)showTorchLightIfNeeded;
- (void)showsLiveNuxViewIfNeeded:(_Bool)arg1;
- (void)startCapture;
- (void)startRecording;
- (void)startRecordingBoomerang;
- (void)stopCapture;
- (void)stopCaptureWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopRecording;
- (void)stopRecordingBoomerangVideo;
- (void)stopRecordingNormalVideo;
- (void)storyCameraFooterViewDidSwitchFromCameraMode:(long long)arg1 toCameraMode:(long long)arg2;
- (void)storyCameraFooterViewDidTapFlashButton:(id)arg1;
- (void)storyCameraFooterViewDidTapLiveButton:(id)arg1;
- (void)storyCameraFooterViewDidTapLowLightButton:(id)arg1;
- (void)storyCameraFooterViewDidTapSwitchCameras:(id)arg1;
- (void)storyGallery:(id)arg1 didPickAsset:(id)arg2 thumbnail:(id)arg3;
- (void)storyViewerDismissableContainerGestureDidBegin:(id)arg1;
- (void)storyViewerDismissableContainerGestureDidEnd:(id)arg1 didDismiss:(_Bool)arg2;
- (void)switchCameras;
- (void)takePicture;
- (void)threadInfoViewController:(id)arg1 didAddUsersToThreadWithId:(id)arg2;
- (void)threadInfoViewController:(id)arg1 didLeaveThreadWithId:(id)arg2;
- (void)threadInfoViewController:(id)arg1 didMuteThreadWithId:(id)arg2 muted:(_Bool)arg3;
- (void)threadInfoViewController:(id)arg1 didRenameThreadWithId:(id)arg2 toName:(id)arg3;
- (void)toggleCaptureChromeHidden:(_Bool)arg1;
- (void)updateButtonsWithRecordingState:(_Bool)arg1;
- (void)updateVideoSize;
- (void)updateWithChangedPermissions;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (double)videoRecordingProgress;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
@property(readonly, copy, nonatomic) NSString *viewModelIdentifier;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)volumeButtonPressed:(id)arg1;
- (void)volumeButtonReleased;
- (void)zoomController:(id)arg1 didChangeZoomScaleBy:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

