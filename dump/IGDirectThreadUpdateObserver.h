//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGDirectThreadUpdateObserver : NSObject
{
    CDUnknownBlockType _localHandler;
    CDUnknownBlockType _networkHandler;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleLocalUpdateNotification:(id)arg1;
- (void)handleNetworkUpdateNotification:(id)arg1;
- (id)initWithLocalHandler:(CDUnknownBlockType)arg1 networkHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) CDUnknownBlockType localHandler; // @synthesize localHandler=_localHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType networkHandler; // @synthesize networkHandler=_networkHandler;

@end

