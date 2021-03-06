//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<IGDirectMessageReactionFilter>;

@protocol IGDirectMessageReactable <NSObject>
- (id)copyOfContentWithReactionFilter:(NSObject<IGDirectMessageReactionFilter> *)arg1;
@property(nonatomic) unsigned long long lastReactionType;
@property(nonatomic) unsigned long long likeCount;
@property(retain, nonatomic) NSArray *reactions;
@property(nonatomic) _Bool reactionsNeedsReRender;
@end

