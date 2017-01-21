//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, IGButton, UIImageView, UITextField;

@interface IGEditProfileConfirmationView : UIView
{
    IGButton *_confirmButton;
    UITextField *_textField;
    UIImageView *_exclamationMark;
    CAGradientLayer *_confirmButtonGradient;
}

+ (id)confirmButtonGradient;
+ (id)confirmButtonWithAsset:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) IGButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) CAGradientLayer *confirmButtonGradient; // @synthesize confirmButtonGradient=_confirmButtonGradient;
@property(retain, nonatomic) UIImageView *exclamationMark; // @synthesize exclamationMark=_exclamationMark;
- (id)initWithTextField:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;

@end

