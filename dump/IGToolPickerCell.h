//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGPickerCellType.h"

@class NSString, UIColor, UIImageView, UILabel, UIView;

@interface IGToolPickerCell : UICollectionViewCell <IGPickerCellType>
{
    _Bool _showsHighlightIndicator;
    UIImageView *_iconView;
    UIColor *_highlightIndicatorColor;
    UILabel *_titleLabel;
    UIView *_circleView;
    UIView *_highlightIndicator;
}

+ (struct CGSize)cellSizeToFit:(struct CGSize)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *circleView; // @synthesize circleView=_circleView;
@property(readonly, nonatomic) UIView *highlightIndicator; // @synthesize highlightIndicator=_highlightIndicator;
@property(retain, nonatomic) UIColor *highlightIndicatorColor; // @synthesize highlightIndicatorColor=_highlightIndicatorColor;
@property(readonly, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
@property(nonatomic) _Bool showsHighlightIndicator; // @synthesize showsHighlightIndicator=_showsHighlightIndicator;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

