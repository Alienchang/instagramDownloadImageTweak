//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFHTTPRequestSerializer.h"

@interface AFJSONRequestSerializer : AFHTTPRequestSerializer
{
    unsigned long long _format;
    unsigned long long _writingOptions;
}

+ (id)serializer;
+ (id)serializerWithWritingOptions:(unsigned long long)arg1;
@property(nonatomic) unsigned long long format; // @synthesize format=_format;
- (id)requestBySerializingRequest:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;
@property(nonatomic) unsigned long long writingOptions; // @synthesize writingOptions=_writingOptions;

@end
