//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OACallDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OATokenManagerDelegate>, NSString, OAConsumer, OAToken;

@interface OATokenManager : NSObject <OACallDelegate>
{
    OAConsumer *consumer;
    OAToken *acToken;
    OAToken *reqToken;
    OAToken *initialToken;
    NSString *authorizedTokenKey;
    NSString *oauthBase;
    NSString *realm;
    NSString *callback;
    NSObject<OATokenManagerDelegate> *delegate;
    NSMutableArray *calls;
    NSMutableArray *selectors;
    NSMutableDictionary *delegates;
    _Bool isDispatching;
}

- (void)accessTokenReceived:(id)arg1 body:(id)arg2;
- (void)authorizedToken:(id)arg1;
- (void)call:(id)arg1 failedWithError:(id)arg2;
- (void)call:(id)arg1 failedWithProblem:(id)arg2;
- (void)callFinished:(id)arg1 body:(id)arg2;
- (void)dealloc;
- (void)deleteSavedRequestToken;
- (void)dequeue:(id)arg1;
- (void)dispatch;
- (void)enqueue:(id)arg1 selector:(SEL)arg2;
- (void)exchangeToken;
- (void)fetchData:(id)arg1 finished:(SEL)arg2;
- (void)fetchData:(id)arg1 method:(id)arg2 parameters:(id)arg3 files:(id)arg4 finished:(SEL)arg5;
- (void)fetchData:(id)arg1 method:(id)arg2 parameters:(id)arg3 files:(id)arg4 finished:(SEL)arg5 delegate:(id)arg6;
- (void)fetchData:(id)arg1 method:(id)arg2 parameters:(id)arg3 finished:(SEL)arg4;
- (void)fetchData:(id)arg1 parameters:(id)arg2 files:(id)arg3 finished:(SEL)arg4;
- (SEL)getSelector:(id)arg1;
- (id)init;
- (id)initWithConsumer:(id)arg1 token:(id)arg2 oauthBase:(id)arg3 realm:(id)arg4 callback:(id)arg5 delegate:(id)arg6;
- (void)performCall:(id)arg1;
- (id)queue;
- (void)renewToken;
- (void)requestToken;
- (void)requestTokenReceived:(id)arg1 body:(id)arg2;
- (void)setAccessToken:(id)arg1;

@end
