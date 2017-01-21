//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGMemoryCacheItem : NSObject
{
    id _key;
    id _object;
    IGMemoryCacheItem *_previous;
    IGMemoryCacheItem *_next;
}

- (void).cxx_destruct;
- (void)clearForReuse;
@property(retain, nonatomic) id key; // @synthesize key=_key;
@property(nonatomic) IGMemoryCacheItem *next; // @synthesize next=_next;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) IGMemoryCacheItem *previous; // @synthesize previous=_previous;

@end
