//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGStorableObject.h"

#import "IGListDiffable.h"

@class NSArray;

@interface IGStaticStickerModel : IGStorableObject <IGListDiffable>
{
    unsigned long long _type;
    NSArray *_stickers;
}

+ (id)centralizedStore;
- (void).cxx_destruct;
- (id)diffIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *stickers; // @synthesize stickers=_stickers;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (_Bool)updateWithDictionary:(id)arg1;

@end
