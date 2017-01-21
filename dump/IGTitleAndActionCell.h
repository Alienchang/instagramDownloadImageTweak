//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CALayer, IGLabel, UIButton;

@interface IGTitleAndActionCell : UICollectionViewCell
{
    id <IGTitleAndActionCellDelegate> _delegate;
    IGLabel *_textLabel;
    CALayer *_topSeparator;
    CALayer *_bottomSeparator;
    UIButton *_actionButton;
    struct UIEdgeInsets _labelViewInsets;
    struct UIEdgeInsets _separatorInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
- (void)applyConfig:(id)arg1;
@property(readonly, nonatomic) CALayer *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
- (void)configureWithViewModel:(id)arg1;
@property(nonatomic) __weak id <IGTitleAndActionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) struct UIEdgeInsets labelViewInsets; // @synthesize labelViewInsets=_labelViewInsets;
- (void)layoutSubviews;
@property(nonatomic) struct UIEdgeInsets separatorInsets; // @synthesize separatorInsets=_separatorInsets;
@property(readonly, nonatomic) IGLabel *textLabel; // @synthesize textLabel=_textLabel;
- (void)titleAndActionCell:(id)arg1 didTapActionButton:(id)arg2;
@property(readonly, nonatomic) CALayer *topSeparator; // @synthesize topSeparator=_topSeparator;
- (void)updateTextLabelWithConfig:(id)arg1;

@end
