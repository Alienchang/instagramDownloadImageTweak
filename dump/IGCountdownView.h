//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGStoryGradientRingView, UILabel;

@interface IGCountdownView : UIView
{
    UILabel *_label;
    IGStoryGradientRingView *_ringView;
}

- (void).cxx_destruct;
- (void)endRingAnimationIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)layoutSubviews;
@property(readonly, nonatomic) IGStoryGradientRingView *ringView; // @synthesize ringView=_ringView;
- (void)setCount:(long long)arg1;
- (void)startRingAnimationIfNeeded;

@end

