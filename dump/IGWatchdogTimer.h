//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSThread;

@interface IGWatchdogTimer : NSObject
{
    NSThread *_watchdogThread;
    double _backoff;
    struct __CFRunLoopObserver *_keepaliveObserver;
    // Error parsing type: {atomic<double>="__a_"Ad}, name: _lastKeepaliveTime
    // Error parsing type: {atomic<double>="__a_"Ad}, name: _lastStallEndTime
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _currentlyStalled
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _currentlyAboveThreadThreshold
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _suspended
    _Bool _enabled;
    double _timeout;
}

+ (id)mainThreadWatchdog;
- (void).cxx_destruct;
- (double)_lastKeepaliveUnwrapped;
- (void)_startMonitoringThreads;
- (void)_startObservingNotifications;
- (void)_startWatchdog;
- (void)_stopMonitoringThreads;
- (void)_stopObservingNotifications;
- (void)_stopWatchdog;
- (void)_watchdogExpired;
- (void)_watchdogMethod;
- (void)_watchdogThread;
- (void)dealloc;
- (id)initWithBackoff:(double)arg1;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)raiseTimeoutForThisRunloop;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (void)willRecordStackBacktraces;

@end

