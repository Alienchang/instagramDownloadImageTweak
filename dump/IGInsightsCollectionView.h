//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class IGInsightsHeaderView, NSArray, NSString, UICollectionView;

@interface IGInsightsCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    id <IGInsightsCollectionViewDelegate> _delegate;
    UICollectionView *_collectionView;
    IGInsightsHeaderView *_headerView;
    NSArray *_mediaBundles;
    long long _itemCount;
    double _cellWidth;
}

- (void).cxx_destruct;
- (id)_feedItemAtIndex:(long long)arg1;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(nonatomic) __weak id <IGInsightsCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGInsightsHeaderView *headerView; // @synthesize headerView=_headerView;
- (id)initWithHeader:(id)arg1 buttonText:(id)arg2 mediaItemCount:(long long)arg3;
@property(nonatomic) long long itemCount; // @synthesize itemCount=_itemCount;
- (void)layoutSubviews;
@property(copy, nonatomic) NSArray *mediaBundles; // @synthesize mediaBundles=_mediaBundles;
- (void)setHeaderDelegate:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateMediaBundle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
