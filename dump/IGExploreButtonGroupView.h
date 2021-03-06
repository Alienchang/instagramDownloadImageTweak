//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGTextButton, UIControl;

@interface IGExploreButtonGroupView : UIView
{
    _Bool _usingRequestButton;
    _Bool _followingVisible;
    UIControl *_followButton;
    UIControl *_followingButton;
    UIControl *_requestedButton;
    IGTextButton *_dismissButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGTextButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(readonly, nonatomic) UIControl *followButton; // @synthesize followButton=_followButton;
@property(readonly, nonatomic) UIControl *followingButton; // @synthesize followingButton=_followingButton;
- (id)initShowingDismissButton:(_Bool)arg1;
@property(nonatomic, getter=isFollowingVisible) _Bool followingVisible; // @synthesize followingVisible=_followingVisible;
@property(nonatomic, getter=isUsingRequestButton) _Bool usingRequestButton; // @synthesize usingRequestButton=_usingRequestButton;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIControl *requestedButton; // @synthesize requestedButton=_requestedButton;
- (void)setFollowingVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

