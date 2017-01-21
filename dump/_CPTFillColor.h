//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPTFill.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class CPTColor;

@interface _CPTFillColor : CPTFill <NSCopying, NSCoding>
{
    CPTColor *fillColor;
}

- (void).cxx_destruct;
- (struct CGColor *)cgColor;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(copy, nonatomic) CPTColor *fillColor; // @synthesize fillColor;
- (void)fillPathInContext:(struct CGContext *)arg1;
- (void)fillRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(id)arg1;
- (_Bool)isOpaque;

@end

