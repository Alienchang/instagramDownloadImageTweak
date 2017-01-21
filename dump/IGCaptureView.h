//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class AVCaptureVideoPreviewLayer, IGCameraAndGalleryAccessPromptView, IGCameraFocusIndicator, IGMediaCaptureButton, IGTapButton, IGVideoCaptureDeleteButton, IGVideoProgressView, IGVideoRecordingTimerView, NSString, UIImageView, UILongPressGestureRecognizer, UIScrollView, UITapGestureRecognizer;

@interface IGCaptureView : UIView <UIScrollViewDelegate>
{
    _Bool _videoClipDeleteButtonHidden;
    _Bool _cameraModeLocked;
    id <IGCaptureViewDelegate> _delegate;
    AVCaptureVideoPreviewLayer *_previewLayer;
    IGMediaCaptureButton *_photoCaptureButton;
    IGMediaCaptureButton *_videoCaptureButton;
    IGTapButton *_switchCameraButton;
    IGTapButton *_flashButton;
    IGVideoProgressView *_videoProgressView;
    IGVideoRecordingTimerView *_videoTimerView;
    IGVideoCaptureDeleteButton *_videoClipDeleteButton;
    long long _cameraMode;
    IGCameraFocusIndicator *_focusIndicator;
    UITapGestureRecognizer *_focusGestureRecognizer;
    UILongPressGestureRecognizer *_focusLockGestureRecognizer;
    UIView *_captureView;
    UIScrollView *_scrollView;
    IGCameraAndGalleryAccessPromptView *_accessPromptView;
    UIImageView *_transitionImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGCameraAndGalleryAccessPromptView *accessPromptView; // @synthesize accessPromptView=_accessPromptView;
@property(nonatomic) long long cameraMode; // @synthesize cameraMode=_cameraMode;
@property(nonatomic) _Bool cameraModeLocked; // @synthesize cameraModeLocked=_cameraModeLocked;
@property(retain, nonatomic) UIView *captureView; // @synthesize captureView=_captureView;
@property(nonatomic) __weak id <IGCaptureViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGTapButton *flashButton; // @synthesize flashButton=_flashButton;
@property(retain, nonatomic) UITapGestureRecognizer *focusGestureRecognizer; // @synthesize focusGestureRecognizer=_focusGestureRecognizer;
@property(readonly, nonatomic) IGCameraFocusIndicator *focusIndicator; // @synthesize focusIndicator=_focusIndicator;
@property(retain, nonatomic) UILongPressGestureRecognizer *focusLockGestureRecognizer; // @synthesize focusLockGestureRecognizer=_focusLockGestureRecognizer;
- (void)hideTransitionOverlay:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) IGMediaCaptureButton *photoCaptureButton; // @synthesize photoCaptureButton=_photoCaptureButton;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setCameraMode:(long long)arg1 animated:(_Bool)arg2;
- (void)setProgressViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIImageView *transitionImageView; // @synthesize transitionImageView=_transitionImageView;
@property(nonatomic) _Bool videoClipDeleteButtonHidden; // @synthesize videoClipDeleteButtonHidden=_videoClipDeleteButtonHidden;
- (void)setVideoClipDeleteButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setVideoRecordingTimerEnabled:(_Bool)arg1;
- (void)showCameraPermissionDeniedView;
- (void)showTransitionOverlayWithImage:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) IGTapButton *switchCameraButton; // @synthesize switchCameraButton=_switchCameraButton;
@property(readonly, nonatomic) IGMediaCaptureButton *videoCaptureButton; // @synthesize videoCaptureButton=_videoCaptureButton;
@property(readonly, nonatomic) IGVideoCaptureDeleteButton *videoClipDeleteButton; // @synthesize videoClipDeleteButton=_videoClipDeleteButton;
@property(readonly, nonatomic) IGVideoProgressView *videoProgressView; // @synthesize videoProgressView=_videoProgressView;
@property(readonly, nonatomic) IGVideoRecordingTimerView *videoTimerView; // @synthesize videoTimerView=_videoTimerView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
