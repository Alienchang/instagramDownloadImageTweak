//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGFeedNetworkSourceDelegate.h"
#import "IGMediaThumbnailSectionControllerSelectionDelegate.h"
#import "IGMegaphoneSectionControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class IGCollectionViewVisibility, IGDefaultGenericMegaphoneLogger, IGFeedNetworkSource, IGFeedPreviewHandler, IGGridCollectionViewLayout, IGHashtagFeedListAdapterDataSource, IGHashtagModel, IGListAdapter, IGListCollectionView, IGMediaThumbnailLogger, IGRefreshControl, IGRelatedItemsService, IGUserSession, IGVisitedRelatedItemsStore, NSString, UIBarButtonItem;

@interface IGHashtagFeedViewController2 : IGViewController <IGFeedNetworkSourceDelegate, UIScrollViewDelegate, IGMediaThumbnailSectionControllerSelectionDelegate, IGMegaphoneSectionControllerDelegate>
{
    UIBarButtonItem *_reshareMenuOptionsButton;
    IGUserSession *_userSession;
    IGHashtagModel *_hashtag;
    IGVisitedRelatedItemsStore *_visitedHashtagsStore;
    IGListCollectionView *_collectionView;
    IGListAdapter *_adapter;
    IGHashtagFeedListAdapterDataSource *_listAdapterDataSource;
    IGFeedNetworkSource *_feedNetworkSource;
    IGRefreshControl *_refreshControl;
    IGGridCollectionViewLayout *_feedLayout;
    IGRelatedItemsService *_relatedItemsService;
    IGDefaultGenericMegaphoneLogger *_megaphoneLogger;
    IGMediaThumbnailLogger *_mediaLogger;
    NSString *_sessionId;
    IGCollectionViewVisibility *_collectionViewVisibility;
    IGFeedPreviewHandler *_previewHandler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGListAdapter *adapter; // @synthesize adapter=_adapter;
- (id)analyticsModule;
@property(readonly, nonatomic) IGListCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) IGCollectionViewVisibility *collectionViewVisibility; // @synthesize collectionViewVisibility=_collectionViewVisibility;
- (void)dealloc;
- (void)didDismissMegaphoneSectionController:(id)arg1;
- (void)didSelectFeedItem:(id)arg1;
- (void)dismissMegaphone;
- (_Bool)enableNavState;
@property(retain, nonatomic) IGGridCollectionViewLayout *feedLayout; // @synthesize feedLayout=_feedLayout;
@property(readonly, nonatomic) IGFeedNetworkSource *feedNetworkSource; // @synthesize feedNetworkSource=_feedNetworkSource;
- (void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(long long)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(long long)arg3;
- (void)feedNetworkSource:(id)arg1 didRefreshObjects:(id)arg2 allObjects:(id)arg3;
- (void)feedNetworkSource:(id)arg1 didStartLoadingForFetchAction:(long long)arg2;
- (void)feedNetworkSource:(id)arg1 willLoadItemsFromResponse:(id)arg2;
- (void)fetch;
- (_Bool)fetchMore;
@property(readonly, nonatomic) IGHashtagModel *hashtag; // @synthesize hashtag=_hashtag;
- (id)initWithUserSession:(id)arg1 hashtag:(id)arg2;
@property(readonly, nonatomic) IGHashtagFeedListAdapterDataSource *listAdapterDataSource; // @synthesize listAdapterDataSource=_listAdapterDataSource;
- (void)loadNextPage;
- (void)logClickForMedia:(id)arg1 atIndex:(long long)arg2 sectionType:(unsigned long long)arg3;
- (void)logImpressions;
- (void)logImpressionsIfNecessary;
@property(readonly, nonatomic) IGMediaThumbnailLogger *mediaLogger; // @synthesize mediaLogger=_mediaLogger;
@property(retain, nonatomic) IGDefaultGenericMegaphoneLogger *megaphoneLogger; // @synthesize megaphoneLogger=_megaphoneLogger;
- (void)megaphoneSectionController:(id)arg1 didSelectButton:(id)arg2;
- (void)onHashtagUpdated;
- (void)presentHashtagReshareView;
@property(retain, nonatomic) IGFeedPreviewHandler *previewHandler; // @synthesize previewHandler=_previewHandler;
@property(readonly, nonatomic) IGRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(readonly, nonatomic) IGRelatedItemsService *relatedItemsService; // @synthesize relatedItemsService=_relatedItemsService;
- (void)reloadFeed;
- (void)requestRelatedItems;
@property(readonly, nonatomic) UIBarButtonItem *reshareMenuOptionsButton; // @synthesize reshareMenuOptionsButton=_reshareMenuOptionsButton;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (_Bool)shouldLoadMoreWhenScrollingToTargetContentOffset:(struct CGPoint)arg1 inScrollView:(id)arg2;
- (void)showNetworkFailedErrorMessage:(id)arg1;
- (void)updateDataSourceObjectsAndReloadFeed;
- (void)updateListAdapterDataSourceObjects;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
@property(readonly, nonatomic) IGVisitedRelatedItemsStore *visitedHashtagsStore; // @synthesize visitedHashtagsStore=_visitedHashtagsStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

