//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGAutocompleteAlmostAbstractDataSource.h"

#import "IGFeedStatusViewDataSource.h"
#import "IGWebDataSource.h"

@class IGCacheProxy, IGUser, IGUserActions, NSArray, NSNumber, NSString;

@interface IGUserListNetworkDataSource : IGAutocompleteAlmostAbstractDataSource <IGWebDataSource, IGFeedStatusViewDataSource>
{
    _Bool _loading;
    _Bool _moreUsersAvailable;
    _Bool _excludesCurrentUser;
    NSString *_fetchPath;
    NSString *_searchString;
    NSArray *_augmentedUsers;
    long long _userCellAccessory;
    NSString *_errorMessage;
    NSNumber *_totalUsersCount;
    NSString *_rankToken;
    CDUnknownBlockType _sortingBlock;
    id <IGUserListNetworkDataSourceDelegate> _delegate;
    NSString *_maxID;
    long long _status;
    IGCacheProxy *_searchCache;
    NSArray *_allUsersCache;
    IGUser *_currentUser;
    IGUserActions *_userActions;
    id <IGAPIClient> _networker;
    NSArray *_forcedUserIds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *allUsersCache; // @synthesize allUsersCache=_allUsersCache;
@property(retain, nonatomic) NSArray *augmentedUsers; // @synthesize augmentedUsers=_augmentedUsers;
- (long long)authorizationError;
- (id)authorizationErrorMessage;
- (id)authorizationErrorMessageDetail;
- (void)clearResults;
@property(readonly, nonatomic) IGUser *currentUser; // @synthesize currentUser=_currentUser;
- (void)dealloc;
@property(nonatomic) __weak id <IGUserListNetworkDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)emptyMessage;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) _Bool excludesCurrentUser; // @synthesize excludesCurrentUser=_excludesCurrentUser;
- (void)fetchData;
- (void)fetchMoreData;
@property(retain, nonatomic) NSString *fetchPath; // @synthesize fetchPath=_fetchPath;
- (void)filterBySearchString:(id)arg1;
@property(readonly, nonatomic) NSArray *forcedUserIds; // @synthesize forcedUserIds=_forcedUserIds;
- (id)getNamesForUser:(id)arg1;
- (_Bool)hasCachedResultsForQuery:(id)arg1;
- (unsigned long long)indexOfUser:(id)arg1;
- (id)initWithCurrentUser:(id)arg1 userActions:(id)arg2 networker:(id)arg3;
- (id)initWithCurrentUser:(id)arg1 userActions:(id)arg2 networker:(id)arg3 forcedUserIds:(id)arg4;
- (_Bool)isInitialLoading;
- (_Bool)isSearching;
- (unsigned long long)itemCount;
- (_Bool)loadedOnce;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(copy, nonatomic) NSString *maxID; // @synthesize maxID=_maxID;
- (_Bool)moreAvailable;
@property(nonatomic) _Bool moreUsersAvailable; // @synthesize moreUsersAvailable=_moreUsersAvailable;
@property(retain, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
- (void)onMoreUsersReceived:(id)arg1 fromRequest:(id)arg2;
- (void)onUserFetchFailed:(id)arg1 fromRequest:(id)arg2;
- (void)onUsersReceived:(id)arg1 fromRequest:(id)arg2;
- (void)performFetch;
- (void)performSearch;
@property(copy, nonatomic) NSString *rankToken; // @synthesize rankToken=_rankToken;
- (void)removeUser:(id)arg1;
@property(retain, nonatomic) IGCacheProxy *searchCache; // @synthesize searchCache=_searchCache;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(copy, nonatomic) CDUnknownBlockType sortingBlock; // @synthesize sortingBlock=_sortingBlock;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber *totalUsersCount; // @synthesize totalUsersCount=_totalUsersCount;
- (void)setUnfilteredResults:(id)arg1;
@property(nonatomic) long long userCellAccessory; // @synthesize userCellAccessory=_userCellAccessory;
@property(readonly, nonatomic) IGUserActions *userActions; // @synthesize userActions=_userActions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
