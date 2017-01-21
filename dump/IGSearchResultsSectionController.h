//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGSearchSectionController.h"

@class IGSearchResultsViewController, NSArray, NSOrderedSet, NSString;

@interface IGSearchResultsSectionController : NSObject <IGSearchSectionController>
{
    IGSearchResultsViewController *_viewController;
    NSOrderedSet *_items;
    NSArray *_sectionControllers;
}

- (void).cxx_destruct;
- (id)analyticsInfoForItemAtIndexPath:(id)arg1;
- (id)init;
- (id)initWithArrayOfItems:(id)arg1 viewController:(id)arg2 userSession:(id)arg3;
- (id)initWithItems:(id)arg1 viewController:(id)arg2 sectionControllers:(id)arg3;
- (id)initWithItems:(id)arg1 viewController:(id)arg2 userSession:(id)arg3;
- (id)itemForIndexPath:(id)arg1;
@property(readonly, nonatomic) NSOrderedSet *items; // @synthesize items=_items;
- (unsigned long long)numberOfRows;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)sectionControllerForObject:(id)arg1;
@property(readonly, nonatomic) NSArray *sectionControllers; // @synthesize sectionControllers=_sectionControllers;
- (id)tableView:(id)arg1 cellForIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectIndexPath:(id)arg2 searchString:(id)arg3;
@property(readonly, nonatomic) __weak IGSearchResultsViewController *viewController; // @synthesize viewController=_viewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

