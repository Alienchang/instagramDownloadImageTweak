//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGFeedItemTracker : NSObject
{
    _Bool _trackWithNoLatency;
    CDUnknownBlockType _extraFieldBlock;
    NSString *_eventPrefix;
}

+ (void)reportEvent:(id)arg1 immediately:(_Bool)arg2;
- (void).cxx_destruct;
- (id)eventNameWithSuffix:(id)arg1;
@property(copy, nonatomic) NSString *eventPrefix; // @synthesize eventPrefix=_eventPrefix;
@property(copy, nonatomic) CDUnknownBlockType extraFieldBlock; // @synthesize extraFieldBlock=_extraFieldBlock;
- (void)logEvent:(id)arg1 forFeedItem:(id)arg2 withExtraDictionary:(id)arg3;
- (void)logEvent:(id)arg1 module:(id)arg2 forFeedItem:(id)arg3 withExtraDictionary:(id)arg4;
- (void)logEvent:(id)arg1 module:(id)arg2 forFeedItem:(id)arg3 withExtraDictionary:(id)arg4 navState:(id)arg5;
- (void)logEvent:(id)arg1 module:(id)arg2 forFeedItem:(id)arg3 withExtraDictionary:(id)arg4 navState:(id)arg5 sourceOfAction:(id)arg6;
@property(nonatomic) _Bool trackWithNoLatency; // @synthesize trackWithNoLatency=_trackWithNoLatency;
- (void)trackTimespentForFeedItem:(id)arg1 module:(id)arg2 timespent:(double)arg3 extra:(id)arg4;
- (void)trackTimespentForProductItemPK:(id)arg1 feedItem:(id)arg2 module:(id)arg3 timespent:(double)arg4 extra:(id)arg5;

@end

