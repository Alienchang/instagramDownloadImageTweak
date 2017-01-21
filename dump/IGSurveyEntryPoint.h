//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGSurveyWelcomeViewDelegate.h"

@class IGSurveyDataProvider, IGSurveyWelcomeView, IGUserSession, NSString;

@interface IGSurveyEntryPoint : UIViewController <IGSurveyWelcomeViewDelegate>
{
    IGUserSession *_userSession;
    IGSurveyDataProvider *_dataProvider;
    IGSurveyWelcomeView *_welcomeView;
}

- (void).cxx_destruct;
- (id)analyticsModule;
@property(retain, nonatomic) IGSurveyDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
- (void)didTapCTAButtonButtonWithIGSurveyWelcomeViewView:(id)arg1;
- (void)didTapCloseButtonWithIGSurveyWelcomeViewView:(id)arg1;
- (id)initWithUserSession:(id)arg1;
@property(retain, nonatomic) IGSurveyWelcomeView *welcomeView; // @synthesize welcomeView=_welcomeView;
- (void)showSurveyWithIntegrationPointID:(id)arg1 contextDataKey:(id)arg2 contextDataValue:(id)arg3 userDefaults:(id)arg4;
- (void)showSurveyWithSurveyID:(id)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

