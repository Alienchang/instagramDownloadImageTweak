//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGStoryOverviewViewController;

@protocol IGStoryOverviewDelegate <NSObject>
- (void)storyOverviewControllerWillDeletePost:(IGStoryOverviewViewController *)arg1;
- (void)storyOverviewControllerWillReportPost:(IGStoryOverviewViewController *)arg1;
- (void)storyOverviewControllerWillSFSLTPost:(IGStoryOverviewViewController *)arg1;
- (void)storyOverviewControllerWillSavePost:(IGStoryOverviewViewController *)arg1;
- (void)storyOverviewControllerWillSaveWholeStory:(IGStoryOverviewViewController *)arg1;
- (void)storyOverviewControllerWillSharePost:(IGStoryOverviewViewController *)arg1;
- (void)storyOverviewDidFinish:(IGStoryOverviewViewController *)arg1;
@end

