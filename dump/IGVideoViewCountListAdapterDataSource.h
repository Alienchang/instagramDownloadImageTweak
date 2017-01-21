//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListAdapterDataSource.h"

@class IGFeedItem, IGFollowListLogger, IGNavSearchBar, IGNavSearchBarItemConfiguration, IGUserListNetworkDataSource, IGUserSession, NSString, UIView;

@interface IGVideoViewCountListAdapterDataSource : NSObject <IGListAdapterDataSource>
{
    unsigned long long _numTopUnits;
    IGUserSession *_userSession;
    IGUserListNetworkDataSource *_networkDataSource;
    IGFeedItem *_feedItem;
    IGFollowListLogger *_followListLogger;
    IGNavSearchBar *_searchBar;
    IGNavSearchBarItemConfiguration *_searchBarItemConfig;
    UIView *_emptyStateView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *emptyStateView; // @synthesize emptyStateView=_emptyStateView;
- (id)emptyViewForListAdapter:(id)arg1;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(readonly, nonatomic) IGFollowListLogger *followListLogger; // @synthesize followListLogger=_followListLogger;
- (id)initWithUserSession:(id)arg1 networkDataSource:(id)arg2 feedItem:(id)arg3 followListLogger:(id)arg4 searchBar:(id)arg5 emptyStateView:(id)arg6;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
@property(readonly, nonatomic) IGUserListNetworkDataSource *networkDataSource; // @synthesize networkDataSource=_networkDataSource;
@property(readonly, nonatomic) unsigned long long numTopUnits; // @synthesize numTopUnits=_numTopUnits;
- (id)objectsForListAdapter:(id)arg1;
@property(readonly, nonatomic) IGNavSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) IGNavSearchBarItemConfiguration *searchBarItemConfig; // @synthesize searchBarItemConfig=_searchBarItemConfig;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

