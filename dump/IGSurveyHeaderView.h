//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface IGSurveyHeaderView : UIView
{
    UILabel *_titleLabel;
    UIView *_topLine;
    UIView *_bottomLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
- (void)commonInitWithTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;
- (void)layoutSubviews;
- (double)lineWidth;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

