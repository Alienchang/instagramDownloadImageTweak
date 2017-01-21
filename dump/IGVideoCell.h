//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGFeedItemVideoViewAudioDelegate.h"
#import "IGFeedItemVideoViewDelegate.h"
#import "IGFeedItemVideoViewDoubleTapDelegate.h"
#import "IGFeedItemVideoViewSingleTapDelegate.h"

@class IGFeedItemVideoView, IGPostItem, IGZoomController, NSString;

@interface IGVideoCell : UICollectionViewCell <IGFeedItemVideoViewDelegate, IGFeedItemVideoViewAudioDelegate, IGFeedItemVideoViewDoubleTapDelegate, IGFeedItemVideoViewSingleTapDelegate>
{
    IGFeedItemVideoView *_videoView;
    IGPostItem *_post;
    id <IGVideoCellDelegate> _delegate;
    id <IGZoomControllerZoomingDelegate> _zoomingDelegate;
    IGZoomController *_zoomController;
}

- (void).cxx_destruct;
- (void)configureWithPostItem:(id)arg1 coverImageURL:(id)arg2 videoLogger:(id)arg3;
@property(nonatomic) __weak id <IGVideoCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didDoubleTapFeedItemVideoView:(id)arg1;
- (void)didSingleTapFeedItemVideoView:(id)arg1;
- (void)feedItemVideoView:(id)arg1 didToggleAudio:(_Bool)arg2;
- (void)feedItemVideoViewDidLoadImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) __weak IGPostItem *post; // @synthesize post=_post;
- (void)prepareForReuse;
@property(retain, nonatomic) IGFeedItemVideoView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) IGZoomController *zoomController; // @synthesize zoomController=_zoomController;
@property(nonatomic) __weak id <IGZoomControllerZoomingDelegate> zoomingDelegate; // @synthesize zoomingDelegate=_zoomingDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

