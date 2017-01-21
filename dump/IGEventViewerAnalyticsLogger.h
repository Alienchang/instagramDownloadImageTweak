//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSString;

@interface IGEventViewerAnalyticsLogger : NSObject
{
    NSString *_eventId;
    NSString *_eventType;
    NSString *_sessionId;
    NSDictionary *_eventInfo;
    double _cachedProgress;
    double _cachedDuration;
    NSDate *_loadTimeBegin;
}

- (void).cxx_destruct;
@property(nonatomic) double cachedDuration; // @synthesize cachedDuration=_cachedDuration;
@property(nonatomic) double cachedProgress; // @synthesize cachedProgress=_cachedProgress;
- (void)configureEvent:(id)arg1 withDataForPost:(id)arg2 atIndexPath:(id)arg3 mediaDuration:(double)arg4 timeSpentSeconds:(double)arg5;
@property(readonly, copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(readonly, copy, nonatomic) NSDictionary *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(readonly, copy, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (id)generateEventInfo;
- (id)initWithEventId:(id)arg1 eventType:(id)arg2;
@property(retain, nonatomic) NSDate *loadTimeBegin; // @synthesize loadTimeBegin=_loadTimeBegin;
- (void)logEntryPointImpression;
- (void)logEntryPointTapWithMediaID:(id)arg1;
- (void)logEventExitTapForPost:(id)arg1 atIndexPath:(id)arg2 mediaDuration:(double)arg3 timeSpentSeconds:(double)arg4 exitSource:(id)arg5;
- (void)logGestureForPost:(id)arg1 atIndexPath:(id)arg2 mediaDuration:(double)arg3 timeSpentSeconds:(double)arg4 gestureType:(id)arg5;
- (void)logMediaImpressionForPost:(id)arg1 atIndexPath:(id)arg2 mediaDuration:(double)arg3 timeSpentSeconds:(double)arg4;
- (void)logMediaLikeForPost:(id)arg1 atIndexPath:(id)arg2 mediaDuration:(double)arg3 timeSpentSeconds:(double)arg4;
- (void)logOrganicImpressionForPost:(id)arg1;
- (void)logTimeToLoadBegin;
- (void)logTimeToLoadEndSuccess:(_Bool)arg1;
- (void)logUserHeaderTapForPost:(id)arg1 atIndexPath:(id)arg2 mediaDuration:(double)arg3 timeSpentSeconds:(double)arg4 withHeaderOption:(unsigned long long)arg5;
- (void)logUserTapForPost:(id)arg1 atIndexPath:(id)arg2 mediaDuration:(double)arg3 timeSpentSeconds:(double)arg4 withOption:(unsigned long long)arg5;
- (void)logVideoShouldStartPlayingForPost:(id)arg1;
- (void)logVideoTimespentForPost:(id)arg1;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;

@end
