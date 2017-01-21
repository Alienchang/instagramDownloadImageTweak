//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGTapButton.h"

@class UIImageView, UILabel;

@interface IGStoryViewersButton : IGTapButton
{
    long long _viewerCount;
    UIImageView *_swipeUpImageView;
    UIImageView *_eyeImageView;
    UILabel *_label;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *eyeImageView; // @synthesize eyeImageView=_eyeImageView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
@property(nonatomic) long long viewerCount; // @synthesize viewerCount=_viewerCount;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) UIImageView *swipeUpImageView; // @synthesize swipeUpImageView=_swipeUpImageView;
- (void)updateLabelText;

@end

