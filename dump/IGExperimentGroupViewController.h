//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

@class IGExperimentSet, IGExperimentSpec;

@interface IGExperimentGroupViewController : IGGroupedTableViewController
{
    IGExperimentSpec *_experimentSpec;
    IGExperimentSet *_experimentSet;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (id)groupAtIndexPath:(id)arg1;
- (id)initWithExperiment:(id)arg1 experimentSet:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onCloseTapped;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end

