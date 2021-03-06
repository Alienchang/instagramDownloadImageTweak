//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGInviteButton, IGMediaThumbnailView, NSString, UILabel, UIView;

@interface IGInviteFBFriendCell : UICollectionViewCell
{
    id <IGInviteFBFriendCellDelegate> _delete;
    IGMediaThumbnailView *_profilePictureView;
    UILabel *_nameLabel;
    IGInviteButton *_inviteButton;
    UIView *_bottomLine;
    NSString *_fbID;
    long long _inviteStatus;
}

+ (double)defaulCellHeight;
+ (double)defaulCellWidth;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
- (void)configureCellWithFBUserInfo:(id)arg1;
- (id)createNameLabel;
@property(nonatomic) __weak id <IGInviteFBFriendCellDelegate> delete; // @synthesize delete=_delete;
- (void)didTapInviteButton;
@property(readonly, copy, nonatomic) NSString *fbID; // @synthesize fbID=_fbID;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) IGInviteButton *inviteButton; // @synthesize inviteButton=_inviteButton;
@property(nonatomic) long long inviteStatus; // @synthesize inviteStatus=_inviteStatus;
- (void)layoutSubviews;
@property(readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, nonatomic) IGMediaThumbnailView *profilePictureView; // @synthesize profilePictureView=_profilePictureView;
- (void)updateInviteStatus:(long long)arg1;

@end

