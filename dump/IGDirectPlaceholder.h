//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectContent.h"

#import "IGDirectMessageProtocol.h"

@class NSString;

@interface IGDirectPlaceholder : IGDirectContent <IGDirectMessageProtocol>
{
    NSString *_title;
    NSString *_message;
}

- (void).cxx_destruct;
- (id)actionable;
- (id)contentTypeString;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)digestDescriptionWithCurrentUser:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)hideInThread;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (id)metadata;
- (id)reactable;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)uploadable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

