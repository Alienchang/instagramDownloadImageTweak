//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGLocation, IGStoryFullscreenOverlayView, IGUser;

@protocol IGStoryFullscreenTappableOverlayDelegate <NSObject>
- (void)fullscreenOverlayDidDisplayTooltip:(IGStoryFullscreenOverlayView *)arg1;
- (void)fullscreenOverlayDidHideTooltip:(IGStoryFullscreenOverlayView *)arg1;
- (void)fullscreenOverlayDidTapMention:(IGStoryFullscreenOverlayView *)arg1 forUser:(IGUser *)arg2;
- (void)fullscreenOverlayDidTapSticker:(IGStoryFullscreenOverlayView *)arg1 forLocation:(IGLocation *)arg2;
@end

