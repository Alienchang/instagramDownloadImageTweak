//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectMessageCellLayoutSpec, IGDirectMessageViewModelMetadata, IGStyledString, NSString, UIColor;

@interface IGDirectTextMessageBubbleViewModel : NSObject
{
    IGDirectMessageViewModelMetadata *_viewModelMetadata;
    NSString *_text;
    long long _textType;
    IGStyledString *_styledText;
    struct CGSize _textViewSize;
}

- (void).cxx_destruct;
- (_Bool)allowsExternalURLs;
@property(readonly, nonatomic) UIColor *bubbleBorderColor;
@property(readonly, nonatomic) double bubbleBorderWidth;
@property(readonly, nonatomic) UIColor *bubbleColor;
@property(readonly, nonatomic) struct UIEdgeInsets bubbleInsets;
- (id)defaultTextStyle;
- (id)description;
- (id)emojiTextStyle;
- (unsigned long long)hash;
- (id)initWithViewModelMetadata:(id)arg1 text:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isTextOnlyEmoji;
@property(readonly, nonatomic) IGDirectMessageCellLayoutSpec *layoutSpec;
@property(retain, nonatomic) IGStyledString *styledText; // @synthesize styledText=_styledText;
@property(nonatomic) struct CGSize textViewSize; // @synthesize textViewSize=_textViewSize;
- (id)styleWithFontSize:(double)arg1 lineHeight:(double)arg2;
- (id)styledStringFromText:(id)arg1;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) double textBubbleHeight;
@property(readonly, nonatomic) long long textType; // @synthesize textType=_textType;
@property(readonly, nonatomic) IGDirectMessageViewModelMetadata *viewModelMetadata; // @synthesize viewModelMetadata=_viewModelMetadata;

@end
