//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSNumberFormatter.h"

@class NSDate, NSDateFormatter;

@interface CPTTimeFormatter : NSNumberFormatter
{
    NSDateFormatter *dateFormatter;
    NSDate *referenceDate;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateFormatter:(id)arg1;
@property(copy, nonatomic) NSDate *referenceDate; // @synthesize referenceDate;
- (id)stringForObjectValue:(id)arg1;

@end

