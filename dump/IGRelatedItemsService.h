//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGRelatedItemsService : NSObject
{
    id <IGAPIClient> _networker;
}

- (void).cxx_destruct;
- (id)JSONFromVisitedItems:(id)arg1;
- (id)JSONStringFromObject:(id)arg1;
- (id)initWithNetworker:(id)arg1;
@property(retain, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
- (void)requestRelatedItemsForItem:(id)arg1 visitedItems:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;

@end

