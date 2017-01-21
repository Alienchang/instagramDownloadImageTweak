//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "IGActivityFeedViewControllerProtocol.h"
#import "IGNewsDataSourceSectionDelegate.h"
#import "IGTableViewInsetInfoViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class IGActivityPreviewingHandler, IGNewsEmptyFeedView, IGRefreshControl, IGTableViewInsetInfoView, IGUserSession, IGViewController, NSArray, NSMutableDictionary, NSString, UIView;

@interface IGNewsTableViewController : IGGroupedTableViewController <UITableViewDataSource, UITableViewDelegate, IGNewsDataSourceSectionDelegate, IGTableViewInsetInfoViewDelegate, IGActivityFeedViewControllerProtocol>
{
    _Bool _loading;
    id <IGActivityFeedViewControllerDelegate> delegate;
    IGViewController *containingViewController;
    IGUserSession *_userSession;
    long long _segment;
    NSArray *_sections;
    double _pullToRefreshYInset;
    IGRefreshControl *_refreshControl;
    IGTableViewInsetInfoView *_infoView;
    NSMutableDictionary *_webViewCellSizes;
    IGNewsEmptyFeedView *_emptyFeedView;
    UIView *_lineView;
    unsigned long long _fetchState;
    IGActivityPreviewingHandler *_previewDelegate;
}

- (void).cxx_destruct;
- (id)analyticsModule;
@property(nonatomic) __weak IGViewController *containingViewController; // @synthesize containingViewController;
- (void)dealloc;
@property(nonatomic) __weak id <IGActivityFeedViewControllerDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) IGNewsEmptyFeedView *emptyFeedView; // @synthesize emptyFeedView=_emptyFeedView;
- (void)fetchData;
@property(nonatomic) unsigned long long fetchState; // @synthesize fetchState=_fetchState;
- (void)finishedLoadingData;
@property(retain, nonatomic) IGTableViewInsetInfoView *infoView; // @synthesize infoView=_infoView;
- (id)initWithUserSession:(id)arg1;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
- (id)labelForHeaderInSection:(long long)arg1;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
- (void)logFollowEvent:(id)arg1 isFollow:(_Bool)arg2 targetID:(id)arg3 clickPoint:(id)arg4;
- (void)needsUpdateHeightsWithNewsDataSection:(id)arg1;
- (id)newEmptyFeedView;
- (void)newsDataSection:(id)arg1 openURL:(id)arg2;
- (void)newsDataSection:(id)arg1 presentViewController:(id)arg2;
- (void)newsDataSection:(id)arg1 pushViewController:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onDataReceived:(id)arg1;
- (void)onFetchFailed:(id)arg1;
- (struct UIEdgeInsets)preferredContentInsets;
@property(retain, nonatomic) IGActivityPreviewingHandler *previewDelegate; // @synthesize previewDelegate=_previewDelegate;
@property(nonatomic) double pullToRefreshYInset; // @synthesize pullToRefreshYInset=_pullToRefreshYInset;
@property(retain, nonatomic) IGRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
- (void)reloadDataFromPullToRefresh;
- (id)scrollView;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)sectionAtSectionIndex:(unsigned long long)arg1;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) long long segment; // @synthesize segment=_segment;
@property(retain, nonatomic) NSMutableDictionary *webViewCellSizes; // @synthesize webViewCellSizes=_webViewCellSizes;
- (void)showNuxIfAppropriate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableViewInsetInfoViewDidTapOnView:(id)arg1;
- (id)titleForHeaderInSection:(long long)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
