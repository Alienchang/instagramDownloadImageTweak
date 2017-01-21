//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableData;

@interface FBProgressiveJPEG : NSObject
{
    unsigned long long _srcFlag;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _numberOfComponentsInOutput;
    unsigned long long _format;
    unsigned long long _colorSpace;
    _Bool _streamBasedInstance;
    NSArray *_scanOffsets;
    _Bool _parsedHeader;
    _Bool _reachedEoF;
    struct jpeg_decompress_struct _cinfo;
    NSMutableData *_dataBuffer;
    NSMutableData *_tempBuffer;
    unsigned long long _targetFlags;
    struct FBProgressiveJPEGErrorManager _jerr;
    struct mutex _decodeMutex;
    struct mutex _dataBufferMutex;
    struct mutex _tempBufferMutex;
    unsigned long long _masterScan;
    unsigned long long _decodeScan;
    struct Optional<FBPJPEGEncodingInfo> _encodingInfo;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)_appendBytes:(id)arg1 withError:(id *)arg2;
- (unsigned long long)_completeScanOffsetInBuffer:(id)arg1;
- (unsigned long long)_completeScanOffsetInBufferV2:(id)arg1;
- (id)_decodeImageScaledTargetWidth:(unsigned long long)arg1 targetHeight:(unsigned long long)arg2 decodeScan:(unsigned long long)arg3 withError:(id *)arg4;
- (id)_decodeImageWithError:(id *)arg1;
- (id)_initForData:(id)arg1 enableStreaming:(_Bool)arg2 withSourceImageFlag:(unsigned long long)arg3;
- (_Bool)_prepDecodeWithData:(id)arg1 smooth:(_Bool)arg2 doFancyUpsampling:(_Bool)arg3 scan:(unsigned long long)arg4 buffer:(_Bool)arg5 error:(id *)arg6;
- (_Bool)_readHeaderWithError:(id *)arg1;
- (unsigned long long)_scanCountShouldCountEoF:(_Bool)arg1;
- (unsigned long long)_scanCountShouldCountEoFV2:(_Bool)arg1;
- (void)_voidErrorHandler;
- (long long)bestScan;
- (id)binaryRepresentation;
@property(readonly, nonatomic) unsigned long long colorSpace; // @synthesize colorSpace=_colorSpace;
- (id)copyDataBuffer_locked;
- (void)dealloc;
- (id)decodeImageWithError:(id *)arg1;
- (id)decodeIncrementalToImageFlag:(unsigned long long)arg1 downscale:(_Bool)arg2 withError:(id *)arg3;
@property(readonly, nonatomic) unsigned long long format; // @synthesize format=_format;
- (id)fullBinaryRepresentation;
- (id)getBestImageFlagWithNewBytes:(id)arg1 desiredImageFlag:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long height; // @synthesize height=_height;
- (id)initForStream;
- (id)initForStreamWithSourceImageFlag:(unsigned long long)arg1;
- (id)initWithData:(id)arg1 sourceFlag:(unsigned long long)arg2;
- (unsigned long long)lowestImageFlagThatIsSupportedForImageFlag:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfComponentsInOutput; // @synthesize numberOfComponentsInOutput=_numberOfComponentsInOutput;
- (unsigned char)numberOfScans;
@property(readonly, copy, nonatomic) NSArray *scanOffsets;
@property(readonly, nonatomic) unsigned long long srcFlag; // @synthesize srcFlag=_srcFlag;
@property(readonly, nonatomic) _Bool streamBasedInstance; // @synthesize streamBasedInstance=_streamBasedInstance;
- (id)updateBytes:(id)arg1;
@property(readonly, nonatomic) unsigned long long width; // @synthesize width=_width;

@end
