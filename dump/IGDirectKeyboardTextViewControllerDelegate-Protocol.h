//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectKeyboardTextViewController, NSString, UITextView;

@protocol IGDirectKeyboardTextViewControllerDelegate <NSObject>
- (void)keyboardTextViewController:(IGDirectKeyboardTextViewController *)arg1 didChangeContentHeightToHeight:(double)arg2;
- (void)keyboardTextViewController:(IGDirectKeyboardTextViewController *)arg1 didTapSendWithText:(NSString *)arg2;
- (void)keyboardTextViewControllerDidDismissCamera:(IGDirectKeyboardTextViewController *)arg1;
- (void)keyboardTextViewControllerDidTapCamera:(IGDirectKeyboardTextViewController *)arg1;
- (void)keyboardTextViewControllerDidTapCameraBackButton:(IGDirectKeyboardTextViewController *)arg1;
- (void)keyboardTextViewControllerDidTapGallery:(IGDirectKeyboardTextViewController *)arg1;
- (void)keyboardTextViewControllerDidTapLike:(IGDirectKeyboardTextViewController *)arg1;

@optional
- (_Bool)keyboardTextViewController:(IGDirectKeyboardTextViewController *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)keyboardTextViewController:(IGDirectKeyboardTextViewController *)arg1 showSelectAlbumController:(_Bool)arg2;
- (void)keyboardTextViewController:(IGDirectKeyboardTextViewController *)arg1 textViewDidBeginEditing:(UITextView *)arg2;
- (void)keyboardTextViewController:(IGDirectKeyboardTextViewController *)arg1 textViewDidChange:(UITextView *)arg2;
- (void)keyboardTextViewController:(IGDirectKeyboardTextViewController *)arg1 textViewDidEndEditing:(UITextView *)arg2;
- (void)keyboardTextViewController:(IGDirectKeyboardTextViewController *)arg1 textViewWillBeginEditing:(UITextView *)arg2;
@end

