//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class CPTColor, CPTFill, CPTGradient, NSArray;

@interface CPTLineStyle : NSObject <NSCoding, NSCopying, NSMutableCopying>
{
    int lineCap;
    int lineJoin;
    double miterLimit;
    double lineWidth;
    NSArray *dashPattern;
    double patternPhase;
    CPTColor *lineColor;
    CPTFill *lineFill;
    CPTGradient *lineGradient;
}

+ (id)lineStyle;
+ (id)lineStyleWithStyle:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSArray *dashPattern; // @synthesize dashPattern;
- (id)debugQuickLookObject;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic, getter=isOpaque) _Bool opaque; // @dynamic opaque;
@property(nonatomic) int lineCap; // @synthesize lineCap;
@property(retain, nonatomic) CPTColor *lineColor; // @synthesize lineColor;
@property(retain, nonatomic) CPTFill *lineFill; // @synthesize lineFill;
@property(retain, nonatomic) CPTGradient *lineGradient; // @synthesize lineGradient;
@property(nonatomic) int lineJoin; // @synthesize lineJoin;
@property(nonatomic) double lineWidth; // @synthesize lineWidth;
@property(nonatomic) double miterLimit; // @synthesize miterLimit;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double patternPhase; // @synthesize patternPhase;
- (void)setLineStyleInContext:(struct CGContext *)arg1;
- (void)strokePathInContext:(struct CGContext *)arg1;
- (void)strokePathWithGradient:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)strokeRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;

@end

