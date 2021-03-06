//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGAnalyticsDataUsageManager : NSObject
{
    _Bool _hasStartedTracking;
    struct {
        unsigned long long nbytesWifiSnd;
        unsigned long long nbytesWifiRcv;
        unsigned long long nbytesCellSnd;
        unsigned long long nbytesCellRcv;
        unsigned int npcktsWifiSnd;
        unsigned int npcktsWifiRcv;
        unsigned int npcktsCellSnd;
        unsigned int npcktsCellRcv;
    } _initialDataRecord;
}

+ (id)sharedDataUsageManager;
- (id)getDataUsageAndFinishTracking;
- (_Bool)isDataRecordOverflowed;
- (_Bool)shouldReportDataUsage;
- (void)startDataUsageTracking;

@end

