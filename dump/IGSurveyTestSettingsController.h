//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

@class IGUserSession;

@interface IGSurveyTestSettingsController : IGGroupedTableViewController
{
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (id)initWithUserSession:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)showAlertViewWithTitle:(id)arg1 defaultText:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidLoad;

@end
