//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface IGStoryPreviewDeleteOptionView : UIView
{
    UIButton *_deleteButton;
    UILabel *_deleteLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(readonly, nonatomic) UILabel *deleteLabel; // @synthesize deleteLabel=_deleteLabel;
- (void)hideNUXLabelIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1 showNUXLabel:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setUpDeleteButton;
- (void)setUpDeleteLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
