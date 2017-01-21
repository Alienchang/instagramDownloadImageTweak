//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGDirectRecipientSectionControllerSelectDelegate.h"
#import "IGDirectSearchBarDelegate.h"
#import "IGDirectThreadCreationViewControllerDelegate.h"
#import "IGDirectThreadInfoViewControllerDelegate.h"
#import "IGListAdapterDataSource.h"
#import "UIScrollViewDelegate.h"

@class IGDirectSearchBar, IGDirectStoryComposerLogger, IGDirectThreadService, IGListAdapter, IGListCollectionView, IGMediaMetadata, IGReelCreationModel, IGUserSession, NSMutableOrderedSet, NSString, UIButton, UIColor;

@interface IGDirectStoryRecipientListViewController : IGViewController <IGListAdapterDataSource, IGDirectSearchBarDelegate, IGDirectRecipientSectionControllerSelectDelegate, UIScrollViewDelegate, IGDirectThreadInfoViewControllerDelegate, IGDirectThreadCreationViewControllerDelegate>
{
    _Bool _storyIsSelected;
    _Bool _recipientListIsFilteredByServer;
    id <IGDirectStoryRecipientListViewControllerDelegate> _delegate;
    id <IGQuickCamOutputAsset> _asset;
    IGDirectStoryComposerLogger *_logger;
    IGReelCreationModel *_storyModel;
    IGMediaMetadata *_metaData;
    IGUserSession *_userSession;
    UIButton *_sendButton;
    UIColor *_sendButtonGradientStartColor;
    IGDirectSearchBar *_searchBar;
    IGDirectThreadService *_threadService;
    NSMutableOrderedSet *_searchRecipients;
    NSMutableOrderedSet *_defaultRecipients;
    NSMutableOrderedSet *_selectedRecipients;
    NSMutableOrderedSet *_createdRecipients;
    long long _state;
    IGListCollectionView *_collectionView;
    IGListAdapter *_listAdapter;
}

+ (id)gradientImageWithStartingColor:(id)arg1 endingColor:(id)arg2 size:(struct CGSize)arg3;
- (void).cxx_destruct;
- (id)analyticsModule;
@property(retain, nonatomic) id <IGQuickCamOutputAsset> asset; // @synthesize asset=_asset;
- (void)backButtonTapped;
- (id)buttonWithTitle:(id)arg1;
@property(retain, nonatomic) IGListCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSMutableOrderedSet *createdRecipients; // @synthesize createdRecipients=_createdRecipients;
- (void)dealloc;
- (id)defaultList;
@property(retain, nonatomic) NSMutableOrderedSet *defaultRecipients; // @synthesize defaultRecipients=_defaultRecipients;
@property(nonatomic) __weak id <IGDirectStoryRecipientListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapCancelButtonFromThreadInfoVC;
- (void)directSearchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)initWithUserSession:(id)arg1 storyModel:(id)arg2 loggingContext:(id)arg3;
@property(retain, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
@property(readonly, nonatomic) IGDirectStoryComposerLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) IGMediaMetadata *metaData; // @synthesize metaData=_metaData;
- (void)newGroupButtonTapped;
- (id)objectsForListAdapter:(id)arg1;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersTabBarHidden;
@property(nonatomic) _Bool recipientListIsFilteredByServer; // @synthesize recipientListIsFilteredByServer=_recipientListIsFilteredByServer;
- (void)recipientSectionController:(id)arg1 didDeselectViewModel:(id)arg2;
- (void)recipientSectionController:(id)arg1 didLongPressViewModel:(id)arg2;
- (void)recipientSectionController:(id)arg1 didSelectViewModel:(id)arg2;
- (_Bool)recipientSectionController:(id)arg1 shouldLongPressViewModel:(id)arg2;
- (void)reloadDefaultStateWithUpdatedThreadId:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(retain, nonatomic) IGDirectSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) NSMutableOrderedSet *searchRecipients; // @synthesize searchRecipients=_searchRecipients;
- (void)searchRecipientsWithText:(id)arg1;
- (id)searchRequestList;
- (id)searchResultList;
- (id)sectionHeaderSubtitleLabelItemConfig;
- (id)sectionHeaderTitleLabelItemConfig;
@property(retain, nonatomic) NSMutableOrderedSet *selectedRecipients; // @synthesize selectedRecipients=_selectedRecipients;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIColor *sendButtonGradientStartColor; // @synthesize sendButtonGradientStartColor=_sendButtonGradientStartColor;
- (void)sendButtonTapped;
- (id)sendSeparatelyString;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool storyIsSelected; // @synthesize storyIsSelected=_storyIsSelected;
@property(retain, nonatomic) IGDirectThreadService *threadService; // @synthesize threadService=_threadService;
- (void)setupCollectionViewAndListAdapter;
- (void)setupNavigationBar;
- (void)setupSearchBar;
- (void)setupSendButton;
@property(readonly, nonatomic) IGReelCreationModel *storyModel; // @synthesize storyModel=_storyModel;
- (void)threadCreationViewController:(id)arg1 didCreateThread:(id)arg2;
- (void)threadInfoViewController:(id)arg1 didAddUsersToThreadWithId:(id)arg2;
- (void)threadInfoViewController:(id)arg1 didLeaveThreadWithId:(id)arg2;
- (void)threadInfoViewController:(id)arg1 didMuteThreadWithId:(id)arg2 muted:(_Bool)arg3;
- (void)threadInfoViewController:(id)arg1 didRenameThreadWithId:(id)arg2 toName:(id)arg3;
- (void)updateRecipientList;
- (void)updateSendButtonBackgroundImageIfNeeded;
- (void)updateSendButtonState;
- (void)uploadMedia;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)warningTextLabelItemConfig;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
