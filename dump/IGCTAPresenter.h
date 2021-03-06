//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGCTAPresentationViewDelegate.h"
#import "IGCTAPresenterProtocol.h"

@class IGCTAPresenterContext, IGFeedDirectResponseHandler, NSString, UIView<IGCTAPresentationViewType>;

@interface IGCTAPresenter : NSObject <IGCTAPresentationViewDelegate, IGCTAPresenterProtocol>
{
    IGCTAPresenterContext *_context;
    IGFeedDirectResponseHandler *_directResponseHandler;
    UIView<IGCTAPresentationViewType> *_viewForCTA;
}

+ (_Bool)shouldPresentCTAForLifeCycleTime:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGCTAPresenterContext *context; // @synthesize context=_context;
- (void)dealloc;
- (void)didTapCTAPresentationView:(id)arg1;
@property(readonly, nonatomic) IGFeedDirectResponseHandler *directResponseHandler; // @synthesize directResponseHandler=_directResponseHandler;
- (id)initWithContext:(id)arg1 analyticsModule:(id)arg2 userSession:(id)arg3;
- (void)onLeadGenFormSubmitted:(id)arg1;
@property(retain, nonatomic) UIView<IGCTAPresentationViewType> *viewForCTA; // @synthesize viewForCTA=_viewForCTA;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

