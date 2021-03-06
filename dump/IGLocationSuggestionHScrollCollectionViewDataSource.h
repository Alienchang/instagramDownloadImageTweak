//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UICollectionViewDataSource.h"

@class NSArray, NSDictionary, NSString;

@interface IGLocationSuggestionHScrollCollectionViewDataSource : NSObject <UICollectionViewDataSource>
{
    NSArray *_locations;
    long long _style;
}

- (void).cxx_destruct;
- (unsigned long long)cellSizeFromStyle:(long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configureLocationSearchButtonCell:(id)arg1;
- (void)configureLocationSuggestionCell:(id)arg1 indexPath:(id)arg2;
- (id)locationForIndexPath:(id)arg1;
@property(copy, nonatomic) NSArray *locations; // @synthesize locations=_locations;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
@property(readonly, nonatomic) NSDictionary *registeredCellClasses;
@property(nonatomic) long long style; // @synthesize style=_style;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

