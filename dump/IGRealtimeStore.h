//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGRealtimeStore : NSObject
{
}

+ (void)markPathAsTombstone:(id)arg1;
+ (id)operationStore;
+ (id)operations;
+ (_Bool)patchStoreWithOperation:(id)arg1;
+ (void)patchStoreWithPatches:(id)arg1;
+ (_Bool)processAddOperation:(id)arg1;
+ (_Bool)processRemoveOperation:(id)arg1;
+ (_Bool)processReplaceOperation:(id)arg1;
+ (void)removeAllObjects;
+ (id)tombstoneStore;

@end

