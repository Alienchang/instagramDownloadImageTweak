//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGMotionManager, NSOperationQueue;

@interface IGDeviceOrientation : NSObject
{
    long long _orientationObservers;
    long long _pauseCount;
    IGMotionManager *_motionManager;
    NSOperationQueue *_queue;
    long long _orientation;
}

+ (id)currentDevice;
- (void).cxx_destruct;
- (void)beginGeneratingDeviceOrientationNotifications;
- (void)dealloc;
- (void)endGeneratingDeviceOrientationNotifications;
- (id)init;
@property(readonly, nonatomic, getter=isGeneratingDeviceOrientationNotifications) _Bool generatesDeviceOrientationNotifications;
@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (void)pauseGeneratingDeviceOrientationNotifications;
- (void)reset;
- (void)resumeGeneratingDeviceOrientationNotifications;
- (void)startMotionUpdates;
- (void)stopMotionUpdates;

@end

