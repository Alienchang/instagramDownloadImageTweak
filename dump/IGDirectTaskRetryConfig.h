//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGDirectTaskRetryConfig : NSObject
{
    double _initialRetryInterval;
    double _exponentialBackoffFactor;
    long long _maxNumberOfFailures;
}

@property(readonly, nonatomic) double exponentialBackoffFactor; // @synthesize exponentialBackoffFactor=_exponentialBackoffFactor;
- (id)init;
- (id)initWithInitialRetryInterval:(double)arg1 exponentialBackoffFactor:(double)arg2 maxNumberOfFailures:(long long)arg3;
@property(readonly, nonatomic) double initialRetryInterval; // @synthesize initialRetryInterval=_initialRetryInterval;
@property(readonly, nonatomic) long long maxNumberOfFailures; // @synthesize maxNumberOfFailures=_maxNumberOfFailures;
- (double)timeToNextRetryForNumberOfFailures:(long long)arg1;

@end

