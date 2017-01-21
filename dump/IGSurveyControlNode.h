//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface IGSurveyControlNode : NSObject
{
    NSString *_compositeControlNode;
    NSArray *_compositePageNodes;
    long long _branchDefaultPageIndex;
    long long _branchQuestionID;
    NSArray *_surveyBranchResonseMaps;
    long long _branchSubquestionIndex;
    long long _directNextPageIndex;
    NSString *_nodeType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long branchDefaultPageIndex; // @synthesize branchDefaultPageIndex=_branchDefaultPageIndex;
@property(readonly, nonatomic) long long branchQuestionID; // @synthesize branchQuestionID=_branchQuestionID;
@property(readonly, nonatomic) long long branchSubquestionIndex; // @synthesize branchSubquestionIndex=_branchSubquestionIndex;
@property(readonly, copy, nonatomic) NSString *compositeControlNode; // @synthesize compositeControlNode=_compositeControlNode;
@property(readonly, copy, nonatomic) NSArray *compositePageNodes; // @synthesize compositePageNodes=_compositePageNodes;
@property(readonly, nonatomic) long long directNextPageIndex; // @synthesize directNextPageIndex=_directNextPageIndex;
- (id)initWithCompositeControlNode:(id)arg1 compositePageNodes:(id)arg2 branchDefaultPageIndex:(long long)arg3 branchQuestionID:(long long)arg4 surveyBranchResonseMaps:(id)arg5 branchSubquestionIndex:(long long)arg6 directNextPageIndex:(id)arg7 nodeType:(id)arg8;
@property(readonly, copy, nonatomic) NSString *nodeType; // @synthesize nodeType=_nodeType;
@property(readonly, copy, nonatomic) NSArray *surveyBranchResonseMaps; // @synthesize surveyBranchResonseMaps=_surveyBranchResonseMaps;

@end

