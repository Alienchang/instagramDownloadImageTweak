//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGRetroRegistrationFindFriendsViewController, NSArray, NSURL, UIViewController;

@protocol IGRetroRegistrationFindFriendsViewControllerDelegate <NSObject>
- (void)findFriendsController:(IGRetroRegistrationFindFriendsViewController *)arg1 didLoadUsers:(NSArray *)arg2;
- (void)findFriendsController:(IGRetroRegistrationFindFriendsViewController *)arg1 wantsToDismissViewControllerAnimated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)findFriendsController:(IGRetroRegistrationFindFriendsViewController *)arg1 wantsToPresentViewController:(UIViewController *)arg2 animated:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)findFriendsController:(IGRetroRegistrationFindFriendsViewController *)arg1 wantsToUpdateToFollowCount:(long long)arg2;
- (void)findFriendsController:(IGRetroRegistrationFindFriendsViewController *)arg1 wasTappedOnURL:(NSURL *)arg2;
- (void)findFriendsControllerDidFollowTopAccounts:(IGRetroRegistrationFindFriendsViewController *)arg1;
- (void)findFriendsControllerNextButtonTapped:(IGRetroRegistrationFindFriendsViewController *)arg1;
- (void)findFriendsControllerSkipButtonTapped:(IGRetroRegistrationFindFriendsViewController *)arg1;
- (long long)registrationStepForFindFriendsViewController:(IGRetroRegistrationFindFriendsViewController *)arg1;
@end

