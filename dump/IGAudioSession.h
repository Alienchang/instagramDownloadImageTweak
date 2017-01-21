//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPMusicPlayerController;

@interface IGAudioSession : NSObject
{
    _Bool _preventSystemVolumeChange;
    MPMusicPlayerController *_musicPlayerController;
    double _previousVolume;
    long long _sessionState;
    long long _previousSessionState;
}

+ (unsigned long long)categoryOptionsForRecordingState:(_Bool)arg1;
+ (_Bool)isBluetoothOrAirplayConnected;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)activateAudioSession:(_Bool)arg1;
- (void)activatePlaybackSession;
- (void)activateRecordingSession;
- (void)activateSessionToHideHUD;
- (void)audioSessionInterrupted:(id)arg1;
- (void)audioSessionRouteChange:(id)arg1;
- (void)dealloc;
- (void)didBecomeActive;
- (void)didEnterBackground;
- (id)init;
@property(readonly, nonatomic) MPMusicPlayerController *musicPlayerController; // @synthesize musicPlayerController=_musicPlayerController;
@property(nonatomic) _Bool preventSystemVolumeChange; // @synthesize preventSystemVolumeChange=_preventSystemVolumeChange;
@property(nonatomic) long long previousSessionState; // @synthesize previousSessionState=_previousSessionState;
@property(nonatomic) double previousVolume; // @synthesize previousVolume=_previousVolume;
@property(nonatomic) long long sessionState; // @synthesize sessionState=_sessionState;
- (void)volumeChanged:(id)arg1;
- (void)willResignActive;

@end

