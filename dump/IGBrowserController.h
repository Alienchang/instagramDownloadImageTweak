//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGWebViewControllerBrowsingDelegate.h"

@class IGBrowserLoggingEvent, IGComposedWebViewLogger, IGComposedWebViewSharingLogger, IGDirectResponseInfo, IGFeedItem, IGFeedItemTracker;

@interface IGBrowserController : NSObject <IGWebViewControllerBrowsingDelegate>
{
    IGBrowserLoggingEvent *_browserLoggingEvent;
    id <IGFeedItemDirectResponseLoggingProviderDelegate> _loggingDelegate;
    IGFeedItem *_feedItem;
    IGFeedItemTracker *_feedItemTracker;
    IGDirectResponseInfo *_directResponseInfo;
    IGComposedWebViewLogger *_webViewLogger;
    IGComposedWebViewSharingLogger *_sharingLogger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGBrowserLoggingEvent *browserLoggingEvent; // @synthesize browserLoggingEvent=_browserLoggingEvent;
@property(retain, nonatomic) IGDirectResponseInfo *directResponseInfo; // @synthesize directResponseInfo=_directResponseInfo;
@property(retain, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(retain, nonatomic) IGFeedItemTracker *feedItemTracker; // @synthesize feedItemTracker=_feedItemTracker;
- (id)initWithLoggingDelegate:(id)arg1 feedItem:(id)arg2 feedItemTracker:(id)arg3;
@property(readonly, nonatomic) __weak id <IGFeedItemDirectResponseLoggingProviderDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
- (void)openWebViewForURL:(id)arg1 directResponseInfo:(id)arg2 viewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) IGComposedWebViewSharingLogger *sharingLogger; // @synthesize sharingLogger=_sharingLogger;
@property(retain, nonatomic) IGComposedWebViewLogger *webViewLogger; // @synthesize webViewLogger=_webViewLogger;
- (void)webViewControllerDidBeginBrowsing:(id)arg1;
- (void)webViewControllerDidEndBrowsing:(id)arg1;
- (void)webViewControllerDidLoadFirstPageDOM:(id)arg1;
- (void)webViewControllerDidReceiveUserFirstScroll:(id)arg1;
- (void)webViewControllerDidReceiveUserInteraction:(id)arg1;
- (id)webViewControllerForURL:(id)arg1;

@end

