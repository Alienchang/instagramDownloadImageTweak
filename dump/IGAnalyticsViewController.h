//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGMediaRequestDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class IGUserSession, NSArray, NSDictionary, NSString, UIImage, UISearchDisplayController, UITableView;

@interface IGAnalyticsViewController : IGViewController <UITableViewDelegate, UITableViewDataSource, IGMediaRequestDelegate, UISearchDisplayDelegate>
{
    UITableView *_tableView;
    UISearchDisplayController *_searchController;
    NSArray *_logLines;
    NSArray *_filteredLogLines;
    NSDictionary *_displayedEvent;
    UIImage *_solidGreenImage;
    UIImage *_solidGreenImageRounded;
    IGUserSession *_userSession;
    id <IGAnalyticsViewControllerDelegate> _delegate;
    unsigned long long _style;
}

- (void).cxx_destruct;
- (id)_imageWithColor:(id)arg1;
- (id)analyticsModule;
- (void)clearAnalyticsEventsTapped:(id)arg1;
- (void)configureForAnalyticsEventWithDict:(id)arg1 cell:(id)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <IGAnalyticsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)displayNameForLogDict:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (id)filterdPerfEventsForEvents:(id)arg1;
- (id)initWithLogDicts:(id)arg1 style:(unsigned long long)arg2 userSession:(id)arg3;
- (void)mediaRequestDidFailWithError:(id)arg1 forURL:(id)arg2;
- (void)mediaRequestDidLoadMediaWithData:(id)arg1 ofType:(unsigned long long)arg2 forURL:(id)arg3;
- (void)mediaRequestDownloadProgressDidChange:(double)arg1 forURL:(id)arg2;
- (void)onTableViewLongPress:(id)arg1;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

