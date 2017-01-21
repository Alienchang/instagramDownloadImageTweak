//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGLiveCuratorContainerView, UILabel;

@interface IGStoryTopLiveCell : UICollectionViewCell
{
    id <IGStoryTopLiveCellDelegate> _delegate;
    IGLiveCuratorContainerView *_curatorContainerView;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
- (void)configureWithModel:(id)arg1;
@property(readonly, nonatomic) IGLiveCuratorContainerView *curatorContainerView; // @synthesize curatorContainerView=_curatorContainerView;
@property(nonatomic) __weak id <IGStoryTopLiveCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapOnCuratorContainerView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end

