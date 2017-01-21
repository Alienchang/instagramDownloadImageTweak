//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMapTable;

@interface IGListIndexPathResult : NSObject
{
    NSMapTable *_oldIndexPathMap;
    NSMapTable *_newIndexPathMap;
    NSArray *_inserts;
    NSArray *_deletes;
    NSArray *_updates;
    NSArray *_moves;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *deletes; // @synthesize deletes=_deletes;
- (id)description;
- (_Bool)hasChanges;
- (id)initWithInserts:(id)arg1 deletes:(id)arg2 updates:(id)arg3 moves:(id)arg4 oldIndexPathMap:(id)arg5 newIndexPathMap:(id)arg6;
@property(readonly, copy, nonatomic) NSArray *inserts; // @synthesize inserts=_inserts;
@property(readonly, copy, nonatomic) NSArray *moves; // @synthesize moves=_moves;
- (id)newIndexPathForIdentifier:(id)arg1;
- (id)oldIndexPathForIdentifier:(id)arg1;
- (id)resultForBatchUpdates;
@property(readonly, copy, nonatomic) NSArray *updates; // @synthesize updates=_updates;

@end

