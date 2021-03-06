//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUnifiedWebViewControllerSharingLogger.h"

@class IGFeedItem, IGFeedItemTracker;

@interface IGUnifiedWebViewControllerStandardSharingLogger : NSObject <IGUnifiedWebViewControllerSharingLogger>
{
    IGFeedItem *_feedItem;
    IGFeedItemTracker *_tracker;
}

- (void).cxx_destruct;
- (id)concatenatedURLsForItems:(id)arg1;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (id)initWithFeedItem:(id)arg1 feedItemTracker:(id)arg2;
@property(readonly, nonatomic) IGFeedItemTracker *tracker; // @synthesize tracker=_tracker;
- (void)webViewController:(id)arg1 displayedShareActionsForItems:(id)arg2;
- (void)webViewController:(id)arg1 forItems:(id)arg2 activityType:(id)arg3 wasCompleted:(_Bool)arg4 returnedItems:(id)arg5 activityError:(id)arg6;

@end

