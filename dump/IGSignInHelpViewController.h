//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

@class NSString;

@interface IGSignInHelpViewController : IGGroupedTableViewController
{
    NSString *_usernameOrEmail;
    id <IGAPIClient> _networker;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)appearedFromBackground:(id)arg1;
- (void)configureForgotPasswordCell:(id)arg1 forRow:(long long)arg2;
- (void)configureOtherIssuesCell:(id)arg1 forRow:(long long)arg2;
- (void)dealloc;
- (id)initWithNetworker:(id)arg1;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onCancelModal;
@property(retain, nonatomic) NSString *usernameOrEmail; // @synthesize usernameOrEmail=_usernameOrEmail;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 subtitleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

@end

