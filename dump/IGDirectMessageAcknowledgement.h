//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface IGDirectMessageAcknowledgement : NSObject
{
    NSString *_itemID;
    NSString *_threadID;
    NSString *_clientContext;
    long long _statusCode;
    NSDictionary *_rawResponse;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *clientContext; // @synthesize clientContext=_clientContext;
- (id)description;
- (id)initWithItemID:(id)arg1 threadID:(id)arg2 clientContext:(id)arg3 statusCode:(long long)arg4 rawResponse:(id)arg5;
@property(readonly, copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(readonly, copy, nonatomic) NSDictionary *rawResponse; // @synthesize rawResponse=_rawResponse;
@property(readonly, nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, copy, nonatomic) NSString *threadID; // @synthesize threadID=_threadID;

@end

