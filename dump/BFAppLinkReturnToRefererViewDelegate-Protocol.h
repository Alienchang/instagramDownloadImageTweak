//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BFAppLink, BFAppLinkReturnToRefererView;

@protocol BFAppLinkReturnToRefererViewDelegate <NSObject>
- (void)returnToRefererViewDidTapInsideCloseButton:(BFAppLinkReturnToRefererView *)arg1;
- (void)returnToRefererViewDidTapInsideLink:(BFAppLinkReturnToRefererView *)arg1 link:(BFAppLink *)arg2;
@end

