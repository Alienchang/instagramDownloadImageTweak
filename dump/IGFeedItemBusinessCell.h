//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UIWebViewDelegate.h"

@class IGFeedItem, IGTooltipView, NSString, UIButton, UIView;

@interface IGFeedItemBusinessCell : UICollectionViewCell <UIWebViewDelegate>
{
    IGFeedItem *_feedItem;
    id <IGFeedItemConfigurationType> _itemConfiguration;
    id <IGFeedItemBusinessCellDelegate> _delegate;
    UIButton *_promoteButton;
    UIButton *_insightsButton;
    UIView *_lineView;
    unsigned long long _buttonStyle;
    IGTooltipView *_tooltipView;
}

+ (double)height;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(nonatomic) __weak id <IGFeedItemBusinessCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (void)hideTooltip;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initializeInsightsButton;
- (id)initializePromoteButton;
@property(retain, nonatomic) UIButton *insightsButton; // @synthesize insightsButton=_insightsButton;
- (void)insightsButtonClick:(id)arg1;
@property(readonly, nonatomic) id <IGFeedItemConfigurationType> itemConfiguration; // @synthesize itemConfiguration=_itemConfiguration;
- (void)layoutSubviews;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *promoteButton; // @synthesize promoteButton=_promoteButton;
- (void)promoteButtonClick:(id)arg1;
- (void)setFeedItem:(id)arg1 userSession:(id)arg2;
- (void)setItemConfiguration:(id)arg1 userSession:(id)arg2;
@property(retain, nonatomic) IGTooltipView *tooltipView; // @synthesize tooltipView=_tooltipView;
- (void)setupBusinessPromoteButtonForFeedItem:(id)arg1;
- (void)setupInsightsButton;
- (void)setupPromoteButtonForFeedItem:(id)arg1;
- (void)showPromoteUnavailableReason;
- (void)updateCellWithFeedItem:(id)arg1 userSession:(id)arg2;
- (void)updateInsightsButtonStyle:(unsigned long long)arg1;
- (void)updatePromoteButtonStyle:(unsigned long long)arg1;
- (void)viewAdGuidelineButtonClick:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
