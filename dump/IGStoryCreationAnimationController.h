//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGStoryCreationAnimationType.h"

@class IGStoryCameraViewController, NSString;

@interface IGStoryCreationAnimationController : NSObject <IGStoryCreationAnimationType>
{
    _Bool _presenting;
    IGStoryCameraViewController *_cameraViewController;
}

- (void).cxx_destruct;
- (void)adjustButton:(id)arg1 transform:(struct CGAffineTransform)arg2 alpha:(double)arg3;
- (void)animateTransition:(id)arg1;
@property(retain, nonatomic) IGStoryCameraViewController *cameraViewController; // @synthesize cameraViewController=_cameraViewController;
- (void)dismissTransition:(id)arg1;
- (void)presentationTransition:(id)arg1;
@property(nonatomic) _Bool presenting; // @synthesize presenting=_presenting;
- (_Bool)ravenEnabled;
- (void)showCameraFooterView:(id)arg1 rightHeaderItemView:(id)arg2 centerHeaderItemView:(id)arg3 leftHeaderItemView:(id)arg4 show:(_Bool)arg5;
- (void)showPreviewFooterView:(id)arg1 rightHeaderView:(id)arg2 centerHeaderView:(id)arg3 leftHeaderView:(id)arg4 show:(_Bool)arg5;
- (id)snapshotForPreviewFooterViewWithoutButtonAtCenter:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

