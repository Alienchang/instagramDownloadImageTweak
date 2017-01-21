//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGGraphQLParsing.h"

@class NSString;

@interface IGSurveyToolsParser : NSObject <IGGraphQLParsing>
{
    NSString *_integrationPointID;
}

- (void).cxx_destruct;
- (id)getControlNodeWithControlNodeDict:(id)arg1 error:(id *)arg2;
- (id)initWithIntegrationPointID:(id)arg1;
@property(readonly, copy, nonatomic) NSString *integrationPointID; // @synthesize integrationPointID=_integrationPointID;
- (id)parseConfiguredQuestions:(id)arg1 error:(id *)arg2;
- (id)parseGraphQLResponseWithResult:(id)arg1 error:(id *)arg2;
- (id)parseResponseOptions:(id)arg1 error:(id *)arg2;
- (id)parseSurvey:(id)arg1 error:(id *)arg2;
- (id)parseSurveyBodypart:(id)arg1 error:(id *)arg2;
- (id)parseSurveyConfig:(id)arg1 error:(id *)arg2;
- (id)parseSurveyFlowDictionary:(id)arg1 error:(id *)arg2;
- (id)parseSurveyWithoutIntegrationPoint:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

