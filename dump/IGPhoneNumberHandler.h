//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGPhoneNumberHandler : NSObject
{
    NSString *_number;
}

- (void).cxx_destruct;
- (_Bool)callWithConfirmation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithNumber:(id)arg1;
@property(readonly, copy, nonatomic) NSString *number; // @synthesize number=_number;
- (_Bool)sendSms;

@end
