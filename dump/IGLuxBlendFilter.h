//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGImageFilter.h"

@class IGSurface;

@interface IGLuxBlendFilter : IGImageFilter
{
    double _luxBlendAmount;
    double _slope;
    IGSurface *_claheCDF;
    IGSurface *_antiLuxSurface;
    IGSurface *_starlightSurface;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGSurface *antiLuxSurface; // @synthesize antiLuxSurface=_antiLuxSurface;
@property(retain, nonatomic) IGSurface *claheCDF; // @synthesize claheCDF=_claheCDF;
- (void)clearCachesNotOfSize:(struct CGSize)arg1;
- (void)clearInternalCaches;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)fragmentFunctions;
- (id)fragmentShader;
- (id)init;
@property(nonatomic) double luxBlendAmount; // @synthesize luxBlendAmount=_luxBlendAmount;
- (void)reduceMemoryUsage;
- (void)render:(id)arg1 to:(id)arg2;
- (void)render:(id)arg1 to:(id)arg2 program:(id)arg3;
- (void)render:(id)arg1 to:(id)arg2 useInternalCaches:(_Bool)arg3;
- (id)samplers;
@property(nonatomic) double slope; // @synthesize slope=_slope;
@property(retain, nonatomic) IGSurface *starlightSurface; // @synthesize starlightSurface=_starlightSurface;

@end

