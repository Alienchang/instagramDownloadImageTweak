//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectContentUploadInfo, IGDirectMessageMetadata, NSDictionary, NSString;

@protocol IGDirectUploadable <NSObject>
- (_Bool)canConvertToPublishedMessage;
- (NSString *)contentTypeString;
- (id <IGDirectMediaUploadable>)mediaUploadable;
- (IGDirectMessageMetadata *)metadata;
- (NSDictionary *)realtimeUploadData;
- (NSDictionary *)requestFiles;
- (NSDictionary *)requestParameters;
- (NSString *)requestURLStringDetail;
- (_Bool)supportsPendingState;
- (_Bool)supportsRealtime;
- (NSString *)uploadComment;
- (IGDirectContentUploadInfo *)uploadInfo;
@end

