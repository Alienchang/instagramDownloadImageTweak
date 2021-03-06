//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGFilteredImageView, UIButton;

@interface IGSidecarSharePreviewCell : UICollectionViewCell
{
    id <IGSidecarSharePreviewCellDelegate> _delegate;
    IGFilteredImageView *_imageView;
    UIButton *_tagPeopleButton;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSidecarSharePreviewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGFilteredImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setTagLabel:(id)arg1;
@property(retain, nonatomic) UIButton *tagPeopleButton; // @synthesize tagPeopleButton=_tagPeopleButton;
- (void)tagPeopleButtonTapped:(id)arg1;

@end

