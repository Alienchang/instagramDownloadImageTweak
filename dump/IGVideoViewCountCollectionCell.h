//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGVideoViewCountView;

@interface IGVideoViewCountCollectionCell : UICollectionViewCell
{
    IGVideoViewCountView *_viewCountView;
}

+ (double)cellHeight;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setLabelText:(id)arg1;
- (void)setLabelTextColor:(id)arg1;
@property(readonly, nonatomic) IGVideoViewCountView *viewCountView; // @synthesize viewCountView=_viewCountView;

@end
