//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableSet, NSString;

@interface IGExploreInterestModel : NSObject
{
    _Bool _moreAvailable;
    _Bool _isCollapsed;
    NSString *_title;
    NSString *_subtitle;
    NSMutableSet *_selectedIndices;
    NSArray *_topics;
    NSArray *_allTopicNames;
    long long _collapsedTopicCount;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *allTopicNames; // @synthesize allTopicNames=_allTopicNames;
@property(readonly, nonatomic) long long collapsedTopicCount; // @synthesize collapsedTopicCount=_collapsedTopicCount;
- (id)initWithDictionary:(id)arg1;
@property(nonatomic) _Bool isCollapsed; // @synthesize isCollapsed=_isCollapsed;
@property(readonly, nonatomic) _Bool moreAvailable; // @synthesize moreAvailable=_moreAvailable;
- (id)parseTopicFromResponse:(id)arg1;
@property(readonly, nonatomic) NSMutableSet *selectedIndices; // @synthesize selectedIndices=_selectedIndices;
@property(readonly, nonatomic) NSArray *selectedTopicIDs;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSArray *topics; // @synthesize topics=_topics;
- (void)updateMoreTopicsWithDictionary:(id)arg1;
@property(readonly, nonatomic) NSArray *visibleTopicNames;

@end

