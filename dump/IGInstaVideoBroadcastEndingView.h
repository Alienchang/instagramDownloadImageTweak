//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGInstaVideoBroadcastEndingSummaryView, UIButton, UILabel, UIVisualEffectView;

@interface IGInstaVideoBroadcastEndingView : UIView
{
    id <IGInstaVideoBroadcastEndingViewDelegate> _delegate;
    IGInstaVideoBroadcastEndingSummaryView *_summaryView;
    UIButton *_doneButton;
    UILabel *_summaryDescriptionLabel;
    UIVisualEffectView *_blurBgView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIVisualEffectView *blurBgView; // @synthesize blurBgView=_blurBgView;
@property(nonatomic) __weak id <IGInstaVideoBroadcastEndingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
- (void)doneButtonTapped;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setFinalViewersList:(id)arg1 withFinalViewerCount:(long long)arg2;
- (void)startSpinner;
@property(readonly, nonatomic) UILabel *summaryDescriptionLabel; // @synthesize summaryDescriptionLabel=_summaryDescriptionLabel;
@property(readonly, nonatomic) IGInstaVideoBroadcastEndingSummaryView *summaryView; // @synthesize summaryView=_summaryView;

@end
