//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JSONDecoder : NSObject
{
    struct JKParseState *parseState;
}

+ (id)decoder;
+ (id)decoderWithParseOptions:(unsigned long long)arg1;
- (void)clearCache;
- (void)dealloc;
- (id)init;
- (id)initWithParseOptions:(unsigned long long)arg1;
- (id)mutableObjectWithData:(id)arg1;
- (id)mutableObjectWithData:(id)arg1 error:(id *)arg2;
- (id)mutableObjectWithUTF8String:(const char *)arg1 length:(unsigned long long)arg2;
- (id)mutableObjectWithUTF8String:(const char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (id)objectWithData:(id)arg1;
- (id)objectWithData:(id)arg1 error:(id *)arg2;
- (id)objectWithString:(id)arg1;
- (id)objectWithString:(id)arg1 error:(id *)arg2;
- (id)objectWithUTF8String:(const char *)arg1 length:(unsigned long long)arg2;
- (id)objectWithUTF8String:(const char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (id)parseJSONData:(id)arg1;
- (id)parseJSONData:(id)arg1 error:(id *)arg2;
- (id)parseUTF8String:(const char *)arg1 length:(unsigned long long)arg2;
- (id)parseUTF8String:(const char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;

@end

