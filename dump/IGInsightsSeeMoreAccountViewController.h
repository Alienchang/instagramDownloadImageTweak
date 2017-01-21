//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

@class IGInsightsComponentListViewController, IGInsightsLoggingHelper, UITapGestureRecognizer;

@interface IGInsightsSeeMoreAccountViewController : IGViewController
{
    IGInsightsComponentListViewController *_componentListViewController;
    IGInsightsLoggingHelper *_loggingHelper;
    UITapGestureRecognizer *_toolTipDismissGestureRecognizer;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (_Bool)canHostInlineGallery:(_Bool)arg1;
@property(retain, nonatomic) IGInsightsComponentListViewController *componentListViewController; // @synthesize componentListViewController=_componentListViewController;
- (void)didMoveToParentViewController:(id)arg1;
- (id)initWithQuery:(id)arg1 loggingHelper:(id)arg2 userSession:(id)arg3;
@property(retain, nonatomic) IGInsightsLoggingHelper *loggingHelper; // @synthesize loggingHelper=_loggingHelper;
- (_Bool)prefersTabBarHidden;
@property(retain, nonatomic) UITapGestureRecognizer *toolTipDismissGestureRecognizer; // @synthesize toolTipDismissGestureRecognizer=_toolTipDismissGestureRecognizer;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

@end
