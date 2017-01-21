//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGRealtimePatchEvent, IGRealtimeSubscription;

@protocol IGRealtimeSubscriptionDelegate <NSObject>
- (void)subscription:(IGRealtimeSubscription *)arg1 didReceivePatchEvent:(IGRealtimePatchEvent *)arg2;
- (void)subscriptionRequiresRefresh:(IGRealtimeSubscription *)arg1;

@optional
- (void)subscription:(IGRealtimeSubscription *)arg1 statusDidChange:(unsigned long long)arg2;
@end
