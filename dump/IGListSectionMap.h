//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSMapTable;

@interface IGListSectionMap : NSObject <NSCopying>
{
    NSArray *_objects;
    NSMapTable *_sectionControllerToObjectMap;
    NSMapTable *_sectionControllerToSectionMap;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithMapTable:(id)arg1;
- (id)objectForSection:(long long)arg1;
@property(retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (void)reset;
- (id)sectionControllerForObject:(id)arg1;
- (id)sectionControllerForSection:(long long)arg1;
@property(readonly, nonatomic) NSMapTable *sectionControllerToObjectMap; // @synthesize sectionControllerToObjectMap=_sectionControllerToObjectMap;
@property(readonly, nonatomic) NSMapTable *sectionControllerToSectionMap; // @synthesize sectionControllerToSectionMap=_sectionControllerToSectionMap;
- (long long)sectionForObject:(id)arg1;
- (long long)sectionForSectionController:(id)arg1;
- (void)updateObject:(id)arg1;
- (void)updateWithObjects:(id)arg1 sectionControllers:(id)arg2;

@end
