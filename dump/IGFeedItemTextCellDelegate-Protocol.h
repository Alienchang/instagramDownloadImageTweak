//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGCoreTextView, IGFeedItemTextCell, NSString, NSURL;

@protocol IGFeedItemTextCellDelegate <NSObject>
- (void)feedItemTextCell:(IGFeedItemTextCell *)arg1 coreTextView:(IGCoreTextView *)arg2 didLongTapOnString:(NSString *)arg3 URL:(NSURL *)arg4;
- (void)feedItemTextCell:(IGFeedItemTextCell *)arg1 coreTextView:(IGCoreTextView *)arg2 didTapOnString:(NSString *)arg3 URL:(NSURL *)arg4;
@end
