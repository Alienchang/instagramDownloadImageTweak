//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectContentExpandableCell.h"

#import "IGDirectVideoViewDelegate.h"

@class IGDirectVideoView, NSString;

@interface IGDirectVideoExpandableCell : IGDirectContentExpandableCell <IGDirectVideoViewDelegate>
{
    IGDirectVideoView *_videoView;
}

- (void).cxx_destruct;
- (id)contentImage;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)mediaView;
- (void)play;
- (void)prepareForReuse;
- (void)setContent:(id)arg1 currentUser:(id)arg2;
@property(retain, nonatomic) IGDirectVideoView *videoView; // @synthesize videoView=_videoView;
- (void)stop;
- (void)stopAnimated:(_Bool)arg1;
- (void)togglePlayStatus;
- (void)videoView:(id)arg1 didFailToPlayWithError:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
