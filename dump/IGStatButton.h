//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UILabel;

@interface IGStatButton : UIControl
{
    UILabel *_countLabel;
    UILabel *_nameLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void)setCount:(id)arg1;
- (void)setCount:(id)arg1 formattingStyle:(long long)arg2;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setName:(id)arg1;
- (void)updateTextLabelsForCurrentControlState;

@end

