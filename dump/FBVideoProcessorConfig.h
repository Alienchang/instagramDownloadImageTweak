//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface FBVideoProcessorConfig : NSObject <NSCopying>
{
    unsigned long long _scalingMode;
    unsigned long long _inputPixelFormat;
    NSMutableArray *_filterConfigs;
    struct CGRect _cropRectangle;
    union _GLKMatrix4 _contentTransform;
}

- (void).cxx_destruct;
@property(nonatomic) union _GLKMatrix4 contentTransform; // @synthesize contentTransform=_contentTransform;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) struct CGRect cropRectangle; // @synthesize cropRectangle=_cropRectangle;
@property(copy, nonatomic) NSMutableArray *filterConfigs; // @synthesize filterConfigs=_filterConfigs;
- (unsigned long long)filterConfigsCount;
- (id)init;
- (id)initWithCropRectangle:(struct CGRect)arg1 scalingMode:(unsigned long long)arg2 contentTransform:(union _GLKMatrix4)arg3 filterConfigs:(id)arg4;
- (id)initWithCropRectangle:(struct CGRect)arg1 scalingMode:(unsigned long long)arg2 contentTransform:(union _GLKMatrix4)arg3 filterConfigs:(id)arg4 inputPixelFormat:(unsigned long long)arg5;
- (id)initWithFilterConfigs:(id)arg1;
- (id)initWithFilterConfigs:(id)arg1 inputPixelFormat:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long inputPixelFormat; // @synthesize inputPixelFormat=_inputPixelFormat;
- (void)insertFilterConfig:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeFilterConfigAtIndex:(unsigned long long)arg1;
@property(nonatomic) unsigned long long scalingMode; // @synthesize scalingMode=_scalingMode;

@end

