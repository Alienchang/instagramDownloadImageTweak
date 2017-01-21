//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class CPTFill, CPTLineStyle;

@interface CPTLineCap : NSObject <NSCoding, NSCopying>
{
    _Bool usesEvenOddClipRule;
    long long lineCapType;
    CPTLineStyle *lineStyle;
    CPTFill *fill;
    const struct CGPath *customLineCapPath;
    const struct CGPath *cachedLineCapPath;
    struct CGSize size;
}

+ (id)barPlotLineCap;
+ (id)crossPlotLineCap;
+ (id)customLineCapWithPath:(struct CGPath *)arg1;
+ (id)diamondPlotLineCap;
+ (id)ellipsePlotLineCap;
+ (id)hexagonPlotLineCap;
+ (id)lineCap;
+ (id)openArrowPlotLineCap;
+ (id)pentagonPlotLineCap;
+ (id)rectanglePlotLineCap;
+ (id)snowPlotLineCap;
+ (id)solidArrowPlotLineCap;
+ (id)sweptArrowPlotLineCap;
- (void).cxx_destruct;
@property(nonatomic) const struct CGPath *cachedLineCapPath; // @synthesize cachedLineCapPath;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) const struct CGPath *customLineCapPath; // @synthesize customLineCapPath;
- (void)dealloc;
- (id)debugQuickLookObject;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) CPTFill *fill; // @synthesize fill;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) long long lineCapType; // @synthesize lineCapType;
@property(retain, nonatomic) CPTLineStyle *lineStyle; // @synthesize lineStyle;
- (const struct CGPath *)newLineCapPath;
- (void)renderAsVectorInContext:(struct CGContext *)arg1 atPoint:(struct CGPoint)arg2 inDirection:(struct CGPoint)arg3;
@property(nonatomic) struct CGSize size; // @synthesize size;
@property(nonatomic) _Bool usesEvenOddClipRule; // @synthesize usesEvenOddClipRule;

@end
