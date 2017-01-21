//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectStoryViewerDelegate.h"
#import "IGStoryCreationViewControllerNavigationDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class IGAnnouncer, IGDirectStoryService, IGDirectStoryViewer, IGStoryViewerPresentationAnimationController, IGUserSession, NSString, UIViewController;

@interface IGDirectStoryPresentationManager : NSObject <IGDirectStoryViewerDelegate, IGStoryCreationViewControllerNavigationDelegate, UIViewControllerTransitioningDelegate>
{
    IGUserSession *_userSession;
    IGDirectStoryService *_storyService;
    UIViewController *_viewController;
    id <IGDirectStoryTrayCellProvider> _cellProvider;
    IGAnnouncer *_announcer;
    IGDirectStoryViewer *_presentedStoryViewer;
    IGStoryViewerPresentationAnimationController *_animationController;
}

- (void).cxx_destruct;
- (void)addListener:(id)arg1;
@property(retain, nonatomic) IGStoryViewerPresentationAnimationController *animationController; // @synthesize animationController=_animationController;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
@property(readonly, nonatomic) IGAnnouncer *announcer; // @synthesize announcer=_announcer;
@property(readonly, nonatomic) __weak id <IGDirectStoryTrayCellProvider> cellProvider; // @synthesize cellProvider=_cellProvider;
- (void)creationViewController:(id)arg1 didDismissWithExitPoint:(long long)arg2 destination:(long long)arg3 toDirectRecipients:(id)arg4;
- (void)creationViewController:(id)arg1 didEnterState:(long long)arg2;
- (void)creationViewController:(id)arg1 didFinishWithExitPoint:(long long)arg2 shouldAnimateTransition:(_Bool)arg3;
- (void)creationViewController:(id)arg1 didSharePostToStory:(_Bool)arg2 toDirect:(_Bool)arg3;
- (void)directStoryViewer:(id)arg1 didFocusOnMessage:(id)arg2;
- (void)directStoryViewerDidFinish:(id)arg1;
- (id)initWithUserSession:(id)arg1 storyService:(id)arg2 viewController:(id)arg3 cellProvider:(id)arg4;
- (void)presentController:(id)arg1 withProfileImageView:(id)arg2;
- (void)presentDirectStoryReplyController:(id)arg1 forTrayCell:(id)arg2;
- (void)presentDirectStoryViewer:(id)arg1 forTrayCell:(id)arg2;
@property(retain, nonatomic) IGDirectStoryViewer *presentedStoryViewer; // @synthesize presentedStoryViewer=_presentedStoryViewer;
- (void)removeListener:(id)arg1;
@property(readonly, nonatomic) IGDirectStoryService *storyService; // @synthesize storyService=_storyService;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

