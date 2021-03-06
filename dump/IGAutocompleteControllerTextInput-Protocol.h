//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextInputTraits.h"

@class NSString, UITextPosition, UITextRange, UITextView;

@protocol IGAutocompleteControllerTextInput <UITextInputTraits>
- (UITextPosition *)beginningOfDocument;
- (UITextPosition *)closestPositionToPoint:(struct CGPoint)arg1;
- (UITextView *)inputTextView;
- (long long)offsetFromPosition:(UITextPosition *)arg1 toPosition:(UITextPosition *)arg2;
- (UITextPosition *)positionFromPosition:(UITextPosition *)arg1 offset:(long long)arg2;
- (struct _NSRange)selectedRange;
- (void)setSelectedTextRange:(UITextRange *)arg1;
- (void)setText:(NSString *)arg1;
- (NSString *)text;
- (UITextRange *)textRangeFromPosition:(UITextPosition *)arg1 toPosition:(UITextPosition *)arg2;
@end

