//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGCommentComposingController, IGGrowingTextView, IGPlainTableView, NSArray, NSDictionary, NSString;

@protocol IGCommentComposingControllerDelegate <NSObject>
- (void)commentComposingController:(IGCommentComposingController *)arg1 commentTextViewDidBeginEditing:(IGGrowingTextView *)arg2;
- (void)commentComposingController:(IGCommentComposingController *)arg1 didReloadTableView:(IGPlainTableView *)arg2;
- (void)commentComposingController:(IGCommentComposingController *)arg1 didSucceedSendDirectWithUsernames:(NSArray *)arg2 threadID:(NSString *)arg3;
- (void)commentComposingController:(IGCommentComposingController *)arg1 didUpdateText:(NSString *)arg2;
- (void)commentComposingController:(IGCommentComposingController *)arg1 postComment:(NSString *)arg2 loggingExtraParams:(NSDictionary *)arg3;
- (void)commentComposingControllerDidSendDirect:(IGCommentComposingController *)arg1;
@end
