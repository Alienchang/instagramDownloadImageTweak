//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface IGExperimentGroup : NSObject
{
    NSString *_name;
    NSDictionary *_parameters;
}

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 parameters:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;

@end

