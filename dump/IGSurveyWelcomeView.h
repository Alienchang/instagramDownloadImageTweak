//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGCoreTextLinkHandler.h"

@class IGCoreTextView, NSString, UIButton, UIImageView, UILabel;

@interface IGSurveyWelcomeView : UIView <IGCoreTextLinkHandler>
{
    id <IGSurveyWelcomeViewDelegate> _delegate;
    UIView *_welcomeViewContainer;
    UIImageView *_imageHolder;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGCoreTextView *_ctaLabel;
    UIButton *_closeButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (id)createAlertBackground;
- (id)createCTALabel;
- (id)createCloseButton;
- (id)createImageHolder;
- (id)createSubitleLabel;
- (id)createTitleLabel;
@property(readonly, nonatomic) IGCoreTextView *ctaLabel; // @synthesize ctaLabel=_ctaLabel;
@property(nonatomic) __weak id <IGSurveyWelcomeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapCloseButton:(id)arg1;
@property(readonly, nonatomic) UIImageView *imageHolder; // @synthesize imageHolder=_imageHolder;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setButtonString:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUpViewHierarchy;
- (void)shouldShowCloseArrow:(_Bool)arg1;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIView *welcomeViewContainer; // @synthesize welcomeViewContainer=_welcomeViewContainer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

