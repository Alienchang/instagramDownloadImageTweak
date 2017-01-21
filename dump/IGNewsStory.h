//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGStyledString, IGUser, NSArray, NSString, NSURL;

@interface IGNewsStory : NSObject
{
    NSString *_pk;
    long long _storyType;
    IGUser *_user;
    NSURL *_profilePictureURL;
    NSArray *_mediaDictionaries;
    double _timestamp;
    NSString *_threadID;
    NSString *_actionURLString;
    NSString *_destination;
    long long _requestCount;
    NSString *_payload;
    NSString *_commentID;
    IGStyledString *_storyStyledString;
    IGStyledString *_styledString;
    NSString *_accessibilityString;
}

+ (id)accessibilityStringForTimestamp:(long long)arg1;
+ (id)actionURLStringForDictionary:(id)arg1;
+ (id)commentIDForDictionary:(id)arg1;
+ (id)copyrightRemovalStyledStringWithTitle:(id)arg1 subtitle:(id)arg2;
+ (id)destinationStringForDictionary:(id)arg1;
+ (id)followRequestStyledString;
+ (_Bool)isLinkBold:(id)arg1;
+ (void)linkifyStyledString:(id)arg1 link:(id)arg2 targetURL:(id)arg3;
+ (id)mediaForDictionary:(id)arg1;
+ (id)payloadForDictionary:(id)arg1;
+ (id)pkForDictionary:(id)arg1;
+ (id)profilePictureURLForDictionary:(id)arg1;
+ (long long)requestCountForDictionary:(id)arg1;
+ (id)storyStyledStringForDictionary:(id)arg1;
+ (long long)storyTypeForDictionary:(id)arg1;
+ (id)styledStringForRegularStoryWithText:(id)arg1 links:(id)arg2;
+ (id)styledStringForTimestamp:(long long)arg1;
+ (id)styledStringForTitle:(id)arg1 andSubtitle:(id)arg2;
+ (id)threadIDForDictionary:(id)arg1;
+ (double)timestampForDictionary:(id)arg1;
+ (id)urlForLinkWithType:(id)arg1 target:(id)arg2;
+ (id)userForDictionary:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *accessibilityString; // @synthesize accessibilityString=_accessibilityString;
@property(readonly, copy, nonatomic) NSString *actionURLString; // @synthesize actionURLString=_actionURLString;
@property(copy, nonatomic) NSString *commentID; // @synthesize commentID=_commentID;
@property(readonly, copy, nonatomic) NSString *destination; // @synthesize destination=_destination;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSArray *mediaDictionaries; // @synthesize mediaDictionaries=_mediaDictionaries;
@property(readonly, copy, nonatomic) NSString *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) NSString *pk; // @synthesize pk=_pk;
@property(readonly, nonatomic) NSURL *profilePictureURL; // @synthesize profilePictureURL=_profilePictureURL;
@property(readonly, nonatomic) long long requestCount; // @synthesize requestCount=_requestCount;
@property(retain, nonatomic) IGStyledString *storyStyledString; // @synthesize storyStyledString=_storyStyledString;
@property(retain, nonatomic) IGStyledString *styledString; // @synthesize styledString=_styledString;
@property(copy, nonatomic) NSString *threadID; // @synthesize threadID=_threadID;
@property(readonly, nonatomic) long long storyType; // @synthesize storyType=_storyType;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;

@end
