//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface IGLocaleMap : NSObject
{
    NSArray *_fb_preferredLanguages;
    NSString *_preferredFBLocale;
}

+ (id)sharedMap;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *fb_preferredLanguages; // @synthesize fb_preferredLanguages=_fb_preferredLanguages;
@property(copy, nonatomic) NSString *preferredFBLocale; // @synthesize preferredFBLocale=_preferredFBLocale;

@end

