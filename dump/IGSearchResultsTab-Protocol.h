//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGTabControlSegment.h"
#import "NSObject.h"

@class IGAnalyticsSearchRankInfo, IGSearchResultsViewController, IGUserSession, NSArray, NSString;

@protocol IGSearchResultsTab <NSObject, IGTabControlSegment>
- (void)addLoadedNotifications;
- (void)addLocationTracker;
- (NSArray *)allListItemsForSearchText:(NSString *)arg1;
- (NSArray *)allSearchResults;
@property(readonly, nonatomic) _Bool canShowLocationCell;
@property(readonly, nonatomic) _Bool canShowPreviewMedia;
@property(nonatomic) _Bool enableFrequentItems;
@property(readonly, nonatomic) _Bool enableNavState;
- (void)filterBySearchString:(NSString *)arg1 searchInfo:(IGAnalyticsSearchRankInfo *)arg2 loadMore:(_Bool)arg3;
- (long long)filterResultState:(long long)arg1;
- (NSArray *)filteredRecentItems;
- (void)frequentItemsLoaded;
- (_Bool)hasMore;
- (NSArray *)idResultsList;
- (_Bool)isLocalItem:(id <IGSearchResultsLoggableItem>)arg1;
@property(readonly, copy, nonatomic) NSString *moduleName;
@property(readonly, copy, nonatomic) NSString *noResultsMessage;
- (_Bool)noSearchQuery:(NSString *)arg1;
- (unsigned long long)numberOfLocalResults;
- (void)onSearchTextDidChange:(NSString *)arg1;
@property(readonly, copy, nonatomic) NSString *queryType;
- (NSString *)searchBarPlaceholder;
@property(readonly, copy, nonatomic) NSString *searchType;
- (_Bool)shouldShowFrequentSection;
@property(readonly, nonatomic) _Bool shouldShowSectionHeader;
- (NSArray *)tableSectionsWithViewController:(IGSearchResultsViewController *)arg1;
@property(readonly, copy, nonatomic) NSString *tapCancelEventName;
@property(readonly, copy, nonatomic) NSString *tapEventName;
@property(readonly, nonatomic) IGUserSession *userSession;
@property(readonly, copy, nonatomic) NSString *viewSubType;
@end

