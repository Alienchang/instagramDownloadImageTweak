//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface IGDataUpload : NSObject
{
    NSData *_data;
    NSString *_mimeType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (id)initWithData:(id)arg1 mimeType:(id)arg2;
@property(readonly, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;

@end

