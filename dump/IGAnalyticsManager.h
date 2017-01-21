//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGAnalyticsDeviceInfoManagerBase;

@interface IGAnalyticsManager : NSObject
{
    IGAnalyticsDeviceInfoManagerBase *_deviceInfoManager;
}

- (void).cxx_destruct;
- (CDUnknownBlockType)additionalDeviceInformationToLog;
- (void)appDidLaunch:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) IGAnalyticsDeviceInfoManagerBase *deviceInfoManager; // @synthesize deviceInfoManager=_deviceInfoManager;
- (void)handleFacebookIDUpdated:(id)arg1;
- (void)handleUserIDUpdated:(id)arg1;
- (void)handleUserSwitched:(id)arg1;
- (id)init;
- (void)logAppDataUsage;
- (void)logDeviceInfoAndDeviceDataUsage;
- (void)onLocationAuthorizationStatusAuthorized:(id)arg1;
- (void)onLocationAuthorizationStatusDenied:(id)arg1;
- (void)onLocationDenied:(id)arg1;
- (void)onLocationPermissionInstructionsPrompted:(id)arg1;
- (void)onLocationUpdated:(id)arg1;
- (void)shareServiceChanged:(id)arg1;

@end

