//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGImageViewDelegate.h"
#import "IGSoundStateListenerDelegate.h"
#import "IGStatusBarHiding.h"
#import "IGStoryFullscreenHeaderViewDelegate.h"

@class IGFeedItemVideoView, IGImageView, IGPhoto, IGSoundStateListener, IGVideo, IGVideoPlaybackController, NSString, UIImage, UIView;

@interface IGMediaViewer : UIViewController <IGImageViewDelegate, IGSoundStateListenerDelegate, IGStatusBarHiding, IGStoryFullscreenHeaderViewDelegate>
{
    _Bool _statusBarHidden;
    id <IGMediaViewerDelegate> _delegate;
    id <IGMediaViewerUISource> _uiSource;
    UIView *_headerView;
    IGPhoto *_photo;
    IGVideo *_video;
    UIImage *_previewImage;
    IGVideoPlaybackController *_playbackController;
    IGSoundStateListener *_soundStateListener;
    IGImageView *_imageView;
    IGFeedItemVideoView *_videoView;
    id <IGMediaViewerAnalyticsLogging> _analyticsLogger;
    long long _contentMode;
    UIView *_footer;
    struct CGRect _mediaViewInitialFrame;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IGMediaViewerAnalyticsLogging> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
- (id)analyticsModule;
@property(readonly, nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
- (void)dealloc;
@property(nonatomic) __weak id <IGMediaViewerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didPan:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)didSwipe:(id)arg1;
- (void)didTap:(id)arg1;
@property(readonly, nonatomic) UIView *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void)headerViewDidTapDismiss:(id)arg1;
- (void)headerViewDidTapUser:(id)arg1;
@property(retain, nonatomic) IGImageView *imageView; // @synthesize imageView=_imageView;
- (void)imageViewFailedToLoadImage:(id)arg1 error:(id)arg2;
- (struct CGRect)imageViewFrame;
- (id)initWithPhoto:(id)arg1 video:(id)arg2 previewImage:(id)arg3 headerView:(id)arg4 contentMode:(long long)arg5;
@property(readonly, nonatomic) UIView *mediaView;
@property(nonatomic) struct CGRect mediaViewInitialFrame; // @synthesize mediaViewInitialFrame=_mediaViewInitialFrame;
@property(readonly, nonatomic) IGPhoto *photo; // @synthesize photo=_photo;
- (void)playVideoIfNeeded;
@property(readonly, nonatomic) IGVideoPlaybackController *playbackController; // @synthesize playbackController=_playbackController;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
@property(readonly, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
- (void)setImageViewContentMode;
@property(retain, nonatomic) IGSoundStateListener *soundStateListener; // @synthesize soundStateListener=_soundStateListener;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(nonatomic) __weak id <IGMediaViewerUISource> uiSource; // @synthesize uiSource=_uiSource;
@property(retain, nonatomic) IGFeedItemVideoView *videoView; // @synthesize videoView=_videoView;
- (void)setupGestures;
- (void)soundListenerDidUpdate:(id)arg1;
- (void)stopVideoIfNeeded;
@property(readonly, nonatomic) IGVideo *video; // @synthesize video=_video;
- (struct CGRect)videoFrame;
- (struct CGRect)videoViewFrame;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

