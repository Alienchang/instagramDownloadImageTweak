//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGSequence, NSString;

@interface IGRealtimeSubscription : NSObject
{
    id <IGRealtimeSubscriptionDelegate> _delegate;
    NSString *_topic;
    IGSequence *_sequence;
    NSString *_authToken;
    unsigned long long _status;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(nonatomic) __weak id <IGRealtimeSubscriptionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (id)initWithDictionary:(id)arg1;
@property(readonly, copy, nonatomic) IGSequence *sequence; // @synthesize sequence=_sequence;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (void)updateSequence:(id)arg1;
- (void)updateStatus:(unsigned long long)arg1;
- (void)updateWithSubscription:(id)arg1;

@end

