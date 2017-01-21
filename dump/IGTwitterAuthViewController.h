//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "UIWebViewDelegate.h"

@class IGUserSession, NSString, UIWebView;

@interface IGTwitterAuthViewController : IGViewController <UIWebViewDelegate>
{
    UIWebView *_webView;
    NSString *_callbackPath;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)dealloc;
- (id)extractTokenAndVerifierFromURL:(id)arg1;
- (void)handleCallbackURL:(id)arg1;
- (id)initWithUserSession:(id)arg1;
- (id)pathSubstringForCallbackURL:(id)arg1;
- (void)startAuthorization;
- (void)userDidAuthorizeWithTokenKey:(id)arg1 secret:(id)arg2 username:(id)arg3;
- (void)userDidNotAuthorize;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

