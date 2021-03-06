//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedNetworkSourceDelegate.h"
#import "IGInsightsComponentAdapter.h"
#import "IGInsightsComponentViewControllerNavigationDelegate.h"

@class IGFeedNetworkSource, IGInsightsCollectionView, IGInsightsCollectionViewController, IGInsightsLoggingHelper, IGInsightsQuery, IGUserSession, NSArray, NSString;

@interface IGInsightsCollectionViewComponentAdapter : NSObject <IGInsightsComponentViewControllerNavigationDelegate, IGFeedNetworkSourceDelegate, IGInsightsComponentAdapter>
{
    id <IGInsightsComponentNavigationDelegate> navigationDelegate;
    IGUserSession *_userSession;
    NSString *_header;
    NSString *_buttonText;
    IGInsightsQuery *_buttonQuery;
    NSArray *_mediaIDs;
    IGInsightsCollectionView *_componentView;
    IGInsightsCollectionViewController *_insightsCollectionViewController;
    NSArray *_mediaBundles;
    IGFeedNetworkSource *_feedNetworkSource;
    IGInsightsLoggingHelper *_loggingHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGInsightsQuery *buttonQuery; // @synthesize buttonQuery=_buttonQuery;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(retain, nonatomic) IGInsightsCollectionView *componentView; // @synthesize componentView=_componentView;
- (void)didSelectNavigateInComponentViewController:(id)arg1 toViewController:(id)arg2 animated:(_Bool)arg3;
@property(retain, nonatomic) IGFeedNetworkSource *feedNetworkSource; // @synthesize feedNetworkSource=_feedNetworkSource;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(long long)arg3;
- (void)fetchFeedItemsFromMediaIDs:(id)arg1;
@property(copy, nonatomic) NSString *header; // @synthesize header=_header;
- (id)initWithComponent:(id)arg1 loggingHelper:(id)arg2 surface:(unsigned long long)arg3 userSession:(id)arg4;
@property(retain, nonatomic) IGInsightsCollectionViewController *insightsCollectionViewController; // @synthesize insightsCollectionViewController=_insightsCollectionViewController;
- (_Bool)isComponentValid;
@property(retain, nonatomic) IGInsightsLoggingHelper *loggingHelper; // @synthesize loggingHelper=_loggingHelper;
@property(copy, nonatomic) NSArray *mediaBundles; // @synthesize mediaBundles=_mediaBundles;
@property(copy, nonatomic) NSArray *mediaIDs; // @synthesize mediaIDs=_mediaIDs;
@property(nonatomic) __weak id <IGInsightsComponentNavigationDelegate> navigationDelegate; // @synthesize navigationDelegate;
- (void)showToolTip;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

