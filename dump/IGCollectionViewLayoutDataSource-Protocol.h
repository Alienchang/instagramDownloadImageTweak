//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGCollectionViewChangeSet, IGCollectionViewLayout, NSArray, NSIndexPath;

@protocol IGCollectionViewLayoutDataSource <NSObject>
- (IGCollectionViewChangeSet *)collectionViewLayout:(IGCollectionViewLayout *)arg1 changeSetFromObjects:(NSArray *)arg2 fromContext:(id)arg3 toObjects:(NSArray *)arg4 toContext:(id)arg5;
- (long long)collectionViewLayout:(IGCollectionViewLayout *)arg1 numberOfItemsInSection:(long long)arg2 withObjects:(NSArray *)arg3 context:(id)arg4;
- (void)collectionViewLayout:(IGCollectionViewLayout *)arg1 prepareContext:(id)arg2 forObjects:(NSArray *)arg3;
- (struct CGSize)collectionViewLayout:(IGCollectionViewLayout *)arg1 sizeForItemAtIndexPath:(NSIndexPath *)arg2 withViewWidth:(double)arg3 withObjects:(NSArray *)arg4 context:(id)arg5;
- (long long)numberOfSectionsForCollectionViewLayout:(IGCollectionViewLayout *)arg1 withObjects:(NSArray *)arg2 context:(id)arg3;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
@end

