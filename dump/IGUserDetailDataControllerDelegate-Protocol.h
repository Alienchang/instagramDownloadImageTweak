//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IGGenericMegaphone, IGUserDetailDataController, NSString;

@protocol IGUserDetailDataControllerDelegate
- (void)userDetailDataController:(IGUserDetailDataController *)arg1 didFailToFetchUserAdditionalDetailsWithErrorMessage:(NSString *)arg2 isHardError:(_Bool)arg3;
- (void)userDetailDataController:(IGUserDetailDataController *)arg1 didFetchUserAdditionalDetailsWithMegaphone:(IGGenericMegaphone *)arg2;
- (void)userDetailDataControllerDidFinishInitialFetch:(IGUserDetailDataController *)arg1;
- (void)userDetailDataControllerWillFetchUserStories:(IGUserDetailDataController *)arg1;
@end

