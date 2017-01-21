//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, AVAssetReader, AVAssetReaderTrackOutput;

@interface IGVideoReader : NSObject
{
    AVAsset *_asset;
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_assetReaderVideoOutput;
    AVAssetReaderTrackOutput *_assetReaderAudioOutput;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) AVAssetReader *assetReader; // @synthesize assetReader=_assetReader;
@property(retain, nonatomic) AVAssetReaderTrackOutput *assetReaderAudioOutput; // @synthesize assetReaderAudioOutput=_assetReaderAudioOutput;
@property(retain, nonatomic) AVAssetReaderTrackOutput *assetReaderVideoOutput; // @synthesize assetReaderVideoOutput=_assetReaderVideoOutput;
- (struct opaqueCMSampleBuffer *)copyNextAudioSampleBuffer;
- (struct opaqueCMSampleBuffer *)copyNextVideoSampleBuffer;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;
- (id)initWithAsset:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;
- (void)prepare;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;

@end
