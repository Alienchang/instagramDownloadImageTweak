//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectContentExpandableCell.h"

@class IGImageProgressView;

@interface IGDirectPhotoExpandableCell : IGDirectContentExpandableCell
{
    IGImageProgressView *_photoImageView;
}

- (void).cxx_destruct;
- (id)contentImage;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)mediaView;
@property(retain, nonatomic) IGImageProgressView *photoImageView; // @synthesize photoImageView=_photoImageView;
- (void)prepareForReuse;
- (void)setContent:(id)arg1 currentUser:(id)arg2;

@end
