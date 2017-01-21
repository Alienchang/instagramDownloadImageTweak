//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage, UIImageView, UILabel;

@interface IGNuxTapOnCameraView : UIView
{
    _Bool _isAnimating;
    UILabel *_textLabel;
    UIImage *_arrowImage;
    UIImageView *_arrowImageView;
}

+ (_Bool)shouldShowTapOnCameraNuxForUser:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(nonatomic) __weak UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
- (void)dealloc;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1 animateTranslatationWithCurrentOffset:(CDUnknownBlockType)arg2 animated:(_Bool)arg3;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (id)init;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
- (void)layoutSubviews;
@property(nonatomic) __weak UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void)showInView:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

