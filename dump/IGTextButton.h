//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSString, UIImageView, UILabel;

@interface IGTextButton : UIControl
{
    UILabel *_titleLabel;
    UIImageView *_backgroundView;
    long long _style;
}

- (void).cxx_destruct;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *text;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateAlpha;

@end

