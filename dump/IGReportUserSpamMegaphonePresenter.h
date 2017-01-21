//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGGenericMegaphoneViewV2Delegate.h"
#import "IGMegaphonePresenterProtocol.h"

@class IGGenericMegaphoneViewV2, IGUser, IGUserSession, NSString;

@interface IGReportUserSpamMegaphonePresenter : NSObject <IGGenericMegaphoneViewV2Delegate, IGMegaphonePresenterProtocol>
{
    id <IGMegaphonePresenterDelegate> _delegate;
    IGGenericMegaphoneViewV2 *_megaphoneView;
    IGUser *_user;
    IGUserSession *_userSession;
    id <IGGenericMegaphoneLogger> _logger;
}

+ (unsigned long long)buttonActionFromString:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <IGMegaphonePresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithMegaphone:(id)arg1 user:(id)arg2 delegate:(id)arg3 logger:(id)arg4 userSession:(id)arg5;
- (void)logMegaphoneSeen;
@property(readonly, nonatomic) id <IGGenericMegaphoneLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) IGGenericMegaphoneViewV2 *megaphoneView; // @synthesize megaphoneView=_megaphoneView;
- (void)megaphoneView:(id)arg1 didSelectButton:(id)arg2;
- (void)megaphoneViewDidDismiss:(id)arg1;
- (void)megaphoneViewNeedsResize:(id)arg1;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (id)viewForMegaphone;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

