//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUploadable.h"
#import "IGVideoRendererProgressDelegate.h"

@class IGSidecarVideoUploadAsset, IGUserSession, NSArray, NSDictionary, NSProgress, NSString, NSURL;

@interface IGSidecarVideoUpload : NSObject <IGVideoRendererProgressDelegate, IGUploadable>
{
    IGSidecarVideoUploadAsset *_asset;
    IGUserSession *_userSession;
    CDUnknownBlockType _renderCompletionBlock;
    CDUnknownBlockType _renderFailureBlock;
    NSURL *_renderedVideoURL;
    struct NSString *_uploadID;
    struct NSString *_parentUploadID;
    NSArray *_assets;
    NSDictionary *_shareMetadata;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(readonly, copy, nonatomic) NSArray *childUploadIDs;
- (void)configurePostWithNetworker:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
@property(readonly, copy, nonatomic) NSString *creationAPIPathString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(struct NSString *)arg1 parentIdentifier:(struct NSString *)arg2 assets:(id)arg3 shareMetadata:(id)arg4 userSession:(id)arg5;
@property(readonly, copy, nonatomic) NSString *parentUploadID; // @synthesize parentUploadID=_parentUploadID;
@property(readonly, nonatomic) NSProgress *progress;
- (void)renderAssetsWithCompletion:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSDictionary *shareMetadata; // @synthesize shareMetadata=_shareMetadata;
- (void)startUploadingAssetsWithNetworker:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
@property(readonly, copy, nonatomic) NSString *uploadID; // @synthesize uploadID=_uploadID;
- (void)videoRenderer:(id)arg1 didFailWithError:(id)arg2;
- (void)videoRenderer:(id)arg1 didFinishRenderingVideoToURL:(id)arg2 canceled:(_Bool)arg3;
- (void)videoRenderer:(id)arg1 didProgress:(double)arg2;
- (void)videoRendererDidStartRenderingVideo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

