//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"
#import "NSCoding.h"

@class IGDate, IGFeedItemComments, IGUser, NSString;

@interface IGCommentModel : NSObject <NSCoding, IGListDiffable>
{
    id <NSObject> _diffIdentifier;
    _Bool _wasMarkedAsSpam;
    _Bool _didReportAsSpam;
    _Bool _hasLiked;
    _Bool _hasTranslation;
    _Bool _showTranslation;
    NSString *_pk;
    IGFeedItemComments *_feedItemComments;
    NSString *_text;
    IGDate *_createdAt;
    NSString *_idempotenceToken;
    IGUser *_user;
    long long _type;
    long long _postedState;
    long long _likeCount;
    NSString *_failureReason;
    NSString *_translation;
}

+ (id)defaultTruncationTokenString;
+ (id)lessTokenStringWithConfiguration:(id)arg1;
+ (id)moreTruncationTokenStringWithConfiguration:(id)arg1;
- (void).cxx_destruct;
- (id)buildStyledStringWithNewline:(_Bool)arg1 configuration:(id)arg2;
- (id)buildStyledStringWithNewline:(_Bool)arg1 width:(double)arg2 maximumUntruncatedNumberOfLines:(long long)arg3 truncatedToNumberOfLines:(long long)arg4 truncationToken:(id)arg5 configuration:(id)arg6;
- (id)buildStyledStringWithNewline:(_Bool)arg1 width:(double)arg2 numberOfLines:(long long)arg3 truncationToken:(id)arg4 configuration:(id)arg5;
@property(readonly, nonatomic) IGDate *createdAt; // @synthesize createdAt=_createdAt;
- (id)description;
@property(nonatomic) _Bool didReportAsSpam; // @synthesize didReportAsSpam=_didReportAsSpam;
- (id)diffIdentifier;
- (void)encodeWithCoder:(id)arg1;
@property(copy, nonatomic) NSString *failureReason; // @synthesize failureReason=_failureReason;
@property(nonatomic) __weak IGFeedItemComments *feedItemComments; // @synthesize feedItemComments=_feedItemComments;
@property(nonatomic) _Bool hasLiked; // @synthesize hasLiked=_hasLiked;
@property(readonly, nonatomic) _Bool hasTranslation; // @synthesize hasTranslation=_hasTranslation;
- (unsigned long long)hash;
@property(readonly, nonatomic) NSString *idempotenceToken; // @synthesize idempotenceToken=_idempotenceToken;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithText:(id)arg1 commentModel:(id)arg2 user:(id)arg3;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
@property(nonatomic) long long postedState; // @synthesize postedState=_postedState;
@property(nonatomic) _Bool showTranslation; // @synthesize showTranslation=_showTranslation;
@property(copy, nonatomic) NSString *translation; // @synthesize translation=_translation;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
- (id)stringWithCollapsedEmptyLines:(id)arg1;
- (id)styledStringForWidth:(double)arg1 isExpanded:(_Bool)arg2 shouldCollapseCaption:(_Bool)arg3 configuration:(id)arg4;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)timestampAndEditedString;
@property(readonly, nonatomic) _Bool wasMarkedAsSpam; // @synthesize wasMarkedAsSpam=_wasMarkedAsSpam;

@end

