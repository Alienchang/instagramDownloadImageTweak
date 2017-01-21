//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "LXReorderableCollectionViewDataSource.h"
#import "LXReorderableCollectionViewDelegateFlowLayout.h"

@class IGFilterCollectionController, NSString, UICollectionView;

@interface IGFilterTrayManagerViewController : IGViewController <LXReorderableCollectionViewDataSource, LXReorderableCollectionViewDelegateFlowLayout>
{
    IGFilterCollectionController *_trayController;
    id <IGFilterTrayManagerViewControllerDelegate> _delegate;
    UICollectionView *_filterCollectionView;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canBeRemovedAtPoint:(struct CGPoint)arg3;
- (_Bool)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canMoveToIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 didMoveToIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 willMoveToIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 willBeginDraggingItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 willEndDraggingItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
@property(nonatomic) __weak id <IGFilterTrayManagerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UICollectionView *filterCollectionView; // @synthesize filterCollectionView=_filterCollectionView;
- (id)initWithFilterTrayController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onDismissButtonTapped;
- (_Bool)prefersStatusBarHidden;
@property(retain, nonatomic) IGFilterCollectionController *trayController; // @synthesize trayController=_trayController;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

