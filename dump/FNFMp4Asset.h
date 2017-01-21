//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAsynchronousKeyValueLoading.h"
#import "FNFAVAsset.h"
#import "FNFAVPlayerItem.h"
#import "FNFAssetForPlayer.h"
#import "FNFAtomManagerDelegate.h"
#import "FNFDataLoaderDelegate.h"
#import "FNFInfoForLoopableAsset.h"
#import "FNFTimeLoadedDelegate.h"

@class AVAudioMix, FNFBufferSizeDecider, NSArray, NSError, NSObject<OS_dispatch_queue>, NSString;

@interface FNFMp4Asset : NSObject <AVAsynchronousKeyValueLoading, FNFAVAsset, FNFAVPlayerItem, FNFAssetForPlayer, FNFInfoForLoopableAsset, FNFDataLoaderDelegate, FNFAtomManagerDelegate, FNFTimeLoadedDelegate>
{
    CDUnknownBlockType _assetLoadedHandler;
    id <FNFDataLoader> _dataLoader;
    id <FNFAtomManager> _atomManager;
    FNFBufferSizeDecider *_bufferSizeDecider;
    CDUnknownBlockType _playerCheckForStallCallback;
    _Bool _hasFailed;
    _Bool _isStalled;
    NSError *_loadingError;
    _Bool _shouldShowBroadcasterInterruptedMessage;
    _Bool _sentStreamDryNotification;
    _Bool _assetLoaded;
    _Bool _waitingOnLoad;
    int _warningCount;
    _Bool _async;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (void).cxx_destruct;
- (void)_forTestingMakeSynchronous;
- (_Bool)_fullyDownloaded;
- (_Bool)_fullyDownloaded:(long long)arg1;
- (void)_handleError:(id)arg1;
- (void)_handleWarning:(id)arg1;
- (void)_potentiallyStartRequest;
- (void)_potentiallyStartRequestForTrack:(long long)arg1;
- (void)_seekDataLoaderToTime:(CDStruct_1b6d18a9)arg1 offset:(unsigned long long)arg2 shouldUpdateOffset:(_Bool)arg3 track:(long long)arg4;
- (void)_updateTimeLoaded;
- (id)accessLog;
- (void)addErrorToLog:(id)arg1 shouldStopPlayback:(_Bool)arg2;
- (void)addOutput:(id)arg1;
- (void)advanceFrameForTrack:(long long)arg1;
- (struct AudioStreamBasicDescription)asbd;
- (id)asset;
@property(copy, nonatomic) AVAudioMix *audioMix;
- (id)audioStreamExtraParameters;
- (void)cancelLoading;
- (_Bool)containsTrack:(long long)arg1;
- (const char *)currentFrameDataForTrack:(long long)arg1;
- (struct FNFFrameMetadata)currentFrameMetadataForTrack:(long long)arg1;
- (unsigned long long)currentOffsetForTrack:(long long)arg1;
- (CDStruct_1b6d18a9)currentTime;
- (id)dataBlockDistributorForTrack:(long long)arg1;
- (void)dataWasReceivedForTrack:(long long)arg1 andIsComplete:(_Bool)arg2;
- (void)dealloc;
- (id)debugDetails;
- (_Bool)decompressedFramebuffer;
@property(readonly, copy) NSString *description;
- (void)didChangeValue;
- (id)dispatchQueue;
- (CDStruct_1b6d18a9)duration;
- (struct opaqueCMFormatDescription *)formatDesc;
- (id)initWithAtomManager:(id)arg1 dataLoader:(id)arg2 fetchBufferSizeInSeconds:(double)arg3 unstallBufferSizeInSeconds:(double)arg4 stallBufferSizeInSeconds:(double)arg5 firstFetchSizeInSeconds:(double)arg6 fetchBufferMultiplier:(double)arg7 unstallBufferMultiplier:(double)arg8 shouldShowBroadcastInterrupt:(_Bool)arg9;
- (id)initWithURL:(id)arg1 moovAtomSize:(unsigned long long)arg2 bitrate:(unsigned long long)arg3;
- (id)initWithURL:(id)arg1 moovAtomSize:(unsigned long long)arg2 bitrate:(unsigned long long)arg3 fetchBufferSizeInSeconds:(double)arg4 unstallBufferSizeInSeconds:(double)arg5 stallBufferSizeInSeconds:(double)arg6 firstFetchSizeInSeconds:(double)arg7 fetchBufferMultiplier:(double)arg8 unstallBufferMultiplier:(double)arg9;
- (id)initWithURL:(id)arg1 moovAtomSize:(unsigned long long)arg2 bitrate:(unsigned long long)arg3 fetchBufferSizeInSeconds:(double)arg4 unstallBufferSizeInSeconds:(double)arg5 stallBufferSizeInSeconds:(double)arg6 firstFetchSizeInSeconds:(double)arg7 fetchBufferMultiplier:(double)arg8 unstallBufferMultiplier:(double)arg9 async:(_Bool)arg10;
- (_Bool)isPlaybackBufferFull;
- (_Bool)isPlaybackLikelyToKeepUp;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSArray *loadedTimeRanges;
- (void)loadingDidFailWithError:(id)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 maxBufferTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 minBufferTime;
- (void)parsingDidFailWithError:(id)arg1;
- (void)playbackPauseRequested;
- (void)playbackStarted;
- (struct CGAffineTransform)preferredTransform;
- (void)reportWarning:(id)arg1;
- (void)requestTimeLoadedUpdate;
- (_Bool)resetAssetToBeginningIfNeeded;
- (void)resetDataForSeekBack;
- (id)resourceLoader;
- (_Bool)seekToPosition:(CDStruct_1b6d18a9)arg1;
- (_Bool)shouldBufferVideoAsSoonAsPossible;
- (_Bool)shouldPauseForStallingWithNextCheckCallback:(CDUnknownBlockType)arg1;
- (_Bool)shouldRestartAfterStalling;
@property(readonly, nonatomic) long long status;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (CDStruct_1b6d18a9)timeAfterSeek;
- (unsigned long long)timescale;
- (_Bool)trackHasMoreFrames:(long long)arg1;
- (id)tracksWithMediaType:(id)arg1;
- (void)updatePlaybackTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)videoTrackDuration;
- (void)willChangeValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

