//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGSurveyQuestionController.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class IGGroupedTableView, IGSurveyQuestion, NSString;

@interface IGSurveyTextualEmotionController : NSObject <UITableViewDataSource, UITableViewDelegate, IGSurveyQuestionController>
{
    id <IGSurveyQuestionControllerDelegate> _delegate;
    IGSurveyQuestion *_question;
    IGGroupedTableView *_tableView;
}

- (void).cxx_destruct;
- (id)colorForAnswerAtIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)contentView;
- (void)dealloc;
@property(nonatomic) __weak id <IGSurveyQuestionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(retain, nonatomic) IGSurveyQuestion *question; // @synthesize question=_question;
@property(retain, nonatomic) IGGroupedTableView *tableView; // @synthesize tableView=_tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

