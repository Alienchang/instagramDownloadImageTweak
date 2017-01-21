//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPTAnnotation.h"

@class CPTPlotSpace, NSArray;

@interface CPTPlotSpaceAnnotation : CPTAnnotation
{
    NSArray *anchorPlotPoint;
    CPTPlotSpace *plotSpace;
    CDStruct_6ece915e *decimalAnchor;
    unsigned long long anchorCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long anchorCount; // @synthesize anchorCount;
@property(copy, nonatomic) NSArray *anchorPlotPoint; // @synthesize anchorPlotPoint;
- (void)dealloc;
@property(nonatomic) CDStruct_6ece915e *decimalAnchor; // @synthesize decimalAnchor;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlotSpace:(id)arg1 anchorPlotPoint:(id)arg2;
@property(readonly, nonatomic) CPTPlotSpace *plotSpace; // @synthesize plotSpace;
- (void)positionContentLayer;
- (void)setContentNeedsLayout;

@end
