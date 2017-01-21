//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface IGStreamingVideoMetaDataCacheEntry : NSObject <NSCoding>
{
    NSString *_contentType;
    long long _contentLength;
}

+ (id)parseFromNSData:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long contentLength; // @synthesize contentLength=_contentLength;
@property(readonly, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentType:(id)arg1 contentLength:(long long)arg2;

@end

