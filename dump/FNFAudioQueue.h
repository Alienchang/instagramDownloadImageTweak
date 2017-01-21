//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FNFPlayerAudioEngine.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface FNFAudioQueue : NSObject <FNFPlayerAudioEngine>
{
    struct OpaqueAudioQueue *_audioQueue;
    CDUnknownBlockType _putDataCallback;
    CDUnknownBlockType _errorCallback;
    struct AudioStreamBasicDescription _asbd;
    unsigned int _sampleFrameSize;
    struct AQBufferParameters _bufferParams;
    struct AudioTimeStamp _zeroTimestamp;
    struct OpaqueAudioQueueTimeline *_timeline;
    unsigned long long _state;
    _Bool _hasNoMoreFramesToEnqueue;
    struct AQBufferState _audioQueueBuffer[3];
    int _activeBufferIndex;
    unsigned long long _framesEnqueued;
    unsigned long long _buffersReturned;
    unsigned long long _enqueueDataCalls;
    NSObject<OS_dispatch_queue> *_internalQueue;
    float _pendingVolume;
    float _pendingVolumeRampTime;
    _Bool _deferAudioLevelSetup;
    CDUnknownBlockType _audioLevelCallback;
    struct AudioQueueLevelMeterState *_levels;
    unsigned int _levelSize;
}

+ (struct AQBufferParameters)_calculateBufferSizeAndPacketCountWithAsbd:(struct AudioStreamBasicDescription)arg1 frameSize:(unsigned int)arg2;
- (void).cxx_destruct;
- (_Bool)_createAudioQueue;
- (int)_queueState;
- (void)_readDataIntoBuffer;
- (void)_removeAudioQueue;
- (int)_startQueue;
- (void)_stopAudio;
- (void)audioQueueErrorCallback:(struct OpaqueAudioQueue *)arg1;
- (void)audioQueueIsRunningCallback:(struct OpaqueAudioQueue *)arg1;
- (void)audioQueueOutputCallback:(struct OpaqueAudioQueue *)arg1 inBuffer:(struct AudioQueueBuffer *)arg2;
- (void)dealloc;
- (void)enableLevelMeteringWithCallback:(CDUnknownBlockType)arg1;
- (CDStruct_1b6d18a9)getCurrentTime;
- (id)init;
- (void)invalidate;
- (void)pause;
- (void)playWithStartTime:(CDStruct_1b6d18a9)arg1;
- (void)prepareToPlay;
- (void)removeLevelMetering;
- (void)reset;
- (void)resumeEnqueuingData;
- (void)sendCurrentAudioLevelToCallback;
- (void)setAudioStreamBasicDescription:(struct AudioStreamBasicDescription)arg1 extraParameters:(id)arg2 putDataCallback:(CDUnknownBlockType)arg3 errorCallback:(CDUnknownBlockType)arg4 sampleFrameSize:(unsigned int)arg5;
- (void)setVolume:(float)arg1 rampTime:(float)arg2;
- (void)stop;
- (void)stopLoadingData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

