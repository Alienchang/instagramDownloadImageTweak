//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectInboxThreadSectionControllerSelectDelegate.h"

@class IGDirectPendingInboxAnalyticsLogger, IGDirectPendingInboxService, IGListAdapter, IGViewController, NSMutableSet, NSString, UIBarButtonItem, UIButton, UIView;

@interface IGDirectInboxCellSelectCoordinator : NSObject <IGDirectInboxThreadSectionControllerSelectDelegate>
{
    UIView *_actionBar;
    IGViewController *_viewController;
    IGListAdapter *_listAdapter;
    IGDirectPendingInboxAnalyticsLogger *_analyticsLogger;
    IGDirectPendingInboxService *_service;
    UIBarButtonItem *_editButton;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_spinnerButton;
    UIButton *_declineButton;
    UIButton *_allowButton;
    UIView *_buttonSeparator;
    NSMutableSet *_selectedThreadIds;
    long long _state;
    long long _buttonState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *actionBar; // @synthesize actionBar=_actionBar;
- (id)alertMessageForAllow:(_Bool)arg1 count:(unsigned long long)arg2 username:(id)arg3;
- (id)alertTitleForAllow:(_Bool)arg1 count:(unsigned long long)arg2;
@property(readonly, nonatomic) UIButton *allowButton; // @synthesize allowButton=_allowButton;
- (void)allowTapped:(id)arg1;
@property(readonly, nonatomic) __weak IGDirectPendingInboxAnalyticsLogger *analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(readonly, nonatomic) UIView *buttonSeparator; // @synthesize buttonSeparator=_buttonSeparator;
@property(nonatomic) long long buttonState; // @synthesize buttonState=_buttonState;
@property(readonly, nonatomic) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
- (id)computeSelectedThreadIdsFromAllPendingThreadIds:(id)arg1;
- (id)createButtonWithNormalStateColor:(id)arg1 highlightStateColor:(id)arg2 action:(SEL)arg3;
@property(readonly, nonatomic) UIButton *declineButton; // @synthesize declineButton=_declineButton;
- (void)declineTapped:(id)arg1;
- (void)disableButtons;
@property(readonly, nonatomic) UIBarButtonItem *editButton; // @synthesize editButton=_editButton;
- (void)enableButtons;
- (_Bool)hasSelected:(id)arg1;
- (void)inboxThreadSectionController:(id)arg1 didDeselectViewModel:(id)arg2;
- (void)inboxThreadSectionController:(id)arg1 didSelectViewModel:(id)arg2;
- (id)initWithViewController:(id)arg1 listAdapter:(id)arg2 analyticsLogger:(id)arg3 service:(id)arg4;
- (_Bool)isEditing;
- (void)layoutActionBar;
@property(readonly, nonatomic) __weak IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
- (id)parseThreadIdsFromItems:(id)arg1;
- (void)presentAlertForAllow:(_Bool)arg1;
@property(retain, nonatomic) NSMutableSet *selectedThreadIds; // @synthesize selectedThreadIds=_selectedThreadIds;
@property(readonly, nonatomic) IGDirectPendingInboxService *service; // @synthesize service=_service;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)setupActionBar;
@property(readonly, nonatomic) UIBarButtonItem *spinnerButton; // @synthesize spinnerButton=_spinnerButton;
- (void)toggleEditMode;
- (void)updateButtonState;
- (void)updateButtonsTitle;
- (id)usernameForThreadWithId:(id)arg1;
@property(readonly, nonatomic) __weak IGViewController *viewController; // @synthesize viewController=_viewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
