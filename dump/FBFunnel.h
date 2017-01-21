//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBFunnelConfig, NSArray, NSMutableArray, NSString;

@interface FBFunnel : NSObject
{
    NSMutableArray *_currentTags;
    NSMutableArray *_currentActions;
    _Bool _isLoadedFromPersistedFile;
    NSString *_funnelName;
    FBFunnelConfig *_funnelConfig;
    double _startTime;
    double _lastActiveTime;
    unsigned long long _samplingFreq;
    unsigned long long _instanceID;
    double _startTimeSince1970;
}

+ (id)dictionaryToObject:(id)arg1;
- (void).cxx_destruct;
- (void)_addAction:(id)arg1;
- (void)_addTag:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *actions;
- (void)addAction:(id)arg1;
- (void)addTag:(id)arg1;
@property(retain, nonatomic) FBFunnelConfig *funnelConfig; // @synthesize funnelConfig=_funnelConfig;
@property(readonly, copy, nonatomic) NSString *funnelName; // @synthesize funnelName=_funnelName;
- (id)initWithFunnelName:(id)arg1 funnelConfig:(id)arg2 startTime:(double)arg3 startTimeSince1970:(double)arg4 lastActiveTime:(double)arg5 samplingFreqency:(unsigned long long)arg6 tags:(id)arg7 actions:(id)arg8 instanceID:(unsigned long long)arg9;
- (id)initWithFunnelName:(id)arg1 instanceID:(unsigned long long)arg2;
@property(nonatomic) unsigned long long instanceID; // @synthesize instanceID=_instanceID;
@property(nonatomic) _Bool isLoadedFromPersistedFile; // @synthesize isLoadedFromPersistedFile=_isLoadedFromPersistedFile;
@property(nonatomic) double lastActiveTime; // @synthesize lastActiveTime=_lastActiveTime;
- (id)objectToDictionary;
- (id)pseudoCopy;
@property(nonatomic) unsigned long long samplingFreq; // @synthesize samplingFreq=_samplingFreq;
- (void)setStartTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double startTimeSince1970; // @synthesize startTimeSince1970=_startTimeSince1970;
@property(readonly, copy, nonatomic) NSArray *tags;

@end

