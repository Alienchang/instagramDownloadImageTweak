//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGCaptureManagerAudioSampleBufferDelegate.h"
#import "IGCaptureManagerAudioSessionDelegate.h"
#import "IGCaptureManagerDelegate.h"
#import "IGCaptureManagerVideoSampleBufferDelegate.h"
#import "IGCaptureManagerVideoSessionDelegate.h"

@class AVCaptureVideoPreviewLayer, IGCaptureManager, NSObject<OS_dispatch_queue>, NSString;

@interface IGInstaVideoBroadcastCaptureManager : NSObject <IGCaptureManagerAudioSampleBufferDelegate, IGCaptureManagerVideoSampleBufferDelegate, IGCaptureManagerAudioSessionDelegate, IGCaptureManagerVideoSessionDelegate, IGCaptureManagerDelegate>
{
    _Bool _isCaptureInterrupted;
    _Bool _isAudioCaptureInterrupted;
    _Bool _isVideoCaptureInterrupted;
    AVCaptureVideoPreviewLayer *_previewLayer;
    id <IGInstaVideoBroadcastCaptureManagerDelegate> _delegate;
    IGCaptureManager *_captureManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *audioQueue;
@property(readonly, nonatomic) long long cameraPosition;
- (void)captureInterrupted;
- (void)captureInterruptionEnded;
@property(readonly, nonatomic) IGCaptureManager *captureManager; // @synthesize captureManager=_captureManager;
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
- (void)captureManagerVideoSessionDidStartRunning:(id)arg1;
- (void)captureManagerVideoSessionInterruptionEnded:(id)arg1;
- (void)captureManagerVideoSessionWasInterrupted:(id)arg1;
- (void)captureManagerWillTakePhoto;
@property(nonatomic) __weak id <IGInstaVideoBroadcastCaptureManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithCaptureManager:(id)arg1;
@property(nonatomic) _Bool isAudioCaptureInterrupted; // @synthesize isAudioCaptureInterrupted=_isAudioCaptureInterrupted;
@property(nonatomic) _Bool isCaptureInterrupted; // @synthesize isCaptureInterrupted=_isCaptureInterrupted;
@property(nonatomic) _Bool isVideoCaptureInterrupted; // @synthesize isVideoCaptureInterrupted=_isVideoCaptureInterrupted;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(nonatomic) double zoom;
- (void)startSession;
- (void)switchCameras;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *videoQueue;
- (struct CGSize)videoSizeForActiveVideoCapture;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

