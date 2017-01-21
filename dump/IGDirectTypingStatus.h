//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectTypingIndicatorViewModel.h"

@class IGUser, NSDate, NSString;

@interface IGDirectTypingStatus : NSObject <IGDirectTypingIndicatorViewModel>
{
    _Bool _isActive;
    NSString *_threadId;
    NSString *_clientId;
    NSDate *_sentDate;
    IGUser *_sender;
    double _lifetime;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (id)copyByDeactivating;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (double)height;
- (id)initWithSender:(id)arg1 threadId:(id)arg2 isActive:(_Bool)arg3 sentDate:(id)arg4 lifetime:(double)arg5;
@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double lifetime; // @synthesize lifetime=_lifetime;
- (id)realtimeUploadData;
@property(readonly, nonatomic) IGUser *sender; // @synthesize sender=_sender;
@property(readonly, nonatomic) NSDate *sentDate; // @synthesize sentDate=_sentDate;
- (id)text;
@property(readonly, copy, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
