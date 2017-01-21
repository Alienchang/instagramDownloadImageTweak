//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGMediaViewerDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class IGDirectThreadCellFactory, NSString, UIImage, UIViewController;

@interface IGDirectMediaViewerTransitionManager : NSObject <IGMediaViewerDelegate, UIViewControllerTransitioningDelegate>
{
    _Bool _isPresenting;
    _Bool _crossDissolveForDismissal;
    _Bool _useCustomInitialDismissCenter;
    id <IGDirectMediaViewerTransitionManagerPresentationDelegate> _presentationDelegate;
    id <IGDirectMediaViewerTransitionManagerSnapshotDelegate> _snapshotDelegate;
    id <IGDirectMediaViewerProducer> _mediaViewerProducer;
    IGDirectThreadCellFactory *_cellFactory;
    UIViewController *_sourceController;
    id <IGDirectMediaViewerTransitionManagerDelegate> _delegate;
    UIImage *_shrinkedMediaSnapshot;
    UIImage *_bottomBarSnapshot;
    UIImage *_topBarSnapshot;
    struct CGPoint _initialCenterForDismiss;
}

- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
@property(retain, nonatomic) UIImage *bottomBarSnapshot; // @synthesize bottomBarSnapshot=_bottomBarSnapshot;
@property(readonly, nonatomic) __weak IGDirectThreadCellFactory *cellFactory; // @synthesize cellFactory=_cellFactory;
@property(nonatomic) _Bool crossDissolveForDismissal; // @synthesize crossDissolveForDismissal=_crossDissolveForDismissal;
- (void)dealloc;
@property(readonly, nonatomic) __weak id <IGDirectMediaViewerTransitionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didEndDraggingMediaViewer:(id)arg1 mediaCenter:(struct CGPoint)arg2;
- (void)didSwipeDownOnMediaViewer:(id)arg1;
- (void)didTapDismissButtonOnMediaViewer:(id)arg1;
- (void)didTapMediaViewer:(id)arg1;
- (void)dismissMediaViewer;
- (id)initWithMediaMessage:(id)arg1 cellFactory:(id)arg2 delegate:(id)arg3;
- (id)initWithMediaViewerProducer:(id)arg1 sourceController:(id)arg2 delegate:(id)arg3;
@property(nonatomic) struct CGPoint initialCenterForDismiss; // @synthesize initialCenterForDismiss=_initialCenterForDismiss;
@property(nonatomic) _Bool isPresenting; // @synthesize isPresenting=_isPresenting;
@property(readonly, nonatomic) id <IGDirectMediaViewerProducer> mediaViewerProducer; // @synthesize mediaViewerProducer=_mediaViewerProducer;
- (void)presentMediaViewer;
@property(nonatomic) __weak id <IGDirectMediaViewerTransitionManagerPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(retain, nonatomic) UIImage *shrinkedMediaSnapshot; // @synthesize shrinkedMediaSnapshot=_shrinkedMediaSnapshot;
@property(nonatomic) __weak id <IGDirectMediaViewerTransitionManagerSnapshotDelegate> snapshotDelegate; // @synthesize snapshotDelegate=_snapshotDelegate;
@property(retain, nonatomic) UIImage *topBarSnapshot; // @synthesize topBarSnapshot=_topBarSnapshot;
@property(nonatomic) _Bool useCustomInitialDismissCenter; // @synthesize useCustomInitialDismissCenter=_useCustomInitialDismissCenter;
- (void)snapshotBottomView;
- (void)snapshotMediaCellAndHideIfNeeded:(id)arg1;
@property(readonly, nonatomic) __weak UIViewController *sourceController; // @synthesize sourceController=_sourceController;
- (struct CGRect)sourceRectForMediaCell:(id)arg1 fullScreenVCRect:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

