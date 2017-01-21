//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGBlendedSearchRecentSectionController.h"

@class IGAutocompleteHashtagsStore, NSString;

@interface IGBlendedSearchRecentHashtagController : NSObject <IGBlendedSearchRecentSectionController>
{
    IGAutocompleteHashtagsStore *_autocompleteHashtagsStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGAutocompleteHashtagsStore *autocompleteHashtagsStore; // @synthesize autocompleteHashtagsStore=_autocompleteHashtagsStore;
- (_Bool)canHandleItem:(id)arg1;
- (id)identifierForItem:(id)arg1;
- (id)initWithAutocompleteHashtagsStore:(id)arg1;
- (id)itemType;
- (id)recentHashtags;
- (id)restoreItemUsingIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
