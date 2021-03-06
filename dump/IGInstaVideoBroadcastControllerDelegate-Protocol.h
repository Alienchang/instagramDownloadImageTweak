//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGInstaVideoBroadcastController, IGInstaVideoBroadcastStats, NSError, NSString;

@protocol IGInstaVideoBroadcastControllerDelegate <NSObject>
- (void)instaVideoBroadcastController:(IGInstaVideoBroadcastController *)arg1 broadcastForSession:(NSString *)arg2 didFailWithError:(NSError *)arg3;
- (void)instaVideoBroadcastController:(IGInstaVideoBroadcastController *)arg1 createSessionDidFailWithError:(NSError *)arg2 shouldUseMessageFromError:(_Bool)arg3;
- (void)instaVideoBroadcastController:(IGInstaVideoBroadcastController *)arg1 didChangeBitrate:(double)arg2;
- (void)instaVideoBroadcastController:(IGInstaVideoBroadcastController *)arg1 didEndSession:(NSString *)arg2;
- (void)instaVideoBroadcastController:(IGInstaVideoBroadcastController *)arg1 didStartBroadcastForSession:(NSString *)arg2;
- (void)instaVideoBroadcastController:(IGInstaVideoBroadcastController *)arg1 didStartSession:(NSString *)arg2 withSpeedTestSuccess:(_Bool)arg3;
- (void)instaVideoBroadcastController:(IGInstaVideoBroadcastController *)arg1 didUpdateBroadcastWithStats:(IGInstaVideoBroadcastStats *)arg2;
- (void)instaVideoBroadcastController:(IGInstaVideoBroadcastController *)arg1 startBroadcastForSession:(NSString *)arg2 didFailWithError:(NSError *)arg3;
- (void)instaVideoBroadcastControllerDidLoseConnection:(IGInstaVideoBroadcastController *)arg1;
- (void)instaVideoBroadcastControllerDidReconnect:(IGInstaVideoBroadcastController *)arg1;
@end

