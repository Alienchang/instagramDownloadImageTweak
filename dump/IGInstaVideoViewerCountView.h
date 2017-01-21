//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIImageView, UILabel;

@interface IGInstaVideoViewerCountView : UIControl
{
    long long _viewerCount;
    UIImageView *_eyeImageView;
    UILabel *_viewerCountLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *eyeImageView; // @synthesize eyeImageView=_eyeImageView;
- (id)initWithFrame:(struct CGRect)arg1 hasBackground:(_Bool)arg2;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(nonatomic) long long viewerCount; // @synthesize viewerCount=_viewerCount;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) UILabel *viewerCountLabel; // @synthesize viewerCountLabel=_viewerCountLabel;

@end
