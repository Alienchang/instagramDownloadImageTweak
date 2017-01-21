//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"

@class IGExposureLogger, NSDictionary, NSMutableDictionary, NSString;

@interface IGExperimentSet : NSObject <IGUserSessionObject>
{
    id <IGAPIClient> _networker;
    int _cachedExperimentsLock;
    NSMutableDictionary *_cachedExperiments;
    NSObject *_overrideGroupsLock;
    NSMutableDictionary *_serverSideGroups;
    NSString *_uniqueIdentifier;
    NSString *_diskCacheFileName;
    NSDictionary *_experimentSpecs;
    IGExposureLogger *_exposureLogger;
    double _lastSyncTime;
    NSDictionary *_cachedPayload;
    _Bool _wantsColdStart;
    long long _type;
}

- (void).cxx_destruct;
- (id)cachedExperimentForSpec:(id)arg1;
- (void)clearCachedExperimentForKey:(id)arg1;
- (id)diskCacheFilePath;
- (id)experiments;
- (id)getValueForExperimentSpec:(id)arg1 parameterNamed:(id)arg2 shouldExpose:(_Bool)arg3;
- (id)getValueFromExperiment:(id)arg1 parameterName:(id)arg2 respectingHoldout:(id)arg3 shouldExpose:(_Bool)arg4;
- (void)initClientOverrideForEndToEndTest:(id)arg1;
- (id)initWithExperimentType:(long long)arg1 experimentSpecs:(id)arg2 uniqueIdentifier:(id)arg3 networker:(id)arg4;
- (void)loadDiskCache;
- (id)overrideGroupForExperimentSpec:(id)arg1;
- (void)refreshExperimentsIfNecessary;
- (id)serverSideGroupForExperimentSpec:(id)arg1;
- (void)setOverrideGroup:(id)arg1 forExperimentSpec:(id)arg2;
- (void)setServerSideGroup:(id)arg1 forExperimentSpec:(id)arg2;
@property(nonatomic) _Bool wantsColdStart; // @synthesize wantsColdStart=_wantsColdStart;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void)updateExperimentsWithLegacyPayloadFromDiskCache:(id)arg1;
- (_Bool)updateExperimentsWithPayload:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

