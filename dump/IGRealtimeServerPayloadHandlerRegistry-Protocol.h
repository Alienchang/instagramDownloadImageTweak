//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@protocol IGRealtimeServerPayloadHandlerRegistry <NSObject>
- (void)registerServerPayloadHandler:(id <IGRealtimeServerPayloadHandler>)arg1 forTopicPrefixes:(NSSet *)arg2 events:(NSSet *)arg3 actions:(NSSet *)arg4;
- (void)unregisterServerPayloadHandler:(id <IGRealtimeServerPayloadHandler>)arg1;
@end

