//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGStoryViewerViewController, NSString;

@protocol IGStoryViewerDelegate <NSObject>
- (void)storyViewer:(IGStoryViewerViewController *)arg1 didFocusOnReelWithPK:(NSString *)arg2;
- (void)storyViewerDidFinish:(IGStoryViewerViewController *)arg1;
@end

