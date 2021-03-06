//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface IGTTILogger : NSObject
{
    _Bool _hasLoggedOnce;
    double _startTimestamp;
    NSString *_module;
    NSString *_analyticsEventName;
    NSMutableDictionary *_extras;
}

+ (id)sampledLoggerWithEventName:(id)arg1 module:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *analyticsEventName; // @synthesize analyticsEventName=_analyticsEventName;
@property(readonly, nonatomic) NSMutableDictionary *extras; // @synthesize extras=_extras;
@property(nonatomic) _Bool hasLoggedOnce; // @synthesize hasLoggedOnce=_hasLoggedOnce;
- (id)initWithAnalyticsEventName:(id)arg1 module:(id)arg2;
- (void)logDataPoint:(id)arg1;
@property(readonly, nonatomic) NSString *module; // @synthesize module=_module;
@property(nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
- (void)start;
- (void)stopWithSuccess:(_Bool)arg1;

@end

