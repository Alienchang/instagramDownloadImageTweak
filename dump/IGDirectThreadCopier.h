//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectThread;

@interface IGDirectThreadCopier : NSObject
{
    IGDirectThread *_thread;
}

+ (id)withThread:(id)arg1;
- (void).cxx_destruct;
- (id)byAddingMessages:(id)arg1;
- (id)byForcingLastSeenDate:(id)arg1 forCurrentUserPK:(id)arg2;
- (id)byRemovingPendingMessages:(id)arg1;
- (id)byRemovingPublishedMessageWithItemId:(id)arg1;
- (id)byReplacingReactableContent:(id)arg1 didChangeReactions:(_Bool *)arg2;
- (id)bySettingLastSeenAtForUserWithId:(id)arg1 timestamp:(id)arg2 seenItemId:(id)arg3;
- (id)byTrimmingMessagesToCount:(unsigned long long)arg1;
- (id)byTrimmingMessagesToOldestCursor:(id)arg1;
- (id)initWithThread:(id)arg1;
@property(readonly, nonatomic) IGDirectThread *thread; // @synthesize thread=_thread;

@end

