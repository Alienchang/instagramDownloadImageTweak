//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface IG4BAnalyticsEventBuilder : NSObject
{
    NSArray *_availableOptions;
    NSString *_component;
    NSDictionary *_defaultValues;
    NSString *_error;
    NSString *_event;
    NSDictionary *_selectedValues;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *availableOptions; // @synthesize availableOptions=_availableOptions;
- (id)build;
@property(copy, nonatomic) NSString *component; // @synthesize component=_component;
@property(copy, nonatomic) NSDictionary *defaultValues; // @synthesize defaultValues=_defaultValues;
@property(copy, nonatomic) NSString *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *event; // @synthesize event=_event;
@property(copy, nonatomic) NSDictionary *selectedValues; // @synthesize selectedValues=_selectedValues;

@end

