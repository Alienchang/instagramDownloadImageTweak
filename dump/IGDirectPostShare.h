//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectContent.h"

#import "IGDirectMessageProtocol.h"
#import "IGDirectMessageReactable.h"
#import "IGDirectUploadable.h"

@class IGDirectContentUploadInfo, IGFeedItem, NSArray, NSString;

@interface IGDirectPostShare : IGDirectContent <IGDirectMessageProtocol, IGDirectUploadable, IGDirectMessageReactable>
{
    _Bool _reactionsNeedsReRender;
    unsigned long long _likeCount;
    NSArray *_reactions;
    unsigned long long _lastReactionType;
    IGFeedItem *_post;
    IGDirectContentUploadInfo *_uploadInfo;
    NSString *_comment;
}

- (void).cxx_destruct;
- (id)actionable;
- (_Bool)canConvertToPublishedMessage;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
- (id)contentTypeString;
- (id)copyOfContentWithReactionFilter:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)digestDescriptionWithCurrentUser:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)hideInThread;
- (id)initAsUploadWithComment:(id)arg1 post:(id)arg2 recipient:(id)arg3 currentUser:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isUploading;
@property(nonatomic) unsigned long long lastReactionType; // @synthesize lastReactionType=_lastReactionType;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
- (id)mediaUploadable;
- (id)metadata;
@property(retain, nonatomic) IGFeedItem *post; // @synthesize post=_post;
- (id)reactable;
@property(retain, nonatomic) NSArray *reactions; // @synthesize reactions=_reactions;
@property(nonatomic) _Bool reactionsNeedsReRender; // @synthesize reactionsNeedsReRender=_reactionsNeedsReRender;
- (id)realtimeUploadData;
- (id)requestFiles;
- (id)requestParameters;
- (id)requestURLStringDetail;
@property(copy, nonatomic) IGDirectContentUploadInfo *uploadInfo; // @synthesize uploadInfo=_uploadInfo;
- (_Bool)supportsPendingState;
- (_Bool)supportsRealtime;
- (id)uploadComment;
- (id)uploadable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

