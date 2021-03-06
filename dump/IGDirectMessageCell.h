//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGProfilePictureImageViewDelegate.h"

@class IGDirectMessageCellLayoutSpec, IGDirectMessageReactionsView, IGProfilePictureImageView, NSString, UITapGestureRecognizer;

@interface IGDirectMessageCell : UICollectionViewCell <IGProfilePictureImageViewDelegate>
{
    id <IGDirectMessageCellAvatarDelegate> _avatarDelegate;
    id <IGDirectMessageCellDoubleTapLikeDelegate> _likeDelegate;
    UITapGestureRecognizer *_doubleTapGesture;
    IGDirectMessageCellLayoutSpec *_layoutSpec;
    IGProfilePictureImageView *_avatarImageView;
    IGDirectMessageReactionsView *_reactionsView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectMessageCellAvatarDelegate> avatarDelegate; // @synthesize avatarDelegate=_avatarDelegate;
@property(readonly, nonatomic) IGProfilePictureImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (struct CGRect)avatarImageViewFrameFromLayoutSpec:(id)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)didReceiveDoubleTap:(id)arg1;
@property(readonly, nonatomic) UITapGestureRecognizer *doubleTapGesture; // @synthesize doubleTapGesture=_doubleTapGesture;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) IGDirectMessageCellLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
- (void)layoutSubviews;
@property(nonatomic) __weak id <IGDirectMessageCellDoubleTapLikeDelegate> likeDelegate; // @synthesize likeDelegate=_likeDelegate;
- (void)prepareForReuse;
- (void)profilePictureTapped:(id)arg1;
@property(readonly, nonatomic) IGDirectMessageReactionsView *reactionsView; // @synthesize reactionsView=_reactionsView;
- (struct CGRect)reactionsViewFrameFromLayoutSpec:(id)arg1;
- (void)setupAvatarImageView;
- (void)setupDoubleTapGesture;
- (void)setupReactionsView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

