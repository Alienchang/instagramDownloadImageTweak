//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIImageView, UILabel;

@interface IGBannerView : UIButton
{
    UIImageView *_disclosureIndicator;
    UILabel *_textLabel;
    UILabel *_disclosureLabel;
    long long _bannerIndicatorType;
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _disclosureLabelInsets;
}

- (void).cxx_destruct;
@property(nonatomic) long long bannerIndicatorType; // @synthesize bannerIndicatorType=_bannerIndicatorType;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) UIImageView *disclosureIndicator; // @synthesize disclosureIndicator=_disclosureIndicator;
@property(retain, nonatomic) UILabel *disclosureLabel; // @synthesize disclosureLabel=_disclosureLabel;
@property(nonatomic) struct UIEdgeInsets disclosureLabelInsets; // @synthesize disclosureLabelInsets=_disclosureLabelInsets;
- (id)initWithFrame:(struct CGRect)arg1 bannerIndicatorType:(long long)arg2;
- (void)layoutSubviews;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;

@end

