//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionClearableObject.h"

@class IGDraftBeingStored, IGDraftEnumerator, NSLock, NSString;

@interface IGCameraDraftManager : NSObject <IGUserSessionClearableObject>
{
    NSString *_userPK;
    IGDraftBeingStored *_draftBeingStored;
    IGDraftEnumerator *_draftEnumerator;
    NSLock *_draftEnumeratorLock;
}

+ (void)clearForUserPK:(id)arg1;
- (void).cxx_destruct;
- (void)clearDraftsWithCompletion:(CDUnknownBlockType)arg1;
- (void)clipExportFinished;
- (void)dealloc;
- (id)directoryForDraft:(id)arg1;
- (id)draftEnumeratorHelperValid:(_Bool)arg1;
- (void)encodingFinished;
- (void)fetchAllDraftsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchDraftsCount:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithUserPK:(id)arg1;
- (void)removeDraft:(id)arg1 enumeratorRemovalBlock:(CDUnknownBlockType)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)removeDraft:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removeInvalidDraftsAsync;
- (void)storeDraft:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)storedDraftEnumerator;
- (id)storedInvalidDraftEnumerator;
- (_Bool)validateDraft:(id)arg1;
- (void)willLogOut;
- (void)willSwitchUsers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

