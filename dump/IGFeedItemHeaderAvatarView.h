//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGProfilePictureImageView, IGStoryGradientRingView;

@interface IGFeedItemHeaderAvatarView : UIView
{
    IGProfilePictureImageView *_profilePic;
    id <IGFeedItemHeaderAvatarViewDelegate> _delegate;
    IGStoryGradientRingView *_gradientRing;
}

- (void).cxx_destruct;
- (void)configureRingWithShowRing:(_Bool)arg1 ringSpec:(id)arg2;
@property(nonatomic) __weak id <IGFeedItemHeaderAvatarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapAvatarView:(id)arg1;
@property(retain, nonatomic) IGStoryGradientRingView *gradientRing; // @synthesize gradientRing=_gradientRing;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) IGProfilePictureImageView *profilePic; // @synthesize profilePic=_profilePic;
- (void)updateViewWithUser:(id)arg1 showRing:(_Bool)arg2 ringSpec:(id)arg3 accessibilityLabel:(id)arg4;

@end

