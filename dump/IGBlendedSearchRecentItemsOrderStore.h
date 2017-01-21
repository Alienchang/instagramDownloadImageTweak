//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionClearableObject.h"

@class IGAutocompleteHashtagsStore, IGAutocompletePlacesStore, IGAutocompleteUsersStore, IGUserDefaults, NSArray, NSMutableOrderedSet, NSString;

@interface IGBlendedSearchRecentItemsOrderStore : NSObject <IGUserSessionClearableObject>
{
    _Bool _needsToBeArchived;
    NSMutableOrderedSet *_mutableRecentItems;
    NSString *_userSessionPK;
    IGUserDefaults *_sessionUserDefaults;
    IGAutocompleteUsersStore *_autocompleteUsersStore;
    IGAutocompletePlacesStore *_autocompletePlacesStore;
    IGAutocompleteHashtagsStore *_autocompleteHashtagsStore;
    NSArray *_sectionControllers;
}

+ (void)clearForUserPK:(id)arg1;
- (void).cxx_destruct;
- (void)addHashtag:(id)arg1 addToRecent:(_Bool)arg2;
- (void)addHashtagsFromText:(id)arg1 addToRecent:(_Bool)arg2;
- (void)addPlaceToRecent:(id)arg1;
- (void)addRecentItem:(id)arg1;
- (void)addUser:(id)arg1 addToRecent:(_Bool)arg2;
- (void)archiveIfNeeded;
@property(readonly, nonatomic) IGAutocompleteHashtagsStore *autocompleteHashtagsStore; // @synthesize autocompleteHashtagsStore=_autocompleteHashtagsStore;
@property(readonly, nonatomic) IGAutocompletePlacesStore *autocompletePlacesStore; // @synthesize autocompletePlacesStore=_autocompletePlacesStore;
@property(readonly, nonatomic) IGAutocompleteUsersStore *autocompleteUsersStore; // @synthesize autocompleteUsersStore=_autocompleteUsersStore;
- (void)clearHistory;
- (void)dealloc;
- (void)didEnterBackground:(id)arg1;
- (id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 autocompleteUsersStore:(id)arg3 autocompletePlacesStore:(id)arg4 autocompleteHashtagsStore:(id)arg5;
@property(readonly, nonatomic) NSMutableOrderedSet *mutableRecentItems; // @synthesize mutableRecentItems=_mutableRecentItems;
@property(nonatomic) _Bool needsToBeArchived; // @synthesize needsToBeArchived=_needsToBeArchived;
- (void)onFriendStatusReceived:(id)arg1;
- (id)recentItems;
- (id)restoreRecentItems;
- (void)saveRecentItems:(id)arg1;
- (id)sectionControllerForObject:(id)arg1;
- (id)sectionControllerForObjectType:(id)arg1;
@property(readonly, nonatomic) NSArray *sectionControllers; // @synthesize sectionControllers=_sectionControllers;
@property(retain, nonatomic) IGUserDefaults *sessionUserDefaults; // @synthesize sessionUserDefaults=_sessionUserDefaults;
@property(retain, nonatomic) NSString *userSessionPK; // @synthesize userSessionPK=_userSessionPK;
- (void)willLogOut;
- (void)willSwitchUsers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
