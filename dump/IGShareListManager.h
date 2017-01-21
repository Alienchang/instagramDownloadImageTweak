//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGShareServiceConfigureManagerDelegate.h"

@class IGShareServiceConfigureManager, IGUserSession, NSArray, NSString;

@interface IGShareListManager : NSObject <IGShareServiceConfigureManagerDelegate>
{
    _Bool _locationEnabled;
    _Bool _showFullList;
    id <IGShareListManagerDelegate> _delegate;
    long long _shortListCount;
    IGUserSession *_userSession;
    NSArray *_services;
    IGShareServiceConfigureManager *_configureManager;
}

+ (id)shareListManagerForComposition:(id)arg1 userSession:(id)arg2;
- (void).cxx_destruct;
- (id)analyticsExtra;
@property(retain, nonatomic) IGShareServiceConfigureManager *configureManager; // @synthesize configureManager=_configureManager;
- (void)configureStickyShareService:(id)arg1 withValue:(_Bool)arg2;
@property(nonatomic) __weak id <IGShareListManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithUserSession:(id)arg1 mediaType:(long long)arg2 locationAvailable:(_Bool)arg3;
@property(nonatomic) _Bool locationEnabled; // @synthesize locationEnabled=_locationEnabled;
- (long long)numberOfShareServices;
- (id)orderedServiceTypesForServiceList:(id)arg1;
- (void)promptForStickyShareIfNeeded;
- (_Bool)readyToShare;
- (void)reloadData;
- (_Bool)serviceWillShare:(id)arg1;
@property(retain, nonatomic) NSArray *services; // @synthesize services=_services;
- (void)setPresentationStyle:(long long)arg1;
@property(nonatomic) long long shortListCount; // @synthesize shortListCount=_shortListCount;
@property(nonatomic) _Bool showFullList; // @synthesize showFullList=_showFullList;
- (id)shareServiceAtIndex:(long long)arg1;
- (void)shareServiceConfigureManager:(id)arg1 didFinishLoginForService:(long long)arg2;
- (id)sharingInfo;
- (void)toggleShareServiceAtIndex:(long long)arg1;
- (void)updateShareServiceWillShare:(_Bool)arg1 index:(long long)arg2;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (id)viewControllerForShareConfiguration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
