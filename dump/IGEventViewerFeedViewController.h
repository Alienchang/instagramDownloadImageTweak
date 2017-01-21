//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGEventViewerFeedLayoutDataSource.h"
#import "IGEventViewerFeedLayoutDelegate.h"
#import "UICollectionViewDelegate.h"

@class IGEventViewerActionCell, IGEventViewerCollectionViewCellAnimator, IGEventViewerDataSource, IGEventViewerFeedLayout, IGFeedItemMediaCell<IGEventViewerCellType>, IGListAdapter, IGListCollectionView, NSIndexPath, NSString;

@interface IGEventViewerFeedViewController : UIViewController <UICollectionViewDelegate, IGEventViewerFeedLayoutDelegate, IGEventViewerFeedLayoutDataSource>
{
    IGListCollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGEventViewerFeedLayout *_feedLayout;
    id <IGEventViewerFeedViewScrollingDelegate> _scrollingDelegate;
    id <IGEventViewerFeedViewDraggingDelegate> _draggingDelegate;
    IGEventViewerDataSource *_dataSource;
    IGEventViewerCollectionViewCellAnimator *_cellAnimator;
    NSIndexPath *_centeredIndexPathWhenBeginDragging;
    struct CGPoint _lastContentOffset;
    struct CGPoint _panGestureStartLocation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGEventViewerCollectionViewCellAnimator *cellAnimator; // @synthesize cellAnimator=_cellAnimator;
- (id)cellAtIndexPath:(id)arg1;
@property(retain, nonatomic) NSIndexPath *centeredIndexPathWhenBeginDragging; // @synthesize centeredIndexPathWhenBeginDragging=_centeredIndexPathWhenBeginDragging;
@property(readonly, nonatomic) __weak IGListCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)configureCollectionView:(id)arg1;
@property(readonly, nonatomic) IGEventViewerActionCell *currentlyCenteredActionCell;
@property(readonly, nonatomic) IGFeedItemMediaCell<IGEventViewerCellType> *currentlyCenteredCell;
@property(readonly, nonatomic) NSIndexPath *currentlyCenteredIndexPath;
@property(readonly, nonatomic) IGEventViewerDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)didReceiveScrollViewPanGesture:(id)arg1;
@property(nonatomic) __weak id <IGEventViewerFeedViewDraggingDelegate> draggingDelegate; // @synthesize draggingDelegate=_draggingDelegate;
- (struct CGSize)eventViewerFeedLayout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void)eventViewerFeedLayoutDidReachMaximumContentOffset:(id)arg1;
@property(readonly, nonatomic) __weak IGEventViewerFeedLayout *feedLayout; // @synthesize feedLayout=_feedLayout;
- (id)initWithDataSource:(id)arg1;
@property(nonatomic) struct CGPoint lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(readonly, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(nonatomic) struct CGPoint panGestureStartLocation; // @synthesize panGestureStartLocation=_panGestureStartLocation;
- (void)scrollToItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrolling;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
@property(nonatomic) __weak id <IGEventViewerFeedViewScrollingDelegate> scrollingDelegate; // @synthesize scrollingDelegate=_scrollingDelegate;
- (void)setupCollectionViewAndListAdapter;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willScrollToContentOffset:(struct CGPoint)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
