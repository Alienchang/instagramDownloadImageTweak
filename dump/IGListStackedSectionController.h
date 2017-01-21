//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGListCollectionContext.h"
#import "IGListDisplayDelegate.h"
#import "IGListScrollDelegate.h"
#import "IGListSectionType.h"

@class NSArray, NSCountedSet, NSOrderedSet, NSString;

@interface IGListStackedSectionController : IGListSectionController <IGListCollectionContext, IGListDisplayDelegate, IGListScrollDelegate, IGListSectionType>
{
    NSOrderedSet *_sectionControllers;
    NSArray *_sectionControllersForItems;
    NSArray *_sectionControllerOffsets;
    long long _flattenedNumberOfItems;
    NSCountedSet *_visibleSectionControllers;
}

- (void).cxx_destruct;
- (id)cellForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1 sectionController:(id)arg2;
@property(readonly, nonatomic) struct CGSize containerSize;
- (void)deleteInSectionController:(id)arg1 atIndexes:(id)arg2;
- (id)dequeueReusableCellFromStoryboardWithIdentifier:(id)arg1 forSectionController:(id)arg2 atIndex:(long long)arg3;
- (id)dequeueReusableCellOfClass:(Class)arg1 forSectionController:(id)arg2 atIndex:(long long)arg3;
- (id)dequeueReusableCellWithNibName:(id)arg1 bundle:(id)arg2 forSectionController:(id)arg3 atIndex:(long long)arg4;
- (id)dequeueReusableSupplementaryViewFromStoryboardOfKind:(id)arg1 withIdentifier:(id)arg2 forSectionController:(id)arg3 atIndex:(long long)arg4;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 forSectionController:(id)arg2 class:(Class)arg3 atIndex:(long long)arg4;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 forSectionController:(id)arg2 nibName:(id)arg3 bundle:(id)arg4 atIndex:(long long)arg5;
- (void)deselectItemAtIndex:(long long)arg1 sectionController:(id)arg2 animated:(_Bool)arg3;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
@property(nonatomic) long long flattenedNumberOfItems; // @synthesize flattenedNumberOfItems=_flattenedNumberOfItems;
- (long long)indexForCell:(id)arg1 sectionController:(id)arg2;
- (id)initWithSectionControllers:(id)arg1;
- (void)insertInSectionController:(id)arg1 atIndexes:(id)arg2;
- (id)itemIndexesForSectionController:(id)arg1 indexes:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDraggingSectionController:(id)arg2 willDecelerate:(_Bool)arg3;
- (void)listAdapter:(id)arg1 didScrollSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willBeginDraggingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (long long)localIndexForSectionController:(id)arg1 index:(long long)arg2;
- (long long)numberOfItems;
- (long long)offsetForSectionController:(id)arg1;
- (void)performBatchAnimated:(_Bool)arg1 updates:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)relativeIndexForSectionController:(id)arg1 fromLocalIndex:(long long)arg2;
- (void)reloadData;
- (void)reloadInSectionController:(id)arg1 atIndexes:(id)arg2;
- (void)reloadSectionController:(id)arg1;
- (void)scrollToSectionController:(id)arg1 atIndex:(long long)arg2 scrollPosition:(unsigned long long)arg3 animated:(_Bool)arg4;
- (id)sectionControllerForObjectIndex:(long long)arg1;
@property(copy, nonatomic) NSArray *sectionControllerOffsets; // @synthesize sectionControllerOffsets=_sectionControllerOffsets;
@property(readonly, nonatomic) NSOrderedSet *sectionControllers; // @synthesize sectionControllers=_sectionControllers;
@property(copy, nonatomic) NSArray *sectionControllersForItems; // @synthesize sectionControllersForItems=_sectionControllersForItems;
- (long long)sectionForSectionController:(id)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)supplementaryViewSource;
- (id)visibleCellsForSectionController:(id)arg1;
@property(readonly, nonatomic) NSCountedSet *visibleSectionControllers; // @synthesize visibleSectionControllers=_visibleSectionControllers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
