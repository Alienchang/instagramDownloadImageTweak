//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGFollowButtonDelegate.h"

@class IGFollowButton, IGUserContentView, NSString;

@interface IGSocialContextUserCell : UICollectionViewCell <IGFollowButtonDelegate>
{
    id <IGSocialContextCellDelegate> _delegate;
    IGFollowButton *_followButton;
    IGUserContentView *_userContentView;
}

- (void).cxx_destruct;
- (void)configureCellWithFeaturedUserInfo:(id)arg1 userSession:(id)arg2;
@property(nonatomic) __weak id <IGSocialContextCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGFollowButton *followButton; // @synthesize followButton=_followButton;
- (void)followButton:(id)arg1 tappedWithAction:(long long)arg2;
- (void)followButtonDidUpdateButtonState:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setUpSubViews;
@property(readonly, nonatomic) IGUserContentView *userContentView; // @synthesize userContentView=_userContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

