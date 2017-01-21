//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetWriterInputPixelBufferAdaptor, NSDictionary;

@protocol FBMediaProcessor <NSObject>
- (struct opaqueCMSampleBuffer *)createProcessedSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (struct opaqueCMSampleBuffer *)createProcessedSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withPixelBufferAdaptor:(AVAssetWriterInputPixelBufferAdaptor *)arg2;
- (NSDictionary *)sourcePixelBufferAttributesForAVAssetWriterInputPixelBufferAdaptor;
@end

