//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectSyncCaching.h"

@class IGAnnouncer, NSMutableDictionary, NSMutableOrderedSet, NSString;

@interface IGDirectMemoryCache : NSObject <IGDirectSyncCaching>
{
    NSMutableDictionary *_threadsByThreadIds;
    NSMutableOrderedSet *_directStoriesSet;
    NSMutableOrderedSet *_seenMarks;
    IGAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (void)addListener:(id)arg1;
- (id)allPendingMessages;
- (id)allSeenMarks;
@property(readonly, nonatomic) IGAnnouncer *announcer; // @synthesize announcer=_announcer;
- (void)deleteSeenMark:(id)arg1;
- (id)directStories;
@property(retain, nonatomic) NSMutableOrderedSet *directStoriesSet; // @synthesize directStoriesSet=_directStoriesSet;
- (id)init;
- (void)loadSeenMarks:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)removePendingMessage:(id)arg1;
- (void)removeStoryMessageWithId:(id)arg1 storyId:(id)arg2 updateType:(unsigned long long)arg3;
- (void)removeStoryWithId:(id)arg1 forUpdateType:(unsigned long long)arg2;
- (void)removeThreadWithId:(id)arg1;
- (void)saveSeenMark:(id)arg1;
- (void)saveStories:(id)arg1 shouldFlush:(_Bool)arg2 forUpdateType:(unsigned long long)arg3;
- (void)saveStory:(id)arg1 option:(unsigned long long)arg2 forUpdateType:(unsigned long long)arg3;
@property(retain, nonatomic) NSMutableOrderedSet *seenMarks; // @synthesize seenMarks=_seenMarks;
- (void)setThreads:(id)arg1;
- (void)storeThread:(id)arg1;
- (id)storyForId:(id)arg1;
- (id)threadWithId:(id)arg1;
- (id)threadWithUsers:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *threadsByThreadIds; // @synthesize threadsByThreadIds=_threadsByThreadIds;
- (id)threadsWithOptions:(id)arg1;
- (_Bool)updateStatusMetadata:(id)arg1 forStoryWithId:(id)arg2 forUpdateType:(unsigned long long)arg3;
- (id)updatedThreadWithThread:(id)arg1 mergeOption:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

