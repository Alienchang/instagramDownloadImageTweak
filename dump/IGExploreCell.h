//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGThumbnailsGridViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class IGCarouselView, IGExploreEmptyView, IGExploreViewModel, IGProfilePictureImageView, IGThumbnailsGridView, NSString, UIImageView, UILabel, UIView;

@interface IGExploreCell : UICollectionViewCell <IGThumbnailsGridViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <IGExploreCellDelegate> _delegate;
    IGThumbnailsGridView *_thumbnailsGridView;
    IGExploreViewModel *_viewModel;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGProfilePictureImageView *_imageView;
    UILabel *_bylineLabel;
    UIView *_actionView;
    IGExploreEmptyView *_emptyView;
    unsigned long long _action;
    UIImageView *_verifiedImageView;
    IGCarouselView *_thumbnailsCarouselView;
}

+ (double)avatarHeight;
+ (id)bylineFont;
+ (double)heightWithConstrainedWidth:(double)arg1 exploreViewModel:(id)arg2;
+ (double)leftRightPadding;
+ (struct IGCarouselMetrics)thumbnailsCarouselMetricsWithWidth:(double)arg1;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(retain, nonatomic) UIView *actionView; // @synthesize actionView=_actionView;
- (void)applyLayoutAttributes:(id)arg1;
@property(retain, nonatomic) UILabel *bylineLabel; // @synthesize bylineLabel=_bylineLabel;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(nonatomic) __weak id <IGExploreCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFinishLoadingThumbnails;
- (void)didTapThumbnailAtIndex:(unsigned long long)arg1;
@property(retain, nonatomic) IGExploreEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) IGProfilePictureImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)onDismissButton:(id)arg1;
- (void)onFollowButton:(id)arg1;
- (void)onFollowingButton:(id)arg1;
- (void)prepareForReuse;
- (void)setExploreViewModel:(id)arg1;
- (void)setFollowingVisible:(_Bool)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) IGCarouselView *thumbnailsCarouselView; // @synthesize thumbnailsCarouselView=_thumbnailsCarouselView;
@property(retain, nonatomic) IGThumbnailsGridView *thumbnailsGridView; // @synthesize thumbnailsGridView=_thumbnailsGridView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *verifiedImageView; // @synthesize verifiedImageView=_verifiedImageView;
@property(copy, nonatomic) IGExploreViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)setupThumbnailsCarouselView;
- (void)setupThumbnailsViewFrameWithOrigin:(struct CGPoint)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
