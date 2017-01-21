//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedToggleSectionControllerDelegate.h"

@class IGFeedSectionControllerLoggingComponents, IGFeedSectionControllerNoOpTrackingComponents, IGFeedSectionControllerTrackingComponents, IGGridCollectionViewLayout, IGToggleFeedCollectionViewLayoutManagerToolbox, IGVerticalCollectionViewLayout, NSString;

@interface IGToggleFeedCollectionViewLayoutManager : NSObject <IGFeedToggleSectionControllerDelegate>
{
    long long _layoutType;
    id <IGToggleFeedCollectionViewLayoutManagerDelegate> _delegate;
    IGToggleFeedCollectionViewLayoutManagerToolbox *_toolbox;
    IGFeedSectionControllerLoggingComponents *_controllerComponents;
    IGFeedSectionControllerTrackingComponents *_listTrackingComponents;
    IGFeedSectionControllerNoOpTrackingComponents *_noOpTrackingComponents;
    IGVerticalCollectionViewLayout *_listCollectionViewLayout;
    IGGridCollectionViewLayout *_gridCollectionViewLayout;
}

- (void).cxx_destruct;
- (void)adapterDidCompleteUpdate;
@property(retain, nonatomic) IGFeedSectionControllerLoggingComponents *controllerComponents; // @synthesize controllerComponents=_controllerComponents;
@property(nonatomic) __weak id <IGToggleFeedCollectionViewLayoutManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)feedToggleSectionController:(id)arg1 didSelectButtonType:(long long)arg2;
@property(retain, nonatomic) IGGridCollectionViewLayout *gridCollectionViewLayout; // @synthesize gridCollectionViewLayout=_gridCollectionViewLayout;
- (id)initWithLayoutType:(long long)arg1 toolbox:(id)arg2 userSession:(id)arg3;
@property(nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
@property(retain, nonatomic) IGVerticalCollectionViewLayout *listCollectionViewLayout; // @synthesize listCollectionViewLayout=_listCollectionViewLayout;
@property(retain, nonatomic) IGFeedSectionControllerTrackingComponents *listTrackingComponents; // @synthesize listTrackingComponents=_listTrackingComponents;
- (id)newFeedSectionController;
@property(retain, nonatomic) IGFeedSectionControllerNoOpTrackingComponents *noOpTrackingComponents; // @synthesize noOpTrackingComponents=_noOpTrackingComponents;
@property(retain, nonatomic) IGToggleFeedCollectionViewLayoutManagerToolbox *toolbox; // @synthesize toolbox=_toolbox;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
