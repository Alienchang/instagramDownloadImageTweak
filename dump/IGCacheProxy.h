//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGMemoryCache, NSCache;

@interface IGCacheProxy : NSObject
{
    _Bool _useNewCache;
    NSCache *_cache;
    IGMemoryCache *_memCache;
}

+ (void)setNewCacheEnabled:(_Bool)arg1 forName:(id)arg2;
- (void).cxx_destruct;
- (id)initWithCapacity:(unsigned long long)arg1 totalCost:(unsigned long long)arg2 compactionFactor:(double)arg3 compactionStrategy:(unsigned long long)arg4 weakLayer:(_Bool)arg5 name:(id)arg6;
- (unsigned long long)objectCount;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;

@end
