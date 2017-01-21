//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGBusinessGraphQLService, IGSurveyControlNode, IGSurveyErrorEvent, IGSurveyWithIntegrationPointInfo, IGUserSession, NSMutableArray;

@interface IGSurveyDataProvider : NSObject
{
    IGBusinessGraphQLService *_service;
    IGSurveyWithIntegrationPointInfo *_surveyData;
    long long _pageID;
    unsigned long long _questionID;
    NSMutableArray *_answers;
    NSMutableArray *_pages;
    IGSurveyErrorEvent *_surveyErrorEvent;
    IGSurveyControlNode *_controlNode;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)addAnswerAsArrayWithAnswers:(id)arg1 questionID:(id)arg2;
- (void)addAnswerAsDictionaryWithAnswers:(id)arg1 questionID:(id)arg2;
@property(copy, nonatomic) NSMutableArray *answers; // @synthesize answers=_answers;
@property(retain, nonatomic) IGSurveyControlNode *controlNode; // @synthesize controlNode=_controlNode;
- (id)eventStringForIGSurveyEvent:(unsigned long long)arg1;
- (id)getNextControllerWithOptionNumericValue:(id)arg1;
- (id)getQuestion;
- (id)getQuestionWithQuestionAtIndex:(long long)arg1;
- (_Bool)hasfinishedAllPages;
- (id)initWithUserSession:(id)arg1;
- (void)logImpression;
@property(nonatomic) long long pageID; // @synthesize pageID=_pageID;
@property(copy, nonatomic) NSMutableArray *pages; // @synthesize pages=_pages;
- (void)queryIGSurveyToolForTestingWithSurveyID:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failHandler:(CDUnknownBlockType)arg3;
- (void)queryIGSurveyToolWithIntegrationPointID:(id)arg1 withContextData:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failHandler:(CDUnknownBlockType)arg4;
@property(nonatomic) unsigned long long questionID; // @synthesize questionID=_questionID;
- (void)sendAnswers;
- (void)sendIGSurveyEventLoggingInfo:(unsigned long long)arg1;
@property(readonly, nonatomic) IGBusinessGraphQLService *service; // @synthesize service=_service;
@property(retain, nonatomic) IGSurveyWithIntegrationPointInfo *surveyData; // @synthesize surveyData=_surveyData;
@property(retain, nonatomic) IGSurveyErrorEvent *surveyErrorEvent; // @synthesize surveyErrorEvent=_surveyErrorEvent;
- (void)updatePageAndQuestionWithOptionNumericValue:(id)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

@end

