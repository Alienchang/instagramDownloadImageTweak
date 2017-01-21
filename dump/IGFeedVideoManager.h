//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface IGFeedVideoManager : NSObject
{
    NSMutableSet *_inUsePool;
    NSMutableSet *_availablePool;
}

+ (id)sharedVideoManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableSet *availablePool; // @synthesize availablePool=_availablePool;
- (void)dealloc;
- (id)dequeueReusablePlayer;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)finishUsingPlayer:(id)arg1;
@property(readonly, nonatomic) NSMutableSet *inUsePool; // @synthesize inUsePool=_inUsePool;
- (id)init;
- (void)notifyPlayerUsageChange;
@property(readonly, nonatomic) long long playerInUseCount;

@end

