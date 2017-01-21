//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface FBSDKButton : UIButton
{
    _Bool _skipIntrinsicContentSizing;
    _Bool _isExplicitlyDisabled;
}

- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (id)_backgroundImageWithColor:(id)arg1 cornerRadius:(double)arg2 scale:(double)arg3;
- (void)_configureWithIcon:(id)arg1 title:(id)arg2 backgroundColor:(id)arg3 highlightedColor:(id)arg4 selectedTitle:(id)arg5 selectedIcon:(id)arg6 selectedColor:(id)arg7 selectedHighlightedColor:(id)arg8;
- (double)_fontSizeForHeight:(double)arg1;
- (double)_heightForContentRect:(struct CGRect)arg1;
- (double)_heightForFont:(id)arg1;
- (double)_marginForHeight:(double)arg1;
- (double)_paddingForHeight:(double)arg1;
- (double)_textPaddingCorrectionForHeight:(double)arg1;
- (void)awakeFromNib;
- (void)checkImplicitlyDisabled;
- (void)configureButton;
- (void)configureWithIcon:(id)arg1 title:(id)arg2 backgroundColor:(id)arg3 highlightedColor:(id)arg4;
- (void)configureWithIcon:(id)arg1 title:(id)arg2 backgroundColor:(id)arg3 highlightedColor:(id)arg4 selectedTitle:(id)arg5 selectedIcon:(id)arg6 selectedColor:(id)arg7 selectedHighlightedColor:(id)arg8;
- (void)dealloc;
- (id)defaultBackgroundColor;
- (id)defaultDisabledColor;
- (id)defaultFont;
- (id)defaultHighlightedColor;
- (id)defaultIcon;
- (id)defaultSelectedColor;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (_Bool)isImplicitlyDisabled;
- (void)layoutSubviews;
- (void)logTapEventWithEventName:(id)arg1 parameters:(id)arg2;
- (void)setEnabled:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 title:(id)arg2;
- (void)sizeToFit;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;

@end

