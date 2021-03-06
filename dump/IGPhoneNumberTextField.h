//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGTextField.h"

@class NSString, UIButton, UIImageView, UILabel, UIView;

@interface IGPhoneNumberTextField : IGTextField
{
    id <IGPhoneNumberTextFieldDelegate> _phoneFieldDelegate;
    NSString *_countryNumber;
    UIButton *_countryCodeButton;
    UILabel *_countryCodeLabel;
    UILabel *_countryNumberLabel;
    UIView *_disclosureView;
    UIView *_textFieldLeftView;
    UIImageView *_iconImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *countryCodeButton; // @synthesize countryCodeButton=_countryCodeButton;
- (id)countryCodeColor;
@property(retain, nonatomic) UILabel *countryCodeLabel; // @synthesize countryCodeLabel=_countryCodeLabel;
@property(copy, nonatomic) NSString *countryNumber; // @synthesize countryNumber=_countryNumber;
@property(retain, nonatomic) UILabel *countryNumberLabel; // @synthesize countryNumberLabel=_countryNumberLabel;
- (struct CGPoint)countryNumberLabelOrigin;
@property(retain, nonatomic) UIView *disclosureView; // @synthesize disclosureView=_disclosureView;
- (struct CGRect)disclosureViewFrame;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (id)init;
- (void)initializeSubviews;
- (void)layoutCountryCodeLabels;
- (void)layoutSubviews;
- (id)newDisclosureView;
@property(nonatomic) __weak id <IGPhoneNumberTextFieldDelegate> phoneFieldDelegate; // @synthesize phoneFieldDelegate=_phoneFieldDelegate;
- (void)selectCountryCode;
- (void)setCountryNumberLabelAttributedTextWithLabel:(id)arg1 countryNumber:(id)arg2;
- (void)setCountryWithCode:(id)arg1;
- (void)setCountryWithCode:(id)arg1 andCountryNumber:(id)arg2;
@property(retain, nonatomic) UIView *textFieldLeftView; // @synthesize textFieldLeftView=_textFieldLeftView;

@end

