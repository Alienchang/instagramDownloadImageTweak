//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface IGAnalyticsEventCollector : NSObject
{
    NSMutableArray *_events;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addAnalyticEvent:(id)arg1;
- (void)clearCollectedEvents;
- (id)collectedEvents;
@property(readonly, nonatomic) NSMutableArray *events; // @synthesize events=_events;
- (id)init;

@end
