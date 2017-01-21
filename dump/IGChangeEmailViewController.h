//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "IGTextFieldDelegate.h"

@class IGTextField, NSString, UIBarButtonItem;

@interface IGChangeEmailViewController : IGGroupedTableViewController <IGTextFieldDelegate>
{
    id <IGChangeEmailViewControllerDelegate> _delegate;
    IGTextField *_changeEmailField;
    NSString *_email;
    long long _source;
    UIBarButtonItem *_doneButtonItem;
    id <IGAPIClient> _networker;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)backButtonTapped;
@property(retain, nonatomic) IGTextField *changeEmailField; // @synthesize changeEmailField=_changeEmailField;
- (void)dealloc;
@property(nonatomic) __weak id <IGChangeEmailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIBarButtonItem *doneButtonItem; // @synthesize doneButtonItem=_doneButtonItem;
- (void)doneButtonTapped;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
- (id)initWithEmail:(id)arg1 fromSource:(long long)arg2 networker:(id)arg3;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)prefersTabBarHidden;
@property(nonatomic) long long source; // @synthesize source=_source;
- (void)setupNavigationItems;
- (_Bool)showsCancelButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
