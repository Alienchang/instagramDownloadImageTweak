//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIImage, UIImageView, UILabel;

@interface IGExpandableButton : UIControl
{
    UIImage *_defaultIconImage;
    UIImage *_highlightIconImage;
    UIImageView *_icon;
    UIImageView *_closeIcon;
    UIImage *_defaultBorderImage;
    UIImage *_highlightBorderImage;
    UIImageView *_border;
    UILabel *_valueLabel;
    struct CGPoint _center;
    double _value;
    long long _layoutState;
    id <IGExpandableButtonDelegate> _delegate;
}

+ (double)displayValueThreshold;
- (void).cxx_destruct;
- (struct IGExpandableButtonLayouts)_getLayoutForState:(long long)arg1;
@property(nonatomic) __weak id <IGExpandableButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithDefaultIcon:(id)arg1 selectedIcon:(id)arg2;
@property(nonatomic) long long layoutState; // @synthesize layoutState=_layoutState;
- (void)layoutSubviews;
- (void)onCloseButtonClick:(id)arg1 withEvent:(id)arg2;
- (void)setSelected:(_Bool)arg1;
@property(nonatomic) double value; // @synthesize value=_value;

@end

