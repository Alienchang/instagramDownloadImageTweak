//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPTLayer.h"

@class CPTBorderedLayer;

@interface CPTBorderLayer : CPTLayer
{
    CPTBorderedLayer *maskedLayer;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLayer:(id)arg1;
- (void)layoutSublayers;
@property(retain, nonatomic) CPTBorderedLayer *maskedLayer; // @synthesize maskedLayer;
- (void)renderAsVectorInContext:(struct CGContext *)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)sublayersExcludedFromAutomaticLayout;

@end

