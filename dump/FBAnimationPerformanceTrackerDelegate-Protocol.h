//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBCallstack;

@protocol FBAnimationPerformanceTrackerDelegate <NSObject>
- (void)didReportStackTraces;
- (void)reportDurationInMS:(long long)arg1 smallDropEvents:(double)arg2 largeDropEvents:(double)arg3 totalStallTimeInMS:(long long)arg4;
- (void)reportStackTrace:(FBCallstack *)arg1;
- (void)willReportStackTraces;
@end

