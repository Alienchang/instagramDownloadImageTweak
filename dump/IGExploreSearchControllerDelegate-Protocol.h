//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGSearchViewController, UIViewController;

@protocol IGExploreSearchControllerDelegate <NSObject>
- (void)searchController:(IGSearchViewController *)arg1 switchedToViewController:(UIViewController *)arg2;
- (void)searchControllerCancelButtonTapped:(IGSearchViewController *)arg1;
- (void)searchControllerChannelHomeTapped:(IGSearchViewController *)arg1;
- (void)searchControllerDirectIconTapped:(IGSearchViewController *)arg1;
- (void)searchControllerPeopleIconTapped:(IGSearchViewController *)arg1;
- (void)searchControllerSearchBarTapped:(IGSearchViewController *)arg1;
@end

