//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPTConstraints.h"

@interface _CPTConstraintsRelative : CPTConstraints
{
    double offset;
}

- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRelativeOffset:(double)arg1;
- (_Bool)isEqualToConstraint:(id)arg1;
@property(nonatomic) double offset; // @synthesize offset;
- (double)positionForLowerBound:(double)arg1 upperBound:(double)arg2;

@end

