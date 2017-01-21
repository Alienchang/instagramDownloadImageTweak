//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "UIAlertViewDelegate.h"

@class IGUserSession, NSArray, NSDictionary, NSString, UIBarButtonItem;

@interface IGMixiAdvancedOptionsViewController : IGGroupedTableViewController <UIAlertViewDelegate>
{
    NSArray *_availablePrivacySettings;
    NSDictionary *_privacySettingsMap;
    long long _originalPrivacySetting;
    UIBarButtonItem *_doneButtonItem;
    id <IGMixiAdvancedOptionsDelegate> _delegate;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)analyticsModule;
@property(nonatomic) __weak id <IGMixiAdvancedOptionsDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithUserSession:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onCancelModal;
- (void)onDoneTapped:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 optionCellForRow:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)unlinkCellForTableView:(id)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

