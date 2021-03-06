//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGCacheProxy, IGDiskCache, NSObject<OS_dispatch_queue>;

@interface IGCache : NSObject
{
    IGCacheProxy *_memCache;
    IGDiskCache *_diskCache;
    NSObject<OS_dispatch_queue> *_ioQueue;
    unsigned long long _trimmingTask;
    double _lastTrimTime;
    unsigned long long _diskCapacity;
    unsigned long long _maxObjectCount;
}

- (void).cxx_destruct;
- (_Bool)containsKey:(id)arg1;
@property(readonly, nonatomic) unsigned long long diskCapacity; // @synthesize diskCapacity=_diskCapacity;
- (id)initWithName:(id)arg1 diskCapacity:(unsigned long long)arg2 maxObjectCount:(unsigned long long)arg3 maxInMemoryCount:(unsigned long long)arg4 maxInMemoryCost:(unsigned long long)arg5;
- (id)io_queue_objectForKey:(id)arg1;
@property(readonly, nonatomic) unsigned long long maxObjectCount; // @synthesize maxObjectCount=_maxObjectCount;
- (unsigned long long)memoryObjectCount;
- (id)objectForKey:(id)arg1;
- (void)objectForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAllObjectsWithDeletionBlock:(CDUnknownBlockType)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;

@end

