//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGWatchAndActionView;

@protocol IGWatchAndActionViewDelegate <NSObject>
- (void)watchAndActionView:(IGWatchAndActionView *)arg1 setPlayVideo:(_Bool)arg2;
- (void)watchAndActionViewDidCollapseVideoView:(_Bool)arg1;
- (void)watchAndActionViewDidDrag:(_Bool)arg1;
- (void)watchAndActionViewDidSwipeDownVideo;
- (void)watchAndActionViewDidTap;
- (void)watchAndActionViewDidTapDismissVideoButton;
- (void)watchAndActionViewWillCollapseVideoView:(_Bool)arg1;
- (void)watchAndActionViewWillExpandVideoView:(_Bool)arg1;
@end

