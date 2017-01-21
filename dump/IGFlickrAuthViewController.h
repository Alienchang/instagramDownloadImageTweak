//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGFlickrAuthDelegate.h"

@class IGFlickrAuthHelper, IGUserSession, NSString, UIWebView;

@interface IGFlickrAuthViewController : IGViewController <IGFlickrAuthDelegate>
{
    UIWebView *_webView;
    IGFlickrAuthHelper *_authHelper;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)dealloc;
- (void)flickrDidAuthorize:(id)arg1;
- (void)flickrDidNotAuthorize:(id)arg1;
- (void)flickrWebViewLoadInProgress:(_Bool)arg1;
- (id)initWithUserSession:(id)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

