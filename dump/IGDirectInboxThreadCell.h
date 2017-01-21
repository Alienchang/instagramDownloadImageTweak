//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGCellSwipeActionManagerActionDelegate.h"

@class IGBlurredImageView, IGCellSwipeActionManager, IGDirectAvatarView, IGImageView, NSString, UIButton, UIImage, UIImageView, UILabel;

@interface IGDirectInboxThreadCell : UICollectionViewCell <IGCellSwipeActionManagerActionDelegate>
{
    _Bool _isOpen;
    _Bool _isEditable;
    _Bool _isSelected;
    id <IGDirectInboxThreadCellInteractionDelegate> _interactionDelegate;
    id <IGDirectInboxThreadCellSwipingDelegate> _swipeDelegate;
    UIImageView *_indicatorView;
    IGDirectAvatarView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_messageLabel;
    UILabel *_timestampLabel;
    UIImageView *_muteIcon;
    IGImageView *_mediaThumbnailView;
    IGBlurredImageView *_blurredMediaThumbnailView;
    IGCellSwipeActionManager *_cellSwipeActionManager;
    UIButton *_primaryButton;
    UIButton *_destructiveButton;
    UIImageView *_selectView;
    UIImage *_selectedMark;
    UIImage *_deselectedMark;
}

- (void).cxx_destruct;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityElements;
- (void)applyButtonConfig:(id)arg1;
@property(readonly, nonatomic) IGDirectAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) IGBlurredImageView *blurredMediaThumbnailView; // @synthesize blurredMediaThumbnailView=_blurredMediaThumbnailView;
@property(readonly, nonatomic) IGCellSwipeActionManager *cellSwipeActionManager; // @synthesize cellSwipeActionManager=_cellSwipeActionManager;
- (void)cellSwipeActionManagerDidHideActions:(id)arg1;
- (void)cellSwipeActionManagerDidShowActions:(id)arg1;
- (_Bool)cellSwipeActionManagerShouldShowActions:(id)arg1;
- (void)configureBlurThumbnailWithViewModel:(id)arg1;
- (void)configureButton:(id)arg1;
- (void)configureWithViewModel:(id)arg1;
@property(readonly, nonatomic) UIImage *deselectedMark; // @synthesize deselectedMark=_deselectedMark;
@property(readonly, nonatomic) UIButton *destructiveButton; // @synthesize destructiveButton=_destructiveButton;
- (void)didTapDestructiveButton:(id)arg1;
- (void)didTapPrimaryButton:(id)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
@property(readonly, nonatomic) UIImageView *indicatorView; // @synthesize indicatorView=_indicatorView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak id <IGDirectInboxThreadCellInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
- (_Bool)isAccessibilityElement;
@property(nonatomic) _Bool isEditable; // @synthesize isEditable=_isEditable;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (void)layoutSelectView;
- (void)layoutSubviews;
@property(readonly, nonatomic) IGImageView *mediaThumbnailView; // @synthesize mediaThumbnailView=_mediaThumbnailView;
@property(readonly, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) UIImageView *muteIcon; // @synthesize muteIcon=_muteIcon;
@property(readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void)peekActions;
- (void)prepareForReuse;
@property(readonly, nonatomic) UIButton *primaryButton; // @synthesize primaryButton=_primaryButton;
- (_Bool)ravenEnabled;
@property(readonly, nonatomic) UIImageView *selectView; // @synthesize selectView=_selectView;
@property(readonly, nonatomic) UIImage *selectedMark; // @synthesize selectedMark=_selectedMark;
@property(nonatomic) __weak id <IGDirectInboxThreadCellSwipingDelegate> swipeDelegate; // @synthesize swipeDelegate=_swipeDelegate;
- (void)setupAvatarView;
- (void)setupDestructiveButton;
- (void)setupIndicatorView;
- (void)setupMediaThumbnailView;
- (void)setupMessageLabel;
- (void)setupMuteIcon;
- (void)setupPrimaryButton;
- (void)setupSelectView;
- (void)setupSubviews;
- (void)setupSwipeActionButtons;
- (void)setupTimestampLabel;
- (void)setupUsernameLabel;
- (void)showActions:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UILabel *timestampLabel; // @synthesize timestampLabel=_timestampLabel;
- (void)updateSelectBox;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
