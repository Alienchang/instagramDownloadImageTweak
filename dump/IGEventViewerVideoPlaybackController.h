//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedItemVideoViewDelegate.h"
#import "IGVideoPlaybackControllerDelegate.h"
#import "IGVideoPlaybackControllerProgressDelegate.h"

@class IGEventViewerAnalyticsLogger, IGEventViewerPlaybackItem, IGFeedVideoManager, IGFeedVideoPlayer, IGVideoPlaybackController, NSString;

@interface IGEventViewerVideoPlaybackController : NSObject <IGFeedItemVideoViewDelegate, IGVideoPlaybackControllerDelegate, IGVideoPlaybackControllerProgressDelegate>
{
    _Bool _audioEnabled;
    _Bool _currentVideoDidPlayToEnd;
    id <IGEventViewerVideoPlaybackControllerDelegate> _delegate;
    IGEventViewerPlaybackItem *_playbackItem;
    IGFeedVideoManager *_feedVideoManager;
    IGEventViewerAnalyticsLogger *_logger;
    unsigned long long _videoRetryCount;
    double _currentVideoStartTime;
    IGVideoPlaybackController *_videoPlaybackController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(readonly, nonatomic) double currentDuration;
@property(readonly, nonatomic) IGFeedVideoPlayer *currentPlayer;
@property(readonly, nonatomic) double currentProgress;
@property(nonatomic) _Bool currentVideoDidPlayToEnd; // @synthesize currentVideoDidPlayToEnd=_currentVideoDidPlayToEnd;
@property(nonatomic) double currentVideoStartTime; // @synthesize currentVideoStartTime=_currentVideoStartTime;
@property(nonatomic) __weak id <IGEventViewerVideoPlaybackControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)feedItemVideoViewDidLoadImage:(id)arg1;
@property(readonly, nonatomic) IGFeedVideoManager *feedVideoManager; // @synthesize feedVideoManager=_feedVideoManager;
- (void)handleDidEndPlayingWithPlayer:(id)arg1;
- (id)initWithFeedVideoManager:(id)arg1 logger:(id)arg2;
- (id)initWithLogger:(id)arg1;
- (_Bool)isCurrentlyPlayingVideo;
@property(readonly, nonatomic) IGEventViewerAnalyticsLogger *logger; // @synthesize logger=_logger;
- (void)pauseCurrentlyPlayingVideo;
- (void)playVideoForItem:(id)arg1 startTime:(double)arg2;
@property(retain, nonatomic) IGEventViewerPlaybackItem *playbackItem; // @synthesize playbackItem=_playbackItem;
@property(nonatomic) unsigned long long videoRetryCount; // @synthesize videoRetryCount=_videoRetryCount;
- (void)stopCurrentlyPlayingVideo;
@property(readonly, nonatomic) IGVideoPlaybackController *videoPlaybackController; // @synthesize videoPlaybackController=_videoPlaybackController;
- (void)videoPlaybackController:(id)arg1 didBeginPlayingItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didEndPlayingItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didFailPlayingItem:(id)arg2 error:(id)arg3;
- (void)videoPlaybackController:(id)arg1 didPauseItem:(id)arg2 reason:(unsigned long long)arg3;
- (void)videoPlaybackController:(id)arg1 didRequestPlaybackItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didUpdatePlaybackProgressForItem:(id)arg2 progress:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

