//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGAnalyticsEvent, IGUserSession;

@interface IGSurveyErrorEvent : NSObject
{
    IGAnalyticsEvent *_event;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGAnalyticsEvent *event; // @synthesize event=_event;
- (id)initWithUserSession:(id)arg1;
- (void)sendLogWithError:(id)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

@end

