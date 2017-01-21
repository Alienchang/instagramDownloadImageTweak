//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGQuickCamAssetProcessorGenerationDelegate.h"
#import "IGVideoWriterDelegate.h"

@class IGQuickCamAssetProcessor, IGQuickCamOutputVideoAsset, IGUserSession, IGVideoWriter, NSMutableArray, NSString;

@interface IGStoryBoomerangManager : NSObject <IGQuickCamAssetProcessorGenerationDelegate, IGVideoWriterDelegate>
{
    _Bool _canGenerateBoomerang;
    _Bool _isGeneratingBoomerang;
    _Bool _isExperimentEnabledForCurrentType;
    id <IGStoryBoomerangManagerDelegate> _delegate;
    long long _cameraPosition;
    long long _flashMode;
    long long _captureFrameRate;
    IGUserSession *_userSession;
    IGVideoWriter *_videoWriter;
    NSMutableArray *_sampleBufferRefs;
    IGQuickCamAssetProcessor *_assetProcessor;
    IGQuickCamOutputVideoAsset *_boomerangAsset;
    long long _sampleBufferTrailingWindowSize;
    long long _sampleBufferDuration;
    double _lastCaptureFrameTime;
    long long _minBufferCount;
    long long _boomerangType;
}

- (void).cxx_destruct;
- (void)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
@property(retain, nonatomic) IGQuickCamAssetProcessor *assetProcessor; // @synthesize assetProcessor=_assetProcessor;
@property(retain, nonatomic) IGQuickCamOutputVideoAsset *boomerangAsset; // @synthesize boomerangAsset=_boomerangAsset;
@property(nonatomic) long long boomerangType; // @synthesize boomerangType=_boomerangType;
@property(nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(readonly, nonatomic) _Bool canGenerateBoomerang; // @synthesize canGenerateBoomerang=_canGenerateBoomerang;
@property(readonly, nonatomic) long long captureFrameRate; // @synthesize captureFrameRate=_captureFrameRate;
- (void)configureWithType:(long long)arg1;
- (void)createBoomerangeSequenceFromBuffers:(id)arg1 loopCount:(long long)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <IGStoryBoomerangManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailToCreateBoomerang;
- (void)finishWithOutputAsset:(id)arg1;
@property(nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
- (void)generateBoomerangVideo;
- (void)generateBoomerangVideoFromLivePhoto:(id)arg1;
- (void)generateBoomerangVideoWithVideoTransform:(struct CGAffineTransform)arg1;
- (id)generateLastBufferImage;
- (void)handleVideoSampleBufferRef:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)hasMetMinimumVideoFrameRequirement;
- (id)initWithType:(long long)arg1 userSession:(id)arg2;
@property(readonly, nonatomic) _Bool isExperimentEnabledForCurrentType; // @synthesize isExperimentEnabledForCurrentType=_isExperimentEnabledForCurrentType;
@property(readonly, nonatomic) _Bool isGeneratingBoomerang; // @synthesize isGeneratingBoomerang=_isGeneratingBoomerang;
@property(nonatomic) double lastCaptureFrameTime; // @synthesize lastCaptureFrameTime=_lastCaptureFrameTime;
@property(nonatomic) long long minBufferCount; // @synthesize minBufferCount=_minBufferCount;
- (struct opaqueCMSampleBuffer *)nextAudioSampleBufferForVideoWriter:(id)arg1;
- (struct __CVBuffer *)nextRenderedPixelBufferForVideoWriter:(id)arg1 withAdaptor:(id)arg2 getPresentationTime:(CDStruct_1b6d18a9 *)arg3;
- (double)percentOfMaxFramesCaptured;
- (void)prependSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)quickCamAssetProcessor:(id)arg1 didGeneratePhotoAsset:(id)arg2;
- (void)quickCamAssetProcessor:(id)arg1 didGenerateVideoAsset:(id)arg2;
- (void)quickCamAssetProcessor:(id)arg1 didUpdateProgress:(double)arg2;
- (void)quickCamAssetProcessorDidDetectIncompatible:(id)arg1;
- (void)quickCamAssetProcessorDidFailProcessing:(id)arg1;
- (void)removeAllSampleBuffers;
- (void)reset;
- (struct opaqueCMSampleBuffer *)sampleBufferAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long sampleBufferDuration; // @synthesize sampleBufferDuration=_sampleBufferDuration;
@property(retain, nonatomic) NSMutableArray *sampleBufferRefs; // @synthesize sampleBufferRefs=_sampleBufferRefs;
@property(readonly, nonatomic) long long sampleBufferTrailingWindowSize; // @synthesize sampleBufferTrailingWindowSize=_sampleBufferTrailingWindowSize;
- (void)saveVideoToSampleBufferArray:(id)arg1;
- (void)setIsGeneratingBoomerang:(_Bool)arg1;
@property(retain, nonatomic) IGVideoWriter *videoWriter; // @synthesize videoWriter=_videoWriter;
- (void)updateSettingsForCurrentType;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)videoWriter:(id)arg1 didFailWithError:(id)arg2;
- (void)videoWriter:(id)arg1 didFinishWritingVideoToURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
