//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSString;

@interface IGRealtimeMessageInfo : NSObject
{
    NSDate *_timestamp;
    id _message;
    unsigned long long _type;
    NSString *_operationType;
    NSString *_path;
    NSDictionary *_dict;
}

+ (id)IGRealtimeMessageInfoTypeToString:(unsigned long long)arg1;
+ (id)timestampToString:(id)arg1;
- (void).cxx_destruct;
- (id)description;
@property(retain, nonatomic) NSDictionary *dict; // @synthesize dict=_dict;
- (id)initWithMessage:(id)arg1 atTimestamp:(id)arg2 withType:(unsigned long long)arg3 withOperationType:(id)arg4 withPath:(id)arg5;
@property(readonly, nonatomic) id message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *operationType; // @synthesize operationType=_operationType;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

@end
