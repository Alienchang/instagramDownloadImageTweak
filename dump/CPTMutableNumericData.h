//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPTNumericData.h"

@class NSArray;

@interface CPTMutableNumericData : CPTNumericData
{
}

- (void)convertToType:(long long)arg1 sampleBytes:(unsigned long long)arg2 byteOrder:(long long)arg3;
@property(readonly, nonatomic) void *mutableBytes; // @dynamic mutableBytes;
- (void *)mutableSamplePointer:(unsigned long long)arg1;
- (void *)mutableSamplePointerAtIndex:(unsigned long long)arg1;
@property(nonatomic) long long byteOrder; // @dynamic byteOrder;
@property(nonatomic) long long dataTypeFormat; // @dynamic dataTypeFormat;
@property(nonatomic) unsigned long long sampleBytes; // @dynamic sampleBytes;

// Remaining properties
@property(nonatomic) struct _CPTNumericDataType dataType; // @dynamic dataType;
@property(copy, nonatomic) NSArray *shape; // @dynamic shape;

@end

