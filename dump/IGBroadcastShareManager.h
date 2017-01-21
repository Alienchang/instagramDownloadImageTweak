//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGAnalyticsModule.h"
#import "IGAutocompleteControllerDelegate.h"
#import "IGCaptionCellDelegate.h"
#import "IGShareListManagerDelegate.h"
#import "IGShareManager.h"
#import "IGSidecarShareFullPreviewDelegate.h"
#import "IGSidecarSharePreviewDelegate.h"
#import "IGUserInTaggingViewControllerDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class IGAutocompleteController, IGBroadcastShareLocationManager, IGCameraNavigationController, IGCollectionView, IGComposition, IGMediaMetadata, IGShareListManager, IGShareSettingsTooltipManager, IGShareSocialShareManager, IGSidecarShareFullPreviewViewController, IGSidecarSharePreviewViewController, IGUserSession, NSString, UIScrollView, UIView, UIViewController;

@interface IGBroadcastShareManager : IGViewController <IGAutocompleteControllerDelegate, IGCaptionCellDelegate, IGShareListManagerDelegate, IGSidecarShareFullPreviewDelegate, IGSidecarSharePreviewDelegate, IGUserInTaggingViewControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, IGAnalyticsModule, IGShareManager>
{
    _Bool _isStickyEnabled;
    _Bool _qeVideoCopyright;
    NSString *_shareString;
    UIViewController *_delegate;
    id <IGBroadcastShareManagerDelegate> _captionDelegate;
    IGCameraNavigationController *_navController;
    IGUserSession *_userSession;
    IGComposition *_composition;
    IGSidecarSharePreviewViewController *_sidecarPreviewController;
    IGSidecarShareFullPreviewViewController *_sidecarCollectionController;
    IGMediaMetadata *_editingTagsMediaMetadata;
    IGMediaMetadata *_mediaMetadata;
    IGShareListManager *_shareListManager;
    IGCollectionView *_collectionView;
    UIView *_headerView;
    UIView *_headerBackgroundView;
    double _copyrightWarningCellHeight;
    NSString *_searchSessionId;
    IGBroadcastShareLocationManager *_locationManager;
    IGShareSocialShareManager *_socialShareManager;
    UIView *_overlayView;
    UIView *_sidecarPreviewOverlayView;
    IGAutocompleteController *_autocompleteController;
    IGShareSettingsTooltipManager *_shareTooltipManager;
}

- (void).cxx_destruct;
- (void)addOverlayViewHiddenWithRect:(struct CGRect)arg1;
- (id)analyticsMetadata;
- (id)analyticsModule;
@property(retain, nonatomic) IGAutocompleteController *autocompleteController; // @synthesize autocompleteController=_autocompleteController;
- (void)autocompleteController:(id)arg1 atIndex:(long long)arg2 isUserSearch:(_Bool)arg3 allResults:(id)arg4;
- (void)autocompleteController:(id)arg1 didReloadTableView:(id)arg2;
- (void)autocompleteController:(id)arg1 willHideTableView:(id)arg2;
- (void)autocompleteController:(id)arg1 willShowTableView:(id)arg2;
- (void)autocompleteControllerDidAutocomplete:(id)arg1;
- (void)captionCellEditButtonTapped;
- (_Bool)captionCellMediaOverlayViewTapEnabled;
- (void)captionCellMediaOverlayViewTapped;
@property(nonatomic) __weak id <IGBroadcastShareManagerDelegate> captionDelegate; // @synthesize captionDelegate=_captionDelegate;
- (_Bool)captionTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)captionTextViewDidBeginEditing:(id)arg1;
- (void)captionTextViewDidChange:(id)arg1;
- (void)captionTextViewDidEndEditing:(id)arg1 text:(id)arg2;
- (void)captionTextViewWillBeginEditing:(id)arg1;
@property(retain, nonatomic) IGCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
@property(retain, nonatomic) IGComposition *composition; // @synthesize composition=_composition;
- (void)configureCaptionCell:(id)arg1;
- (void)configureCopyrightCell:(id)arg1;
- (void)configureLocationCell:(id)arg1;
- (void)configurePeopleCell:(id)arg1;
- (void)configureWithHeaderView:(id)arg1;
@property(nonatomic) double copyrightWarningCellHeight; // @synthesize copyrightWarningCellHeight=_copyrightWarningCellHeight;
- (void)dealloc;
@property(nonatomic) __weak UIViewController *delegate; // @synthesize delegate=_delegate;
- (void)dismissSidecarCollectionView;
@property(retain, nonatomic) IGMediaMetadata *editingTagsMediaMetadata; // @synthesize editingTagsMediaMetadata=_editingTagsMediaMetadata;
- (_Bool)enableNavState;
- (void)enterCaptionMode;
- (void)exitCaptionMode;
@property(retain, nonatomic) UIView *headerBackgroundView; // @synthesize headerBackgroundView=_headerBackgroundView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (id)initWithComposition:(id)arg1 shareListManager:(id)arg2 userSession:(id)arg3;
- (id)initWithMediaMetadata:(id)arg1 shareListManager:(id)arg2 userSession:(id)arg3;
@property(readonly, nonatomic) _Bool isReadyToShare;
@property(nonatomic) _Bool isStickyEnabled; // @synthesize isStickyEnabled=_isStickyEnabled;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)layoutAutocompleteTableForKeyboardHeight:(double)arg1;
@property(retain, nonatomic) IGBroadcastShareLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) IGMediaMetadata *mediaMetadata; // @synthesize mediaMetadata=_mediaMetadata;
@property(nonatomic) __weak IGCameraNavigationController *navController; // @synthesize navController=_navController;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onOverlayViewTapped:(id)arg1;
- (void)onPeopleCellTapped;
- (void)openAdvancedSettings;
- (void)openTagPeopleViewControllerForMetadata:(id)arg1;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) _Bool qeVideoCopyright; // @synthesize qeVideoCopyright=_qeVideoCopyright;
- (void)removeOverlayView;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(retain, nonatomic) NSString *searchSessionId; // @synthesize searchSessionId=_searchSessionId;
@property(retain, nonatomic) IGShareListManager *shareListManager; // @synthesize shareListManager=_shareListManager;
@property(copy, nonatomic) NSString *shareString; // @synthesize shareString=_shareString;
@property(retain, nonatomic) IGShareSettingsTooltipManager *shareTooltipManager; // @synthesize shareTooltipManager=_shareTooltipManager;
@property(retain, nonatomic) IGSidecarShareFullPreviewViewController *sidecarCollectionController; // @synthesize sidecarCollectionController=_sidecarCollectionController;
@property(retain, nonatomic) IGSidecarSharePreviewViewController *sidecarPreviewController; // @synthesize sidecarPreviewController=_sidecarPreviewController;
@property(retain, nonatomic) UIView *sidecarPreviewOverlayView; // @synthesize sidecarPreviewOverlayView=_sidecarPreviewOverlayView;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)shareListNeedsFullReload;
- (void)shareListNeedsReloadForServiceAtIndex:(long long)arg1;
- (void)showShareNUXIfNeeded;
- (_Bool)sidecarEnabled;
- (void)sidecarShareFullPreviewController:(id)arg1 wantsToTagMediaWithMetadata:(id)arg2;
- (void)sidecarSharePreviewController:(id)arg1 didTapCellWithMetadata:(id)arg2 atIndex:(long long)arg3;
- (void)sidecarSharePreviewController:(id)arg1 didTapTagPeopleOnMediaMetadata:(id)arg2;
@property(readonly, nonatomic) IGShareSocialShareManager *socialShareManager; // @synthesize socialShareManager=_socialShareManager;
- (void)userInTaggingViewController:(id)arg1 didFinish:(_Bool)arg2;
- (id)viewControllerForShareConfiguration;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
