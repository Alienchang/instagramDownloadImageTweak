//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIScrollView;

@protocol IGFeedScrollViewListener <NSObject>
- (void)scrollViewDidEndDragging:(UIScrollView *)arg1;
- (void)scrollViewDidEndScrolling:(UIScrollView *)arg1;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
- (void)scrollViewDidScrollToTop:(UIScrollView *)arg1;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg1;
- (void)scrollViewWillScrollNearBottom:(UIScrollView *)arg1;
- (void)scrollViewWillScrollNearTop:(UIScrollView *)arg1;
@end

