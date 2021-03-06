//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGLocation, UIImageView, UILabel;

@interface IGLocationSuggestionPlaceCell : UICollectionViewCell
{
    IGLocation *_location;
    UILabel *_textLabel;
    UIImageView *_imageView;
}

+ (id)fontForStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)cellBackgroundColor;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) IGLocation *location; // @synthesize location=_location;
- (void)setHighlighted:(_Bool)arg1;
- (void)setLocationTitle:(id)arg1;
- (void)setSizeStyle:(unsigned long long)arg1;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;

@end

