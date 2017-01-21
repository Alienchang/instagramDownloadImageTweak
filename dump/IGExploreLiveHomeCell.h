//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CAGradientLayer, IGImageView, UIImageView, UILabel, UIView;

@interface IGExploreLiveHomeCell : UICollectionViewCell
{
    IGImageView *_coverImageView;
    UIImageView *_viewCountIcon;
    UILabel *_viewCountLabel;
    UILabel *_titleLabel;
    CAGradientLayer *_gradientLayer;
    UIView *_highlightOverlayView;
}

- (void).cxx_destruct;
- (void)configureWithCoverImage:(id)arg1 shouldCrossFade:(_Bool)arg2;
- (void)configureWithModel:(id)arg1;
- (void)configureWithModel:(id)arg1 andUpdate:(id)arg2;
- (void)configureWithTitle:(id)arg1 status:(long long)arg2 viewCount:(long long)arg3;
- (void)configureWithUpdate:(id)arg1;
@property(readonly, nonatomic) IGImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(readonly, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(readonly, nonatomic) UIView *highlightOverlayView; // @synthesize highlightOverlayView=_highlightOverlayView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)resolvedCoverFrameUrlFromModel:(id)arg1 andUpdate:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *viewCountIcon; // @synthesize viewCountIcon=_viewCountIcon;
@property(readonly, nonatomic) UILabel *viewCountLabel; // @synthesize viewCountLabel=_viewCountLabel;

@end

