//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFeedPromotionBannerCell.h"

@class IGSimpleButton;

@interface IGFeedPromotionBannerConnectCell : IGFeedPromotionBannerCell
{
    IGSimpleButton *_actionButton;
    struct CGSize _titleSize;
    struct CGSize _subtitleSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGSimpleButton *actionButton; // @synthesize actionButton=_actionButton;
- (void)actionButtonTapped:(id)arg1;
- (void)configureCellWithConfiguration:(id)arg1;
- (double)currentHeight;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) struct CGSize subtitleSize; // @synthesize subtitleSize=_subtitleSize;
@property(nonatomic) struct CGSize titleSize; // @synthesize titleSize=_titleSize;

@end

