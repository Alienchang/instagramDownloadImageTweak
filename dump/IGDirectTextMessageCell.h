//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectMessageCell.h"

#import "IGCoreTextLinkHandler.h"

@class IGDirectTextMessageBubbleView, NSString;

@interface IGDirectTextMessageCell : IGDirectMessageCell <IGCoreTextLinkHandler>
{
    IGDirectTextMessageBubbleView *_textBubbleView;
}

- (void).cxx_destruct;
- (void)configureWithViewModel:(id)arg1;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setupSubviews;
@property(readonly, nonatomic) IGDirectTextMessageBubbleView *textBubbleView; // @synthesize textBubbleView=_textBubbleView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

