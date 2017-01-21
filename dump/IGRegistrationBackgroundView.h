//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGRotatingRainbowView, UILabel;

@interface IGRegistrationBackgroundView : UIView
{
    UILabel *_messageLabel;
    double _iconViewOffset;
    UIView *_iconView;
    IGRotatingRainbowView *_rainbowView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) double iconViewOffset; // @synthesize iconViewOffset=_iconViewOffset;
- (id)initWithFrame:(struct CGRect)arg1 defaultIconView:(id)arg2;
- (void)layoutSubviews;
@property(readonly, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) IGRotatingRainbowView *rainbowView; // @synthesize rainbowView=_rainbowView;
- (void)transitIconView:(id)arg1 toScreen:(_Bool)arg2 rotateDegree:(double)arg3;
- (void)transitToIconView:(id)arg1 inboundAnimation:(long long)arg2 outboundAnimation:(long long)arg3;

@end

