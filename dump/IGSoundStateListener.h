//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGSoundStateListener : NSObject
{
    _Bool _shouldEnableAudio;
    _Bool _enabledViaVolumeButtons;
    id <IGSoundStateListenerDelegate> _delegate;
}

- (void).cxx_destruct;
- (_Bool)areHeadphonesPluggedIn;
- (void)audioRouteChanged:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <IGSoundStateListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (void)didReceiveDidPressVolumeButtonNotification:(id)arg1;
- (void)didReceiveMuteStateDidChangeNotification:(id)arg1;
@property(nonatomic) _Bool enabledViaVolumeButtons; // @synthesize enabledViaVolumeButtons=_enabledViaVolumeButtons;
- (id)init;
@property(nonatomic) _Bool shouldEnableAudio; // @synthesize shouldEnableAudio=_shouldEnableAudio;
- (void)updateCurrentState;

@end

