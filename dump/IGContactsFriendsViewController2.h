//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGActionSheetDelegate.h"
#import "IGFeedStatusViewDelegate.h"
#import "IGFindFriendsHelperDelegate.h"
#import "IGFindUsersViewDataSourceDelegate.h"
#import "IGListAdapterDataSource.h"
#import "IGListAdapterDelegate.h"
#import "UIScrollViewDelegate.h"

@class IGFeedStatusView, IGFindUsersViewDataSource, IGFollowAllHeaderItem, IGListAdapter, IGListCollectionView, IGRefreshControl, IGSuggestedUserLogger, IGUserSession, NSArray, NSString, UIBarButtonItem;

@interface IGContactsFriendsViewController2 : IGViewController <IGActionSheetDelegate, IGFeedStatusViewDelegate, IGFindFriendsHelperDelegate, IGFindUsersViewDataSourceDelegate, IGListAdapterDataSource, IGListAdapterDelegate, UIScrollViewDelegate>
{
    _Bool _loading;
    _Bool _didLoadUsers;
    _Bool _displayFollowAllHeader;
    id <IGContactsFriendsViewController2Delegate> _delegate;
    IGListCollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    UIBarButtonItem *_configureButton;
    IGFindUsersViewDataSource *_dataSource;
    IGFeedStatusView *_emptyStateView;
    IGFollowAllHeaderItem *_followAllHeaderItem;
    id <IGFindFriendsHelperProtocol> _helper;
    IGSuggestedUserLogger *_logger;
    IGRefreshControl *_refreshControl;
    NSArray *_userList;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)actionSheetDismissedWithButtonTitled:(id)arg1;
- (void)actionSheetFinishedHiding;
- (id)analyticsModule;
- (void)authorizeAndFetchUsers;
@property(readonly, nonatomic) IGListCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) UIBarButtonItem *configureButton; // @synthesize configureButton=_configureButton;
@property(readonly, nonatomic) IGFindUsersViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IGContactsFriendsViewController2Delegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool didLoadUsers; // @synthesize didLoadUsers=_didLoadUsers;
- (void)disconnectContacts;
@property(readonly, nonatomic) _Bool displayFollowAllHeader; // @synthesize displayFollowAllHeader=_displayFollowAllHeader;
@property(readonly, nonatomic) IGFeedStatusView *emptyStateView; // @synthesize emptyStateView=_emptyStateView;
- (id)emptyViewForListAdapter:(id)arg1;
- (void)feedStatusViewDidTapOnInfoView:(id)arg1;
- (void)fetchFollowStatusForUsers:(id)arg1;
- (void)findFriendsHelper:(id)arg1 didAuthorizeWithDataRequest:(id)arg2;
- (void)findFriendsHelper:(id)arg1 didFailToAuthorizeWithMessage:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didFailWithError:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadAllUserIDs:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadMoreUsers:(id)arg2 allUsers:(id)arg3;
- (void)findUsersViewDataSource:(id)arg1 didLoadThumbnailsForUsers:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadUserList:(id)arg2;
- (void)finishLoading;
@property(retain, nonatomic) IGFollowAllHeaderItem *followAllHeaderItem; // @synthesize followAllHeaderItem=_followAllHeaderItem;
@property(readonly, nonatomic) id <IGFindFriendsHelperProtocol> helper; // @synthesize helper=_helper;
- (id)initWithUserSession:(id)arg1 displayFollowAllHeader:(_Bool)arg2;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
@property(readonly, nonatomic) IGSuggestedUserLogger *logger; // @synthesize logger=_logger;
- (id)objectsForListAdapter:(id)arg1;
- (void)onConfigureButtonTapped;
@property(readonly, nonatomic) IGRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
@property(retain, nonatomic) NSArray *userList; // @synthesize userList=_userList;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

