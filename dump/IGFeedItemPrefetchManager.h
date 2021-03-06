//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGBulkMediaRequestManager, IGUserSession;

@interface IGFeedItemPrefetchManager : NSObject
{
    IGBulkMediaRequestManager *_requestManager;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)eagerLoadMediaForPosts:(id)arg1 withConfiguration:(id)arg2;
- (id)initWithUserSession:(id)arg1;
- (id)initWithUserSession:(id)arg1 requestManager:(id)arg2;
@property(retain, nonatomic) IGBulkMediaRequestManager *requestManager; // @synthesize requestManager=_requestManager;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

@end

