//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UITableView;

@interface IGBrandLiftResultsViewController : IGViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_questions;
    UITableView *_tableView;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)dealloc;
- (void)dismiss;
- (id)initWithQuestions:(id)arg1;
- (id)labelForFooterInSection:(long long)arg1;
- (id)labelForHeaderInSection:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)prefersTabBarHidden;
@property(retain, nonatomic) NSArray *questions; // @synthesize questions=_questions;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
