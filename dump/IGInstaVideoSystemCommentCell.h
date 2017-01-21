//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel;

@interface IGInstaVideoSystemCommentCell : UITableViewCell
{
    UILabel *_label;
    double _sidePadding;
}

+ (double)cellHeightForSystemCommentWithText:(id)arg1 sidePadding:(double)arg2 thatFits:(struct CGSize)arg3;
+ (id)labelFont;
- (void).cxx_destruct;
- (void)configureWithText:(id)arg1 sidePadding:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)layoutSubviews;
@property(nonatomic) double sidePadding; // @synthesize sidePadding=_sidePadding;

@end

