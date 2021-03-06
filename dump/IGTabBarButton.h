//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "IGSavePopoutViewDelegate.h"

@class NSString, UIImageView, UIView;

@interface IGTabBarButton : UIButton <IGSavePopoutViewDelegate>
{
    _Bool _needsAttention;
    _Bool _clearsAttentionWhenSelected;
    UIView *_profileIconView;
    UIView *_customView;
    UIImageView *_markView;
}

+ (id)cameraButton;
+ (id)exploreButton;
+ (id)homeButton;
+ (id)newsButton;
+ (id)profileButton;
+ (id)profileButtonWithProfilePictureImageView:(id)arg1;
+ (id)tabBarButtonWithIconNamed:(id)arg1 highlightedIconNamed:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool clearsAttentionWhenSelected; // @synthesize clearsAttentionWhenSelected=_clearsAttentionWhenSelected;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImageView *markView; // @synthesize markView=_markView;
@property(nonatomic) _Bool needsAttention; // @synthesize needsAttention=_needsAttention;
@property(retain, nonatomic) UIView *profileIconView; // @synthesize profileIconView=_profileIconView;
- (void)savePopoutViewDidFinishAnimation;
- (void)setSelected:(_Bool)arg1;
- (struct CGPoint)targetCenterWithPopoutView:(id)arg1;
- (void)updateMark;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

