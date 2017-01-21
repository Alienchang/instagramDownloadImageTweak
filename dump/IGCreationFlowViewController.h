//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGMediaCaptureViewControllerDelegate.h"
#import "IGPhotoEditorDelegate.h"
#import "IGShareViewControllerDelegate.h"
#import "IGVideoEditorDelegate.h"

@class IGCaptureFlowViewModel, IGMediaCaptureViewController, IGMediaMetadata, IGNavigationController, IGUserSession, NSString;

@interface IGCreationFlowViewController : UIViewController <IGMediaCaptureViewControllerDelegate, IGPhotoEditorDelegate, IGVideoEditorDelegate, IGShareViewControllerDelegate>
{
    unsigned long long _initialCreationFlowStep;
    unsigned long long _currentCreationFlowStep;
    IGMediaMetadata *_initialMetadata;
    IGCaptureFlowViewModel *_captureFlowViewModel;
    IGUserSession *_userSession;
    IGNavigationController *_navController;
    IGMediaCaptureViewController *_mediaCaptureViewController;
    _Bool _sharePresentedFromDraft;
    id <IGCreationFlowControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGCreationFlowControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)handlesTransitionToEditor;
- (id)initWithCreationFlowStep:(unsigned long long)arg1 mediaMetadata:(id)arg2 captureFlowViewModel:(id)arg3 userSession:(id)arg4;
- (id)initialStepViewController;
- (void)mediaCaptureViewController:(id)arg1 didProduceComposition:(id)arg2;
- (void)mediaCaptureViewController:(id)arg1 didProducePhoto:(id)arg2 withMediaMetadata:(id)arg3 cropRect:(struct CGRect)arg4 fromOrigin:(long long)arg5;
- (void)mediaCaptureViewController:(id)arg1 didProduceVideoComposition:(id)arg2 fromOrigin:(long long)arg3;
- (void)mediaCaptureViewController:(id)arg1 didSelectDraft:(id)arg2;
- (void)mediaCaptureViewControllerDidCancel:(id)arg1;
- (void)photoEditor:(id)arg1 didProduceDraft:(id)arg2;
- (void)photoEditor:(id)arg1 didProducePhotoWithMediaMetadata:(id)arg2 shareListManager:(id)arg3;
- (void)photoEditorDidCancel:(id)arg1;
- (void)popToAssetSelectionWithDraft:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)pushShareScreenWithMediaMetadata:(id)arg1 shareListManager:(id)arg2;
- (void)pushViewControllersForDraft:(id)arg1;
- (void)shareViewControllerDidAppear:(id)arg1;
- (void)shareViewControllerDidCancel:(id)arg1;
- (void)shareViewControllerWillFinish:(id)arg1;
- (void)videoEditor:(id)arg1 didProduceDraft:(id)arg2;
- (void)videoEditor:(id)arg1 didProduceVideoWithMetadata:(id)arg2 shareListManager:(id)arg3;
- (void)videoEditorDidCancel:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

