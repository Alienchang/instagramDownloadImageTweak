//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGDirectSharingHelper : NSObject
{
}

+ (id)bfsFindSubviewOfClass:(Class)arg1 root:(id)arg2 maxLevel:(unsigned long long)arg3;
+ (id)findKeyboardViewForTextView:(id)arg1;
+ (id)firstEligibleDateForLikes;
+ (void)handleReshareFailureWithRecipient:(id)arg1;
+ (void)handleReshareSuccessWithThreadID:(id)arg1 userSession:(id)arg2 recipient:(id)arg3;
+ (_Bool)hasShownDoubleTapNuxForContent:(id)arg1;
+ (id)igSequence2Date:(id)arg1;
+ (_Bool)isBlankString:(id)arg1;
+ (_Bool)isContentDateEligibleForLikes:(id)arg1;
+ (_Bool)isReactable:(id)arg1;
+ (_Bool)isThreadNameTooLong:(id)arg1;
+ (_Bool)isThreadNameValid:(id)arg1;
+ (id)keyboardWindow;
+ (id)keysForUsers:(id)arg1;
+ (long long)lastVisibleContentIdx:(id)arg1;
+ (id)likedItemKeyForContent:(id)arg1;
+ (id)postsInContentArray:(id)arg1;
+ (id)previewImageURLProviderForThread:(id)arg1;
+ (id)seenUsersForContent:(id)arg1 thread:(id)arg2 currentUser:(id)arg3 pendingMode:(_Bool)arg4;
+ (id)serializedStringFromDictionary:(id)arg1;
+ (id)shortTimestampTextFromThread:(id)arg1;
+ (_Bool)showDoubleTapToLikeNuxForContent:(id)arg1 currentUser:(id)arg2;
+ (_Bool)showSeenstampFooterForIndexPath:(id)arg1 withContents:(id)arg2;
+ (_Bool)showTimestampHeaderForIndexPath:(id)arg1 withContents:(id)arg2;
+ (_Bool)showUsernameForIndexPath:(id)arg1 contents:(id)arg2 onlyHasMessageFromOneOtherUser:(_Bool)arg3 currentUser:(id)arg4;
+ (id)suppressedContentAfterContent:(id)arg1 allContent:(id)arg2;
+ (id)timestampTextFromThread:(id)arg1;
+ (void)updateUserDefaultsAfterLikeForContent:(id)arg1;

@end

