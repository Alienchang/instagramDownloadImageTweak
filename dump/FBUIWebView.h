//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBWebView.h"
#import "NJKWebViewProgressDelegate.h"

@class FBUIWebViewDelegateAdaptor, NJKWebViewProgress, NSHashTable, NSString, NSURL, NSURLRequest, UIScrollView, UIWebView;

@interface FBUIWebView : UIView <NJKWebViewProgressDelegate, FBWebView>
{
    struct CGPoint _lastTouchLocation;
    UIWebView *_webView;
    FBUIWebViewDelegateAdaptor *_delegateAdaptor;
    NJKWebViewProgress *_webViewProgressManager;
    id <UIScrollViewDelegate> _oldScrollViewDelegate;
    id _internalWebView;
    NSHashTable *_liveXMLHttpRequests;
    _Bool _isBannerAtTop;
    _Bool _loading;
    _Bool _canGoBack;
    _Bool _canGoForward;
    _Bool _youtubeNavigationFix;
    _Bool _allowPopupsOnlyDuringUserInteraction;
    int _displayState;
    UIView *_bannerView;
    UIView *_errorView;
    NSString *_title;
    NSURL *_currentLocationURL;
    NSString *_customUserAgent;
    id <FBWebViewAnalytics> _analytics;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (void).cxx_destruct;
- (void)_layoutBannerView;
- (void)_loadingStateChanged:(_Bool)arg1;
- (void)_navigationHistoryMayHaveChanged;
- (void)_titleAndURLMayHaveChanged;
- (id)_webBrowserView;
@property(nonatomic, setter=setAllowPopupsOnlyDuringUserInteraction:) _Bool allowPopupsOnlyDuringUserInteraction; // @synthesize allowPopupsOnlyDuringUserInteraction=_allowPopupsOnlyDuringUserInteraction;
@property(retain, nonatomic) id <FBWebViewAnalytics> analytics; // @synthesize analytics=_analytics;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(readonly, nonatomic) _Bool canGoBack; // @synthesize canGoBack=_canGoBack;
@property(readonly, nonatomic) _Bool canGoForward; // @synthesize canGoForward=_canGoForward;
@property(readonly, copy, nonatomic) NSURL *currentLocationURL; // @synthesize currentLocationURL=_currentLocationURL;
@property(copy, nonatomic) NSString *customUserAgent; // @synthesize customUserAgent=_customUserAgent;
@property(nonatomic) unsigned long long dataDetectorTypes;
- (void)dealloc;
@property(nonatomic) __weak id <FBWebViewDelegate> delegate;
@property(nonatomic) int displayState; // @synthesize displayState=_displayState;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)goBack;
- (void)goForward;
- (_Bool)hasOnlySecureContent;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 analytics:(id)arg2;
@property(nonatomic) _Bool isBannerAtTop; // @synthesize isBannerAtTop=_isBannerAtTop;
@property(readonly, nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
- (void)layoutSubviews;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 characterEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (void)reload;
@property(readonly, nonatomic) NSURLRequest *request;
- (void)safeExecuteJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)setGestureRecognizersEnabled:(_Bool)arg1;
- (void)setKeyboardDisplayRequiresUserAction:(_Bool)arg1;
@property(nonatomic) _Bool youtubeNavigationFix; // @synthesize youtubeNavigationFix=_youtubeNavigationFix;
- (void)stopLoading;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)updateOrientationWithOrientation:(long long)arg1;
@property(readonly, nonatomic) int webViewImplementation;
- (void)webViewProgress:(id)arg1 didUpdateProgress:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

