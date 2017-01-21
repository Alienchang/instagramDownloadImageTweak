//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BFCancellationToken;

@interface BFCancellationTokenRegistration : NSObject
{
    _Bool _disposed;
    BFCancellationToken *_token;
    CDUnknownBlockType _cancellationObserverBlock;
    NSObject *_lock;
}

+ (id)registrationWithToken:(id)arg1 delegate:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cancellationObserverBlock; // @synthesize cancellationObserverBlock=_cancellationObserverBlock;
- (void)dispose;
@property(nonatomic) _Bool disposed; // @synthesize disposed=_disposed;
- (id)init;
@property(retain, nonatomic) NSObject *lock; // @synthesize lock=_lock;
- (void)notifyDelegate;
@property(nonatomic) __weak BFCancellationToken *token; // @synthesize token=_token;
- (void)throwIfDisposed;

@end
