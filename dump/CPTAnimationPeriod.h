//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSValue;

@interface CPTAnimationPeriod : NSObject
{
    NSValue *startValue;
    NSValue *endValue;
    double duration;
    double delay;
    double startOffset;
}

+ (id)periodWithStart:(double)arg1 end:(double)arg2 duration:(double)arg3 withDelay:(double)arg4;
+ (id)periodWithStartDecimal:(CDStruct_6ece915e)arg1 endDecimal:(CDStruct_6ece915e)arg2 duration:(double)arg3 withDelay:(double)arg4;
+ (id)periodWithStartPlotRange:(id)arg1 endPlotRange:(id)arg2 duration:(double)arg3 withDelay:(double)arg4;
+ (id)periodWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3 withDelay:(double)arg4;
+ (id)periodWithStartRect:(struct CGRect)arg1 endRect:(struct CGRect)arg2 duration:(double)arg3 withDelay:(double)arg4;
+ (id)periodWithStartSize:(struct CGSize)arg1 endSize:(struct CGSize)arg2 duration:(double)arg3 withDelay:(double)arg4;
+ (id)periodWithStartValue:(id)arg1 endValue:(id)arg2 duration:(double)arg3 withDelay:(double)arg4;
- (void).cxx_destruct;
- (_Bool)canStartWithValueFromObject:(id)arg1 propertyGetter:(SEL)arg2;
@property(nonatomic) double delay; // @synthesize delay;
- (id)description;
@property(nonatomic) double duration; // @synthesize duration;
@property(copy, nonatomic) NSValue *endValue; // @synthesize endValue;
- (id)init;
- (id)initWithStart:(double)arg1 end:(double)arg2 duration:(double)arg3 withDelay:(double)arg4;
- (id)initWithStartDecimal:(CDStruct_6ece915e)arg1 endDecimal:(CDStruct_6ece915e)arg2 duration:(double)arg3 withDelay:(double)arg4;
- (id)initWithStartPlotRange:(id)arg1 endPlotRange:(id)arg2 duration:(double)arg3 withDelay:(double)arg4;
- (id)initWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3 withDelay:(double)arg4;
- (id)initWithStartRect:(struct CGRect)arg1 endRect:(struct CGRect)arg2 duration:(double)arg3 withDelay:(double)arg4;
- (id)initWithStartSize:(struct CGSize)arg1 endSize:(struct CGSize)arg2 duration:(double)arg3 withDelay:(double)arg4;
- (id)initWithStartValue:(id)arg1 endValue:(id)arg2 duration:(double)arg3 withDelay:(double)arg4;
@property(nonatomic) double startOffset; // @synthesize startOffset;
@property(copy, nonatomic) NSValue *startValue; // @synthesize startValue;
- (void)setStartValueFromObject:(id)arg1 propertyGetter:(SEL)arg2;
- (id)tweenedValueForProgress:(double)arg1;

@end

