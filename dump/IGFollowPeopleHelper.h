//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGFollowPeopleHelper : NSObject
{
}

+ (id)buildSimilarUsersRequestWithUserSession:(id)arg1;
+ (void)logEvent:(id)arg1 userID:(id)arg2 position:(unsigned long long)arg3 module:(id)arg4 view:(id)arg5 algorithm:(id)arg6 networker:(id)arg7;
+ (void)sendChainingDismissForUser:(id)arg1 chainignUser:(id)arg2 networker:(id)arg3;
+ (void)sendDismissForUserID:(id)arg1 algorithm:(id)arg2 networker:(id)arg3;

@end

