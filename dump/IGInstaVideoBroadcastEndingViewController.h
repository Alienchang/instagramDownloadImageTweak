//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGInstaVideoBroadcastEndingViewDelegate.h"
#import "IGInstaVideoBroadcastViewerListQueryServiceDelegate.h"

@class IGInstaVideoBroadcastEndingView, IGInstaVideoBroadcastViewerListQueryService, NSString;

@interface IGInstaVideoBroadcastEndingViewController : UIViewController <IGInstaVideoBroadcastEndingViewDelegate, IGInstaVideoBroadcastViewerListQueryServiceDelegate>
{
    id <IGInstaVideoBroadcastEndingViewControllerDelegate> _delegate;
    IGInstaVideoBroadcastEndingView *_contentView;
    IGInstaVideoBroadcastViewerListQueryService *_viewerListQueryService;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGInstaVideoBroadcastEndingView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <IGInstaVideoBroadcastEndingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doneButtonTappedInBroadcastEndingView:(id)arg1;
- (id)initWithBroadcastId:(id)arg1 networker:(id)arg2;
- (void)viewDidLoad;
@property(readonly, nonatomic) IGInstaVideoBroadcastViewerListQueryService *viewerListQueryService; // @synthesize viewerListQueryService=_viewerListQueryService;
- (void)viewerListQueryService:(id)arg1 didLoadFinalViewerList:(id)arg2 withFinalViewerCount:(long long)arg3;
- (void)viewerListQueryService:(id)arg1 didLoadViewerList:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

