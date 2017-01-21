//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItem, UIButton;

@protocol IGUFIButtonBarViewProtocol <NSObject>
- (void)adjustViewWithConstraintSize:(struct CGSize)arg1;
@property(nonatomic) __weak id <IGUFIButtonBarViewDelegate> delegate;
- (void)resetUFIButtonView;
@property(readonly, nonatomic) UIButton *sendButton;
- (void)updateUFIButtonWithFeedItem:(IGFeedItem *)arg1 showCommentButton:(_Bool)arg2 showSendButton:(_Bool)arg3 showSaveButton:(_Bool)arg4 showShareButton:(_Bool)arg5 likeAnimated:(_Bool)arg6 saveAnimated:(_Bool)arg7;
@end

