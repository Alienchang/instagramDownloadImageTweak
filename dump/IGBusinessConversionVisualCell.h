//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGBusinessConversionDataEntity, IGImageView, UILabel, UIView;

@interface IGBusinessConversionVisualCell : UICollectionViewCell
{
    IGBusinessConversionDataEntity *_data;
    IGImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_topSeparatorLine;
    UIView *_bottomSeparatorLine;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *bottomSeparatorLine; // @synthesize bottomSeparatorLine=_bottomSeparatorLine;
- (void)configureWithDataModel:(id)arg1;
- (id)createBottomSeparatorLine;
- (id)createImageView;
- (id)createSubtitleLabel;
- (id)createTitleLabel;
- (id)createTopSeparatorLine;
@property(retain, nonatomic) IGBusinessConversionDataEntity *data; // @synthesize data=_data;
@property(readonly, nonatomic) IGImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)labelWidthForWidth:(double)arg1;
- (void)layoutSubviews;
- (void)layoutVisualSubviews;
- (void)setup;
- (id)subtitleFont;
- (double)subtitleHeightWithinWidth:(double)arg1;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
- (id)titleFont;
- (double)titleHeightWithinWidth:(double)arg1;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIView *topSeparatorLine; // @synthesize topSeparatorLine=_topSeparatorLine;

@end
