//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGInsightsMediaFilterViewControllerDelegate.h"
#import "IGInsightsSeeAllPostsTabContentViewDataSourceDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class IGInsightsFilterViewController, IGInsightsLoggingHelper, IGInsightsMediaCollectionViewScrollDelegate, IGInsightsMediaListAdapterDataSource, IGInsightsQuery, IGInsightsSeeAllPostsFilterSummaryView, IGInsightsSeeAllPostsTabContentViewDataSource, IGListAdapter, IGListAdapterUpdaterLogger, IGListCollectionView, IGRefreshControl, IGUserSession, NSString, UIActivityIndicatorView;

@interface IGInsightsSeeAllStoriesViewController : IGViewController <IGInsightsSeeAllPostsTabContentViewDataSourceDelegate, IGInsightsMediaFilterViewControllerDelegate, UIGestureRecognizerDelegate>
{
    _Bool _showFilterView;
    IGInsightsSeeAllPostsTabContentViewDataSource *_dataSource;
    IGInsightsSeeAllPostsFilterSummaryView *_summaryView;
    IGInsightsLoggingHelper *_loggingHelper;
    IGUserSession *_userSession;
    IGInsightsQuery *_buttonQuery;
    IGListCollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGListAdapterUpdaterLogger *_adapterPerfLogger;
    IGRefreshControl *_refreshControl;
    UIActivityIndicatorView *_spinner;
    IGInsightsMediaCollectionViewScrollDelegate *_scrollDelegate;
    IGInsightsMediaListAdapterDataSource *_listAdapterDataSource;
    IGInsightsFilterViewController *_filterVC;
}

+ (id)createSpinner;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGListAdapterUpdaterLogger *adapterPerfLogger; // @synthesize adapterPerfLogger=_adapterPerfLogger;
- (id)analyticsModule;
@property(retain, nonatomic) IGInsightsQuery *buttonQuery; // @synthesize buttonQuery=_buttonQuery;
@property(retain, nonatomic) IGListCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) IGInsightsSeeAllPostsTabContentViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)didUpdateMediaBundlesForInsightsSeeAllPostsTabContentViewDataSource:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
@property(retain, nonatomic) IGInsightsFilterViewController *filterVC; // @synthesize filterVC=_filterVC;
- (id)initWithQuery:(id)arg1 loggingHelper:(id)arg2 userSession:(id)arg3;
@property(retain, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(readonly, nonatomic) IGInsightsMediaListAdapterDataSource *listAdapterDataSource; // @synthesize listAdapterDataSource=_listAdapterDataSource;
@property(retain, nonatomic) IGInsightsLoggingHelper *loggingHelper; // @synthesize loggingHelper=_loggingHelper;
- (void)mediaBundleRequestFailureForInsightsSeeAllPostsTabContentViewDataSource:(id)arg1 errorMessage:(id)arg2;
- (void)mediaFilterControllerDidTapApply:(id)arg1;
- (_Bool)prefersTabBarHidden;
@property(readonly, nonatomic) IGRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
- (void)reloadDataFromPullToRefresh;
@property(readonly, nonatomic) IGInsightsMediaCollectionViewScrollDelegate *scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(nonatomic) _Bool showFilterView; // @synthesize showFilterView=_showFilterView;
@property(readonly, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
- (void)startRequest;
- (void)startRequestHideCollectionView;
@property(readonly, nonatomic) IGInsightsSeeAllPostsFilterSummaryView *summaryView; // @synthesize summaryView=_summaryView;
- (void)summaryViewClick:(id)arg1;
- (void)updateSummaryView;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

