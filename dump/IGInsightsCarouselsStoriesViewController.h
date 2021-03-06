//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGInsightsCarouselsViewDelegate.h"
#import "IGInsightsComponentViewController.h"

@class IGDirectMediaViewerTransitionManager, IGInsightsCarouselsView, IGInsightsLoggingHelper, IGInsightsNavigationAction, IGUserSession, NSString;

@interface IGInsightsCarouselsStoriesViewController : UIViewController <IGInsightsCarouselsViewDelegate, IGInsightsComponentViewController>
{
    id <IGInsightsComponentViewControllerNavigationDelegate> navigationDelegate;
    IGInsightsCarouselsView *_insightsCarouselsView;
    UIViewController *_storiesFullScreenSourceViewController;
    NSString *_header;
    IGInsightsNavigationAction *_navigationAction;
    IGInsightsLoggingHelper *_loggingHelper;
    IGUserSession *_userSession;
    NSString *_toolTipText;
    IGDirectMediaViewerTransitionManager *_transitionManager;
}

- (void).cxx_destruct;
- (void)didSelectCellOnCarouselsView:(id)arg1 forFeedItem:(id)arg2 atIndex:(long long)arg3;
- (void)didTapButtonOnCarouselsView:(id)arg1;
- (void)didTapInfoIconOnCarouselsView:(id)arg1;
- (void)didTapToolTipOnInfoIcon:(id)arg1;
@property(readonly, copy, nonatomic) NSString *header; // @synthesize header=_header;
- (id)initWithHeader:(id)arg1 buttonText:(id)arg2 navigationAction:(id)arg3 loggingHelper:(id)arg4 userSession:(id)arg5 iconName:(id)arg6 toolTipText:(id)arg7;
@property(readonly, nonatomic) IGInsightsCarouselsView *insightsCarouselsView; // @synthesize insightsCarouselsView=_insightsCarouselsView;
@property(readonly, nonatomic) IGInsightsLoggingHelper *loggingHelper; // @synthesize loggingHelper=_loggingHelper;
@property(readonly, nonatomic) IGInsightsNavigationAction *navigationAction; // @synthesize navigationAction=_navigationAction;
@property(nonatomic) __weak id <IGInsightsComponentViewControllerNavigationDelegate> navigationDelegate; // @synthesize navigationDelegate;
@property(nonatomic) __weak UIViewController *storiesFullScreenSourceViewController; // @synthesize storiesFullScreenSourceViewController=_storiesFullScreenSourceViewController;
@property(copy, nonatomic) NSString *toolTipText; // @synthesize toolTipText=_toolTipText;
@property(retain, nonatomic) IGDirectMediaViewerTransitionManager *transitionManager; // @synthesize transitionManager=_transitionManager;
- (void)showInfoIconToolTip;
- (_Bool)showStoriesInfoIconNuxWithUserSession:(id)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

