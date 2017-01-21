//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class IGGradientView, IGNavigationBar, IGTapButton, NSString, UIPanGestureRecognizer, UIScrollView, UITapGestureRecognizer;

@interface IGWatchAndActionView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _videoCollapsed;
    _Bool _videoWillCollapse;
    _Bool _isSwipingDown;
    _Bool _isDraggingActionView;
    _Bool _isVideoPlaying;
    id <IGWatchAndActionViewDelegate> _delegate;
    UIView *_videoView;
    UIView *_actionContentView;
    UIScrollView *_contentScrollView;
    UIView *_actionView;
    IGNavigationBar *_navigationBar;
    IGTapButton *_dismissVideoButton;
    UIPanGestureRecognizer *_watchAndActionPanGestureRecognizer;
    UITapGestureRecognizer *_actionViewTapGestureRecognizer;
    double _actionViewStartYPosition;
    double _initialActionViewStartYPosition;
    IGGradientView *_videoGradientOverlayView;
    UIView *_videoFadeInFadeOutOverlayView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *actionContentView; // @synthesize actionContentView=_actionContentView;
@property(readonly, nonatomic) UIView *actionView; // @synthesize actionView=_actionView;
@property(nonatomic) double actionViewStartYPosition; // @synthesize actionViewStartYPosition=_actionViewStartYPosition;
@property(readonly, nonatomic) UITapGestureRecognizer *actionViewTapGestureRecognizer; // @synthesize actionViewTapGestureRecognizer=_actionViewTapGestureRecognizer;
- (void)animateActionViewWithYOffset:(double)arg1;
- (id)animationProperties;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
- (id)createDismissButton;
@property(nonatomic) __weak id <IGWatchAndActionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSwipeDownVideo;
- (void)didTapDismissButton;
@property(readonly, nonatomic) IGTapButton *dismissVideoButton; // @synthesize dismissVideoButton=_dismissVideoButton;
- (void)dismissWatchAndActionView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithActionView:(id)arg1 navigationBar:(id)arg2;
@property(nonatomic) double initialActionViewStartYPosition; // @synthesize initialActionViewStartYPosition=_initialActionViewStartYPosition;
@property(nonatomic) _Bool isDraggingActionView; // @synthesize isDraggingActionView=_isDraggingActionView;
@property(nonatomic) _Bool isSwipingDown; // @synthesize isSwipingDown=_isSwipingDown;
@property(readonly, nonatomic, getter=isVideoCollapsed) _Bool videoCollapsed; // @synthesize videoCollapsed=_videoCollapsed;
@property(nonatomic) _Bool isVideoPlaying; // @synthesize isVideoPlaying=_isVideoPlaying;
- (void)layoutSubviews;
@property(readonly, nonatomic) IGNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void)onActionViewTap:(id)arg1;
- (void)onPan:(id)arg1;
@property(retain, nonatomic) UIView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic, getter=willVideoCollapse) _Bool videoWillCollapse; // @synthesize videoWillCollapse=_videoWillCollapse;
- (void)updateActionViewTitleBarHeight;
- (void)updateActionViewYOffsetWithDelta:(double)arg1;
- (void)updateUserInteractionState:(_Bool)arg1;
- (void)updateVideoFadeInFadeOutEffect;
- (void)updateVideoPlayState;
@property(readonly, nonatomic) UIView *videoFadeInFadeOutOverlayView; // @synthesize videoFadeInFadeOutOverlayView=_videoFadeInFadeOutOverlayView;
@property(readonly, nonatomic) IGGradientView *videoGradientOverlayView; // @synthesize videoGradientOverlayView=_videoGradientOverlayView;
@property(readonly, nonatomic) UIPanGestureRecognizer *watchAndActionPanGestureRecognizer; // @synthesize watchAndActionPanGestureRecognizer=_watchAndActionPanGestureRecognizer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

