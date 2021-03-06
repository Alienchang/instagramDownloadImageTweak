//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIColor;

@interface IGGradientRippleConfiguration : NSObject
{
    NSArray *_colors;
    NSArray *_stops;
    double _interval;
    double _duration;
    UIColor *_backgroundColor;
}

+ (id)defaultConfiguration;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (id)initWithGradientColors:(id)arg1 stops:(id)arg2 rippleInterval:(double)arg3 duration:(double)arg4 backgroundColor:(id)arg5;
@property(readonly, nonatomic) double interval; // @synthesize interval=_interval;
@property(readonly, copy, nonatomic) NSArray *stops; // @synthesize stops=_stops;

@end

