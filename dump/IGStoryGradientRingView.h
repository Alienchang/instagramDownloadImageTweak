//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class CAGradientLayer, CAReplicatorLayer, CAShapeLayer, IGStoryGradientRingViewSpec, NSString;

@interface IGStoryGradientRingView : UIView <CAAnimationDelegate>
{
    CAGradientLayer *_gradientLayer;
    CAShapeLayer *_ringLayer;
    CAReplicatorLayer *_replicatorLayer;
    _Bool _isAnimating;
    IGStoryGradientRingViewSpec *_spec;
    unsigned long long _animationStyle;
}

- (void).cxx_destruct;
- (void)animateGradientRotationWithDuration:(double)arg1;
- (void)animateReplicatorsWithDuration:(double)arg1 rotation:(id)arg2 repeatCount:(float)arg3;
- (void)animateRingLayerWithAnimations:(id)arg1 duration:(double)arg2 repeatCount:(float)arg3 timingFunction:(id)arg4;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
@property(nonatomic) unsigned long long animationStyle; // @synthesize animationStyle=_animationStyle;
- (void)configureWithSpec:(id)arg1;
- (void)endAnimating;
- (void)handleAnimationDidStop;
- (id)initWithFrame:(struct CGRect)arg1 spec:(id)arg2;
- (_Bool)isAnimating;
- (void)layoutSubviews;
- (id)ringStrokeEndAnimationWithDuration:(double)arg1 values:(id)arg2;
- (id)ringStrokeStartAnimationWithDuration:(double)arg1 values:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)startAnimationWithStyle:(unsigned long long)arg1;
- (void)updateReplicatorWithSegmentCount:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

