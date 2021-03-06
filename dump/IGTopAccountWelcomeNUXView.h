//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGCoreTextLinkHandler.h"

@class IGCoreTextView, IGFacebookBusinessButton, IGUserSession, NSString, UIImageView, UILabel;

@interface IGTopAccountWelcomeNUXView : UIView <IGCoreTextLinkHandler>
{
    id <IGTopAccountWelcomeNUXViewDelegate> _delegate;
    IGUserSession *_userSession;
    IGFacebookBusinessButton *_acceptButton;
    IGCoreTextView *_disclaimerLabel;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    struct UIEdgeInsets _viewContentInsets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGFacebookBusinessButton *acceptButton; // @synthesize acceptButton=_acceptButton;
- (struct CGRect)acceptButtonRect;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
@property(nonatomic) __weak id <IGTopAccountWelcomeNUXViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapAcceptTermsAndConditionsButton:(id)arg1;
@property(readonly, nonatomic) IGCoreTextView *disclaimerLabel; // @synthesize disclaimerLabel=_disclaimerLabel;
- (struct CGRect)disclaimerLabelRect;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (struct CGRect)imageViewRect;
- (id)initWithFrame:(struct CGRect)arg1 userSession:(id)arg2;
- (void)layoutSubviews;
- (void)raiseView:(id)arg1 y:(double)arg2;
- (void)setUpAcceptButton;
- (void)setUpDisclaimerLabel;
- (void)setUpSubtitle;
- (void)setUpTitle;
- (void)setUpViewHierarchy;
@property(nonatomic) struct UIEdgeInsets viewContentInsets; // @synthesize viewContentInsets=_viewContentInsets;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
- (struct CGRect)subtitleRectWithTitleRect:(struct CGRect)arg1;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (struct CGRect)titleRectWithImageViewRect:(struct CGRect)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

