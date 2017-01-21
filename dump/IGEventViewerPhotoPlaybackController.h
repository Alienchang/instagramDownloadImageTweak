//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedPhotoViewDelegate.h"

@class FBTimer, IGEventViewerAnalyticsLogger, IGEventViewerPlaybackItem, NSString;

@interface IGEventViewerPhotoPlaybackController : NSObject <IGFeedPhotoViewDelegate>
{
    id <IGEventViewerPhotoPlaybackControllerDelegate> _delegate;
    FBTimer *_timer;
    double _timerProgress;
    IGEventViewerPlaybackItem *_playbackItem;
    IGEventViewerAnalyticsLogger *_logger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double currentDuration;
@property(readonly, nonatomic) double currentProgress;
- (void)dealloc;
@property(nonatomic) __weak id <IGEventViewerPhotoPlaybackControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFireTimer;
- (void)feedPhotoDidDoubleTapToLike:(id)arg1;
- (void)feedPhotoViewDidLoadImage:(id)arg1;
- (void)feedPhotoViewDidShowTags:(id)arg1;
- (void)feedPhotoViewDidTap:(id)arg1;
- (id)initWithLogger:(id)arg1;
- (_Bool)isCurrentlyPlayingPhoto;
@property(readonly, nonatomic) IGEventViewerAnalyticsLogger *logger; // @synthesize logger=_logger;
- (void)pauseCurrentlyPlayingPhoto;
- (void)playPhotoForItem:(id)arg1;
@property(retain, nonatomic) IGEventViewerPlaybackItem *playbackItem; // @synthesize playbackItem=_playbackItem;
@property(retain, nonatomic) FBTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double timerProgress; // @synthesize timerProgress=_timerProgress;
- (void)startTimer;
- (void)stopCurrentlyPlayingPhoto;
- (void)stopTimer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
