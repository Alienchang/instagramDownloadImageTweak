//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGVideoPlaybackConfigBuilder : NSObject
{
    _Bool _withLooping;
    _Bool _withAudioEnabled;
    _Bool _withHardwareSoundControl;
    _Bool _withOneTapIndicatorNUX;
    _Bool _withTimeIndicator;
    _Bool _withCaption;
}

- (id)init;
- (id)playbackConfig;
@property(nonatomic) _Bool withAudioEnabled; // @synthesize withAudioEnabled=_withAudioEnabled;
@property(nonatomic) _Bool withCaption; // @synthesize withCaption=_withCaption;
@property(nonatomic) _Bool withHardwareSoundControl; // @synthesize withHardwareSoundControl=_withHardwareSoundControl;
@property(nonatomic) _Bool withLooping; // @synthesize withLooping=_withLooping;
@property(nonatomic) _Bool withOneTapIndicatorNUX; // @synthesize withOneTapIndicatorNUX=_withOneTapIndicatorNUX;
@property(nonatomic) _Bool withTimeIndicator; // @synthesize withTimeIndicator=_withTimeIndicator;
- (id)withAudioEnabled:(_Bool)arg1;
- (id)withCaption:(_Bool)arg1;
- (id)withHardwareSoundControl:(_Bool)arg1;
- (id)withLooping:(_Bool)arg1;
- (id)withOneTapIndicatorNUX:(_Bool)arg1;
- (id)withTimeIndicator:(_Bool)arg1;

@end

