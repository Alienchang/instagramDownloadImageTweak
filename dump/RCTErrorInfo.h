//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface RCTErrorInfo : NSObject
{
    NSString *_errorMessage;
    NSArray *_stack;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
- (id)initWithErrorMessage:(id)arg1 stack:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *stack; // @synthesize stack=_stack;

@end

