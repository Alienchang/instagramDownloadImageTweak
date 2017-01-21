//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGDirectThreadDiskCache : NSObject
{
    NSString *_userSessionPK;
    NSString *_cacheBasePath;
}

- (void).cxx_destruct;
- (id)allCachedThreads;
@property(copy, nonatomic) NSString *cacheBasePath; // @synthesize cacheBasePath=_cacheBasePath;
- (id)cachePathForThreadId:(id)arg1;
- (_Bool)cacheThread:(id)arg1 withContentCount:(unsigned long long)arg2;
- (id)cachedThreadWithId:(id)arg1;
- (void)clearCache;
- (id)initWithUserSessionPK:(id)arg1;
@property(copy, nonatomic) NSString *userSessionPK; // @synthesize userSessionPK=_userSessionPK;
- (void)uncacheThreadWithID:(id)arg1;

@end
