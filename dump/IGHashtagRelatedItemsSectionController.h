//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGHashtagRelatedItemsCollectionViewCellDelegate.h"
#import "IGListSectionType.h"

@class IGNavigationController, IGRelatedItemsLogger, IGUserSession, NSArray, NSString;

@interface IGHashtagRelatedItemsSectionController : IGListSectionController <IGHashtagRelatedItemsCollectionViewCellDelegate, IGListSectionType>
{
    NSArray *_relatedItems;
    IGRelatedItemsLogger *_relatedItemsLogger;
    IGNavigationController *_navigationController;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)cellForItemAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)displayDelegate;
- (id)initWithRelatedItems:(id)arg1 navigationController:(id)arg2 userSession:(id)arg3 analyticsModule:(id)arg4;
@property(readonly, nonatomic) IGNavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (long long)numberOfItems;
@property(readonly, copy, nonatomic) NSArray *relatedItems; // @synthesize relatedItems=_relatedItems;
- (void)relatedItemsCollectionViewCell:(id)arg1 didTapItem:(id)arg2 atIndexPath:(id)arg3;
- (void)relatedItemsCollectionViewCell:(id)arg1 willDisplayItem:(id)arg2 atIndexPath:(id)arg3;
@property(readonly, nonatomic) IGRelatedItemsLogger *relatedItemsLogger; // @synthesize relatedItemsLogger=_relatedItemsLogger;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (id)workingRangeDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
