//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGCoreTextView, IGLabel, IGProfilePictureImageView, NSString;

@interface IGRemoveFollowerHeaderView : UIView
{
    NSString *_username;
    IGProfilePictureImageView *_profilePic;
    IGLabel *_titleLabel;
    IGCoreTextView *_subtitleTextView;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) IGProfilePictureImageView *profilePic; // @synthesize profilePic=_profilePic;
- (id)removeFollowerSubtitle;
@property(retain, nonatomic) IGCoreTextView *subtitleTextView; // @synthesize subtitleTextView=_subtitleTextView;
@property(retain, nonatomic) IGLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setUser:(id)arg1;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void)setupProfilePicView;
- (void)setupSubtitleTextView;
- (void)setupTitleLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

