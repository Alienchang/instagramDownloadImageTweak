//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGFeedItemHeaderViewFactory : NSObject
{
}

+ (void)configureAppHeader:(id)arg1 forFeedItem:(id)arg2 headerDelegate:(id)arg3 loggingDelegate:(id)arg4;
+ (void)configureItemHeader:(id)arg1 forFeedItem:(id)arg2 configuration:(id)arg3 supportStoryRing:(_Bool)arg4 pageCellState:(id)arg5 headerDelegate:(id)arg6 analyticsDelegate:(id)arg7 loggingDelegate:(id)arg8 userSession:(id)arg9;
+ (double)defaultHeaderHeight;
+ (id)headerForIndexPath:(id)arg1 collectionView:(id)arg2 feedItem:(id)arg3;
+ (id)headerForIndexPath:(id)arg1 collectionView:(id)arg2 feedItem:(id)arg3 configuration:(id)arg4 supportStoryRing:(_Bool)arg5 pageCellState:(id)arg6 itemHeaderDelegate:(id)arg7 appHeaderDelegate:(id)arg8 analyticsDelegate:(id)arg9 loggingDelegate:(id)arg10 userSession:(id)arg11;
+ (double)headerHeightForFeedItem:(id)arg1;
+ (void)registerHeaderViewsWithCollectionView:(id)arg1;

@end
