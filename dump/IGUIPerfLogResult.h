//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface IGUIPerfLogResult : NSObject
{
    NSDate *_stamps[32];
    NSString *_entryPoint;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *entryPoint; // @synthesize entryPoint=_entryPoint;
- (id)initWithEntryPoint:(id)arg1;
- (void)markEvent:(unsigned long long)arg1;
- (double)timeIntervalFromEvent:(unsigned long long)arg1 toEvent:(unsigned long long)arg2;

@end
