//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectContentCell.h"

#import "IGCoreTextLinkHandler.h"
#import "IGDirectContentUploadCell.h"

@class IGCoreTextView, IGDirectContentCellUploadDecorator, NSString;

@interface IGDirectCommentCell : IGDirectContentCell <IGCoreTextLinkHandler, IGDirectContentUploadCell>
{
    IGDirectContentCellUploadDecorator *_uploadDecorator;
    id <IGDirectContentUpoadCellDelegate> _delegate;
    IGCoreTextView *_commentTextView;
}

+ (id)commentStyle;
+ (double)commentWidthForFrameWidth:(double)arg1;
+ (id)emojiCommentStyle;
+ (_Bool)handlesExternalURLs;
+ (double)heightForCellWithCommentText:(id)arg1 forWidth:(double)arg2;
- (void).cxx_destruct;
- (id)cellDecorator;
@property(retain, nonatomic) IGCoreTextView *commentTextView; // @synthesize commentTextView=_commentTextView;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
@property(nonatomic) __weak id <IGDirectContentUpoadCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleUploadCellTap;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)performDelete;
- (void)performRetry;
- (void)prepareForReuse;
- (void)setCellDecorator:(id)arg1;
- (void)setContent:(id)arg1 currentUser:(id)arg2;
@property(retain, nonatomic) IGDirectContentCellUploadDecorator *uploadDecorator; // @synthesize uploadDecorator=_uploadDecorator;
- (void)showUploadFailedUI;
- (void)showUploadSendingUI;
- (struct CGRect)tapTargetFrame;
- (id)timestampText;
- (void)uploadDecoratorShowFailedUI:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
