//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGTip : NSObject
{
    long long _channelID;
    long long _tipID;
    NSString *_content;
    NSString *_location;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long channelID; // @synthesize channelID=_channelID;
@property(readonly, copy, nonatomic) NSString *content; // @synthesize content=_content;
- (id)initWithChannelID:(long long)arg1 withTipID:(long long)arg2 withContent:(id)arg3 withLocation:(id)arg4;
@property(readonly, copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(readonly, nonatomic) long long tipID; // @synthesize tipID=_tipID;

@end

