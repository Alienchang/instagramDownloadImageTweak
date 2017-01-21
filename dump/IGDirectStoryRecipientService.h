//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"

@class IGDirectCache, NSArray, NSString;

@interface IGDirectStoryRecipientService : NSObject <IGUserSessionObject>
{
    int _defaultRecipientsLock;
    NSArray *_defaultRecipients;
    id <IGDirectRecipientDataSourceProtocol> _dataSource;
    IGDirectCache *_directCache;
}

- (void).cxx_destruct;
- (void)addRecipientsToDefaultList:(id)arg1;
@property(readonly, nonatomic) id <IGDirectRecipientDataSourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
- (void)dealloc;
@property(copy, nonatomic) NSArray *defaultRecipients; // @synthesize defaultRecipients=_defaultRecipients;
@property(readonly, nonatomic) int defaultRecipientsLock; // @synthesize defaultRecipientsLock=_defaultRecipientsLock;
@property(readonly, nonatomic) IGDirectCache *directCache; // @synthesize directCache=_directCache;
- (id)initWithNetworker:(id)arg1 directCache:(id)arg2 currentUser:(id)arg3 userActions:(id)arg4 autocompleteUsersStore:(id)arg5;
- (void)onAppWillBackground:(id)arg1;
- (void)readDefaultRecipientsFromDisk;
- (void)removeRecipientFromDefaultList:(id)arg1;
- (void)searchDefaultRecipientsWithSuccessHandler:(CDUnknownBlockType)arg1 failureHandler:(CDUnknownBlockType)arg2;
- (void)searchRecipientsWithText:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)threadUpdated:(id)arg1;
- (void)updateRecipientWithStoryId:(id)arg1;
- (void)updateThreadWithThreadId:(id)arg1;
- (void)userLeftThread:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
