//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGMediaOverlayIndicator;

@interface IGAudioNUXController : NSObject
{
    _Bool _hasShownPlaybackNUX;
    id <IGAudioNUXControllerDelegate> _delegate;
    IGMediaOverlayIndicator *_indicator;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <IGAudioNUXControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didChangeMuteSwitch:(id)arg1;
- (void)didPressVolumeButton:(id)arg1;
- (void)didTapOnVideo;
@property(nonatomic) _Bool hasShownPlaybackNUX; // @synthesize hasShownPlaybackNUX=_hasShownPlaybackNUX;
- (id)iconNameForAudioEnabled:(_Bool)arg1;
@property(retain, nonatomic) IGMediaOverlayIndicator *indicator; // @synthesize indicator=_indicator;
- (id)initWithIndicator:(id)arg1;
- (void)showNUXForHardwareVolumeControl;
- (void)showOneTapIndicatorNUXAnimated:(_Bool)arg1;
- (void)updateIndicatorWithAudioEnabled:(_Bool)arg1;

@end
