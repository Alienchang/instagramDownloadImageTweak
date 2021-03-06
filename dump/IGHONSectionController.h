//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGFeedItemDirectResponseLoggingProviderDelegate.h"
#import "IGFeedItemLoggingProviderDelegate.h"
#import "IGFeedScrollViewDelegate.h"
#import "IGFeedScrollViewListener.h"
#import "IGListAdapterDataSource.h"
#import "IGListSectionType.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class IGFeedItemLogger, IGFeedScrollViewAnnouncer, IGFeedVideoCellManager, IGHONLogger, IGHONMediaBundle, IGListAdapter, IGListCollectionView, IGUserSession, NSMutableIndexSet, NSString;

@interface IGHONSectionController : IGListSectionController <IGFeedItemDirectResponseLoggingProviderDelegate, IGFeedItemLoggingProviderDelegate, IGFeedScrollViewDelegate, IGFeedScrollViewListener, IGListAdapterDataSource, UICollectionViewDelegateFlowLayout, IGListSectionType>
{
    id <IGHONSectionControllerDelegate> _delegate;
    IGListCollectionView *_collectionView;
    IGUserSession *_userSession;
    IGHONMediaBundle *_mediaBundle;
    long long _currentItemIndex;
    NSMutableIndexSet *_seenIndexes;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    IGListAdapter *_listAdapter;
    IGFeedVideoCellManager *_videoCellManager;
    IGFeedItemLogger *_feedItemLogger;
    IGHONLogger *_logger;
    NSString *_analyticsModule;
    unsigned long long _scrollDirection;
    struct CGPoint _lastContentOffset;
}

- (void).cxx_destruct;
- (_Bool)allItemsViewed;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
- (id)cellForItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) IGListCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) long long currentItemIndex; // @synthesize currentItemIndex=_currentItemIndex;
@property(nonatomic) __weak id <IGHONSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (void)executeForEachIndex:(id)arg1 action:(CDUnknownBlockType)arg2;
- (id)extraDictionaryForFeedItem:(id)arg1;
- (id)extraDictionaryForFeedItem:(id)arg1 directResponseInfo:(id)arg2;
- (id)feedItemForController:(id)arg1;
@property(retain, nonatomic) IGFeedItemLogger *feedItemLogger; // @synthesize feedItemLogger=_feedItemLogger;
- (id)feedSectionControllerForIndex:(long long)arg1;
- (void)finalizeBeforeProgressing;
- (id)initWithAnalyticsModule:(id)arg1 userSession:(id)arg2;
@property(nonatomic) struct CGPoint lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(retain, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (void)logAttemptedToComplete;
- (void)logEventForSectionController:(id)arg1 eventType:(id)arg2;
@property(readonly, nonatomic) IGHONLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) IGHONMediaBundle *mediaBundle; // @synthesize mediaBundle=_mediaBundle;
- (long long)numberOfItems;
- (id)objectsForListAdapter:(id)arg1;
@property(nonatomic) unsigned long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(readonly, nonatomic) IGFeedScrollViewAnnouncer *scrollViewAnnouncer; // @synthesize scrollViewAnnouncer=_scrollViewAnnouncer;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
@property(readonly, nonatomic) NSMutableIndexSet *seenIndexes; // @synthesize seenIndexes=_seenIndexes;
- (void)selectItemAtIndex:(long long)arg1;
- (void)setupCollectionView;
- (void)setupListAdapter;
- (void)setupVideoCellManager;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)skipItems;
- (void)switchCurrentSetToIndex:(long long)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGFeedVideoCellManager *videoCellManager; // @synthesize videoCellManager=_videoCellManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

