//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface IGSequence : NSObject <NSCopying>
{
    NSString *_sequenceString;
}

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithString:(id)arg1;
@property(readonly, copy, nonatomic) NSString *sequenceString; // @synthesize sequenceString=_sequenceString;

@end

