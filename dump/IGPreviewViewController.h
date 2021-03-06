//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGCustomViewController.h"
#import "UIViewControllerTransitioningDelegate.h"

@class FXBlurView, IGActionGroupView, NSArray, NSString, UIImageView, UIView;

@interface IGPreviewViewController : UIViewController <UIViewControllerTransitioningDelegate, IGCustomViewController>
{
    _Bool _isShowingArrowView;
    _Bool _isShowingActionView;
    _Bool _isActionViewShownBeforePanning;
    _Bool _stopProcessingPanEvents;
    _Bool _pendingDismiss;
    _Bool _viewDidAppearObserved;
    UIViewController *_contentViewControler;
    FXBlurView *_blurView;
    UIView *_movableView;
    UIView *_maskedView;
    IGActionGroupView *_actionView;
    UIImageView *_arrowView;
    double _panToHideOffset;
    NSArray *_actionItems;
    struct CGPoint _panningOrigin;
    struct CGPoint _panningViewOrigin;
    struct CGRect _sourceRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *actionItems; // @synthesize actionItems=_actionItems;
@property(retain, nonatomic) IGActionGroupView *actionView; // @synthesize actionView=_actionView;
- (id)analyticsModule;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) FXBlurView *blurView; // @synthesize blurView=_blurView;
@property(readonly, nonatomic) UIViewController *contentViewControler; // @synthesize contentViewControler=_contentViewControler;
- (void)didCancelPanFromExternalGestureRecognizer:(id)arg1;
- (void)didEndPanFromExternalGestureRecognizer:(id)arg1;
- (void)didPan:(id)arg1;
- (void)didPanFromExternalGestureRecognizer:(id)arg1;
- (void)didStartPanFromExternalGestureRecognizer:(id)arg1;
- (void)didTakeAction:(id)arg1;
- (void)didTap:(id)arg1;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)hideActionView;
- (id)ig_keyViewControllers;
- (struct CGPoint)inertialTranslationForTranslation:(struct CGPoint)arg1;
- (id)initWithContentViewController:(id)arg1 sourceRect:(struct CGRect)arg2;
@property(nonatomic) _Bool isActionViewShownBeforePanning; // @synthesize isActionViewShownBeforePanning=_isActionViewShownBeforePanning;
@property(nonatomic) _Bool isShowingActionView; // @synthesize isShowingActionView=_isShowingActionView;
@property(nonatomic) _Bool isShowingArrowView; // @synthesize isShowingArrowView=_isShowingArrowView;
@property(retain, nonatomic) UIView *maskedView; // @synthesize maskedView=_maskedView;
@property(retain, nonatomic) UIView *movableView; // @synthesize movableView=_movableView;
@property(nonatomic) double panToHideOffset; // @synthesize panToHideOffset=_panToHideOffset;
- (void)panViewsWithMovableViewOrigin:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;
@property(nonatomic) struct CGPoint panningOrigin; // @synthesize panningOrigin=_panningOrigin;
@property(nonatomic) struct CGPoint panningViewOrigin; // @synthesize panningViewOrigin=_panningViewOrigin;
@property(nonatomic) _Bool pendingDismiss; // @synthesize pendingDismiss=_pendingDismiss;
- (double)restingActionViewY;
- (double)restingMovableViewY;
- (void)restoreViewsToRestingPositionAnimatedCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool stopProcessingPanEvents; // @synthesize stopProcessingPanEvents=_stopProcessingPanEvents;
@property(nonatomic) _Bool viewDidAppearObserved; // @synthesize viewDidAppearObserved=_viewDidAppearObserved;
- (void)showActionView;
@property(readonly, nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

