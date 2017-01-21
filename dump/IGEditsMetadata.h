//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGMediaMetadataProtocol.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSString;

@interface IGEditsMetadata : NSObject <IGMediaMetadataProtocol, NSSecureCoding, NSCopying>
{
    NSDictionary *_editsInfo;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSDictionary *editsInfo; // @synthesize editsInfo=_editsInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEditsInfo:(id)arg1;
- (void)prepareToShare;
- (id)sharingInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

