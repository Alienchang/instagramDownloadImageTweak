//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGSurveyAnswer, IGSurveyQuestion, UIImageView, UILabel;

@interface IGSurveyResultView : UIView
{
    IGSurveyQuestion *_question;
    IGSurveyAnswer *_answer;
    UIImageView *_checkmarkImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGSurveyAnswer *answer; // @synthesize answer=_answer;
@property(retain, nonatomic) UIImageView *checkmarkImageView; // @synthesize checkmarkImageView=_checkmarkImageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) IGSurveyQuestion *question; // @synthesize question=_question;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateCheckmark;

@end

