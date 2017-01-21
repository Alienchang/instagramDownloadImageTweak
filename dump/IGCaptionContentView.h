//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGCommentContentViewProtocol.h"

@class IGCoreTextView, IGProfilePictureImageView, NSString;

@interface IGCaptionContentView : UIView <IGCommentContentViewProtocol>
{
    id <IGCoreTextLinkHandler> _coreTextLinkHandler;
    id <IGProfilePictureImageViewDelegate> _profilePicViewDelegate;
    IGProfilePictureImageView *_profilePic;
    IGCoreTextView *_coreTextView;
}

+ (double)heightForCommentViewModel:(id)arg1 width:(double)arg2;
+ (double)profilePictureColumnWidth;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGCoreTextLinkHandler> coreTextLinkHandler; // @synthesize coreTextLinkHandler=_coreTextLinkHandler;
@property(readonly, nonatomic) IGCoreTextView *coreTextView; // @synthesize coreTextView=_coreTextView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) IGProfilePictureImageView *profilePic; // @synthesize profilePic=_profilePic;
@property(nonatomic) __weak id <IGProfilePictureImageViewDelegate> profilePicViewDelegate; // @synthesize profilePicViewDelegate=_profilePicViewDelegate;
- (void)updateViewWithCommentViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

