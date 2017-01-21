//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTEvent.h"

@class NSArray, NSNumber, NSString;

@interface RCTTouchEvent : NSObject <RCTEvent>
{
    NSArray *_reactTouches;
    NSArray *_changedIndexes;
    unsigned short _coalescingKey;
    NSString *_eventName;
    NSNumber *_viewTag;
}

+ (id)moduleDotMethod;
- (void).cxx_destruct;
- (id)arguments;
- (_Bool)canCoalesce;
- (id)coalesceWithEvent:(id)arg1;
@property(readonly, nonatomic) unsigned short coalescingKey;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (id)init;
- (id)initWithEventName:(id)arg1 reactTag:(id)arg2 reactTouches:(id)arg3 changedIndexes:(id)arg4 coalescingKey:(unsigned short)arg5;
@property(readonly, nonatomic) NSNumber *viewTag; // @synthesize viewTag=_viewTag;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
