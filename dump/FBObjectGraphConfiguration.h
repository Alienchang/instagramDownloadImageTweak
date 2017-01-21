//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface FBObjectGraphConfiguration : NSObject
{
    _Bool _shouldInspectTimers;
    _Bool _shouldCacheLayouts;
    NSArray *_filterBlocks;
    NSMutableDictionary *_layoutCache;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *filterBlocks; // @synthesize filterBlocks=_filterBlocks;
- (id)init;
- (id)initWithFilterBlocks:(id)arg1 shouldInspectTimers:(_Bool)arg2;
@property(readonly, nonatomic) NSMutableDictionary *layoutCache; // @synthesize layoutCache=_layoutCache;
@property(readonly, nonatomic) _Bool shouldCacheLayouts; // @synthesize shouldCacheLayouts=_shouldCacheLayouts;
@property(readonly, nonatomic) _Bool shouldInspectTimers; // @synthesize shouldInspectTimers=_shouldInspectTimers;

@end
