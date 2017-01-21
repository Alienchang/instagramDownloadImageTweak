//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

@class NSIndexPath, NSMutableDictionary;

@interface IGEventViewerFeedLayout : UICollectionViewLayout
{
    _Bool _lockContentOffsetForUpdates;
    id <IGEventViewerFeedLayoutDataSource> _dataSource;
    id <IGEventViewerFeedLayoutDelegate> _delegate;
    NSIndexPath *_currentlyCenteredIndexPath;
    NSMutableDictionary *_cachedItemFrames;
    NSIndexPath *_previousSpinnerIndexPath;
    struct CGPoint _lockedContentOffset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *cachedItemFrames; // @synthesize cachedItemFrames=_cachedItemFrames;
- (void)clearLayoutCache;
- (struct CGSize)collectionViewContentSize;
- (void)configureActionCellItemLayoutAttributes:(id)arg1;
- (void)configureHeaderCellItemLayoutAttributes:(id)arg1;
- (void)configureItemLayoutAttributes:(id)arg1;
- (void)configureMediaCellItemLayoutAttributes:(id)arg1;
- (void)configureSpinnerCellSectionItemLayoutAttributes:(id)arg1;
@property(retain, nonatomic) NSIndexPath *currentlyCenteredIndexPath; // @synthesize currentlyCenteredIndexPath=_currentlyCenteredIndexPath;
@property(nonatomic) __weak id <IGEventViewerFeedLayoutDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IGEventViewerFeedLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (id)firstMediaIndexPath;
- (struct CGRect)frameForActionCellAtIndexPath:(id)arg1;
- (struct CGRect)frameForHeaderCellAtIndexPath:(id)arg1;
- (struct CGRect)frameForMediaCellAtIndexPath:(id)arg1;
- (struct CGRect)frameForSingleCellSectionAtIndexPath:(id)arg1;
- (id)init;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)invalidateLayout;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)lastItemIndexPath;
- (id)lastMediaIndexPath;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
@property(nonatomic) _Bool lockContentOffsetForUpdates; // @synthesize lockContentOffsetForUpdates=_lockContentOffsetForUpdates;
@property(nonatomic) struct CGPoint lockedContentOffset; // @synthesize lockedContentOffset=_lockedContentOffset;
- (double)offsetPercentageOfItemForCenteredItemWithAttributes:(id)arg1 inCollectionView:(id)arg2;
- (void)prepareLayout;
@property(retain, nonatomic) NSIndexPath *previousSpinnerIndexPath; // @synthesize previousSpinnerIndexPath=_previousSpinnerIndexPath;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)spinnerIndexPath;
- (struct CGPoint)targetContentOffsetForLayoutAttributes:(id)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (struct CGPoint)targetContentOffsetInScrollview:(id)arg1 forLayoutAttributes:(id)arg2;
- (long long)totalItemCount;
- (double)verticalOffsetForCenteredItemWithAttributes:(id)arg1 inCollectionView:(id)arg2;

@end

