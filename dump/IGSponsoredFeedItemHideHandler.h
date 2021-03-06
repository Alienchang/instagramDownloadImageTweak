//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGWebViewControllerContinuationDelegate.h"
#import "UITableViewDataSource.h"

@class IGFeedItem, NSString;

@interface IGSponsoredFeedItemHideHandler : NSObject <IGWebViewControllerContinuationDelegate, UITableViewDataSource>
{
    IGFeedItem *_feedItem;
    id <IGFeedItemDirectResponseLoggingProviderDelegate> _loggingDelegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (_Bool)hasReasonAtIndex:(unsigned long long)arg1;
- (void)hideForReason:(id)arg1 withExtraDictionary:(id)arg2;
- (void)hideForReasonAtIndex:(unsigned long long)arg1;
- (id)initWithFeedItem:(id)arg1 loggingDelegate:(id)arg2;
@property(readonly, nonatomic) __weak id <IGFeedItemDirectResponseLoggingProviderDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
- (unsigned long long)numberOfOptions;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sectionHeaderViewForTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)webViewController:(id)arg1 shouldStartLoadWithURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

