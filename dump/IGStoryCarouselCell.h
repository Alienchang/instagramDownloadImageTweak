//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGGradientView, IGImageView, NSURL, UIImage, UIImageView, UILabel;

@interface IGStoryCarouselCell : UICollectionViewCell
{
    _Bool _isFailedUpload;
    long long _viewerCount;
    NSURL *_imageURL;
    UIImage *_preloadedImage;
    IGImageView *_imageView;
    IGGradientView *_bottomGradient;
    UIImageView *_eyeImageView;
    UILabel *_viewersLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGGradientView *bottomGradient; // @synthesize bottomGradient=_bottomGradient;
@property(readonly, nonatomic) UIImageView *eyeImageView; // @synthesize eyeImageView=_eyeImageView;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) IGImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isFailedUpload; // @synthesize isFailedUpload=_isFailedUpload;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImage *preloadedImage; // @synthesize preloadedImage=_preloadedImage;
@property(nonatomic) long long viewerCount; // @synthesize viewerCount=_viewerCount;
@property(readonly, nonatomic) UILabel *viewersLabel; // @synthesize viewersLabel=_viewersLabel;

@end

