//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface IGReloadContext : NSObject
{
    _Bool _enableTapToViewComments;
    long long _feedLayout;
    NSDictionary *_feedItemAttributes;
}

+ (id)contextWithLayout:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool enableTapToViewComments; // @synthesize enableTapToViewComments=_enableTapToViewComments;
@property(retain, nonatomic) NSDictionary *feedItemAttributes; // @synthesize feedItemAttributes=_feedItemAttributes;
@property(readonly, nonatomic) long long feedLayout; // @synthesize feedLayout=_feedLayout;

@end

