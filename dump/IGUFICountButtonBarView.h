//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGUFIButtonBarViewProtocol.h"

@class NSString, UIButton;

@interface IGUFICountButtonBarView : UIView <IGUFIButtonBarViewProtocol>
{
    _Bool _showLikeInsteadView;
    _Bool _useShortFormatForCount;
    UIButton *_likeButton;
    UIButton *_commentButton;
    UIButton *_viewButton;
    UIButton *_sendButton;
    UIButton *_likeViewCountButton;
    UIButton *_commentCountButton;
    id <IGUFIButtonBarViewDelegate> _delegate;
    long long _colorType;
}

- (void).cxx_destruct;
- (void)adjustViewWithConstraintSize:(struct CGSize)arg1;
@property(nonatomic) long long colorType; // @synthesize colorType=_colorType;
@property(readonly, nonatomic) UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(readonly, nonatomic) UIButton *commentCountButton; // @synthesize commentCountButton=_commentCountButton;
@property(nonatomic) __weak id <IGUFIButtonBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)formattedStringFromNumber:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 colorType:(long long)arg2 showLikeInsteadView:(_Bool)arg3 useShortFormatForCount:(_Bool)arg4;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(readonly, nonatomic) UIButton *likeViewCountButton; // @synthesize likeViewCountButton=_likeViewCountButton;
- (void)onCommentButtonPressed:(id)arg1;
- (void)onLikeButtonPressed:(id)arg1;
- (void)onSendButtonPressed:(id)arg1;
- (void)onViewButtonPressed:(id)arg1;
- (void)oncommentCountButtonPressed:(id)arg1;
- (void)onlikeViewCountButtonPressed:(id)arg1;
- (void)resetUFIButtonView;
@property(readonly, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(nonatomic) _Bool showLikeInsteadView; // @synthesize showLikeInsteadView=_showLikeInsteadView;
@property(nonatomic) _Bool useShortFormatForCount; // @synthesize useShortFormatForCount=_useShortFormatForCount;
- (void)setupSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateTextButton:(id)arg1 withTitle:(id)arg2;
- (void)updateUFIButtonWithFeedItem:(id)arg1 showCommentButton:(_Bool)arg2 showSendButton:(_Bool)arg3 showSaveButton:(_Bool)arg4 showShareButton:(_Bool)arg5 likeAnimated:(_Bool)arg6 saveAnimated:(_Bool)arg7;
@property(readonly, nonatomic) UIButton *viewButton; // @synthesize viewButton=_viewButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
