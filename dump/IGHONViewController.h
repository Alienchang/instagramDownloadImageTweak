//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGHONFeedNetworkSourceDelegate.h"
#import "IGHONFullSizeMessageViewDelegate.h"
#import "IGHONHeaderDismissViewDelegate.h"
#import "IGHONSectionControllerDelegate.h"
#import "IGHONSelectionViewDelegate.h"
#import "IGListAdapterDataSource.h"
#import "IGTabControlDelegate.h"

@class IGAlertBar, IGHONFeedNetworkSource, IGHONFullSizeMessageView, IGHONHeaderDismissView, IGHONSelectionPromptView, IGListAdapter, IGListCollectionView, IGRankedTitleView, IGTabControl, IGUserSession, NSArray, NSString, UISegmentedControl;

@interface IGHONViewController : IGViewController <IGHONFeedNetworkSourceDelegate, IGHONFullSizeMessageViewDelegate, IGHONHeaderDismissViewDelegate, IGHONSectionControllerDelegate, IGHONSelectionViewDelegate, IGListAdapterDataSource, IGTabControlDelegate>
{
    IGUserSession *_userSession;
    IGHONFeedNetworkSource *_networkSource;
    IGListCollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    NSArray *_items;
    IGHONHeaderDismissView *_headerDismissView;
    IGHONSelectionPromptView *_selectionPromptView;
    UISegmentedControl *_segmentedControl;
    IGHONFullSizeMessageView *_errorView;
    IGAlertBar *_alertBar;
    IGRankedTitleView *_rankedTitleView;
    long long _totalItems;
    IGTabControl *_tabControl;
    unsigned long long _currentTappedIndex;
    unsigned long long _currentSection;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGAlertBar *alertBar; // @synthesize alertBar=_alertBar;
- (id)analyticsModule;
@property(readonly, nonatomic) IGListCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)configureTitleTextAttributes;
@property(nonatomic) unsigned long long currentSection; // @synthesize currentSection=_currentSection;
- (id)currentSectionController;
@property(nonatomic) unsigned long long currentTappedIndex; // @synthesize currentTappedIndex=_currentTappedIndex;
- (id)emptyViewForListAdapter:(id)arg1;
@property(readonly, nonatomic) IGHONFullSizeMessageView *errorView; // @synthesize errorView=_errorView;
- (id)extraDictionaryForFeedItem:(id)arg1;
- (void)fullSizeViewDidTapButton:(id)arg1;
@property(readonly, nonatomic) IGHONHeaderDismissView *headerDismissView; // @synthesize headerDismissView=_headerDismissView;
- (void)headerDismissViewDidDismiss:(id)arg1;
- (id)initWithUserSession:(id)arg1;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
@property(readonly, nonatomic) IGHONFeedNetworkSource *networkSource; // @synthesize networkSource=_networkSource;
- (void)networkSource:(id)arg1 bundles:(id)arg2;
- (void)networkSource:(id)arg1 failedWithError:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)presentFailedToProgressError;
- (void)presentFullSizeMessageView:(id)arg1;
- (void)progressToNextItemWithSelectionIndex:(long long)arg1;
@property(retain, nonatomic) IGRankedTitleView *rankedTitleView; // @synthesize rankedTitleView=_rankedTitleView;
- (void)reloadTabs;
- (void)sectionController:(id)arg1 willScrollToItemWithIndex:(unsigned long long *)arg2;
@property(readonly, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(readonly, nonatomic) IGHONSelectionPromptView *selectionPromptView; // @synthesize selectionPromptView=_selectionPromptView;
- (void)selectionView:(id)arg1 didSelectIndex:(long long)arg2;
- (void)selectionViewDidSelectSkip:(id)arg1;
@property(retain, nonatomic) IGTabControl *tabControl; // @synthesize tabControl=_tabControl;
@property(nonatomic) long long totalItems; // @synthesize totalItems=_totalItems;
- (void)setupCollectionViewAndAdapter;
- (void)setupNavigationBarView;
- (void)setupSelectionPromptView;
- (void)setupTabControl;
- (void)tabControl:(id)arg1 tappedSegmentIndex:(unsigned long long)arg2;
- (void)updatePromptForCurrentItem:(long long)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

