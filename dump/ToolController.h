//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSObject<ToolControllerDelegate>, NSString, ToolControllerConfig, UICollectionView;

@interface ToolController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSArray *_tools;
    ToolControllerConfig *_config;
    NSObject<ToolControllerDelegate> *_delegate;
    UICollectionView *_collectionView;
    long long _currentToolIndex;
}

- (void).cxx_destruct;
- (void)_updateLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(nonatomic) ToolControllerConfig *config; // @synthesize config=_config;
@property(nonatomic) long long currentToolIndex; // @synthesize currentToolIndex=_currentToolIndex;
@property(nonatomic) __weak NSObject<ToolControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (double)height;
- (void)loadView;
@property(retain, nonatomic) NSArray *tools; // @synthesize tools=_tools;
- (id)toolCellWithToolTile:(id)arg1;
- (void)updateState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

