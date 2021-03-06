//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BFExecutor, IGDiskCache, NSData, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSURL, UIImage;

@interface IGImageTask : NSObject
{
    NSMutableArray *_requests;
    NSURL *_url;
    NSString *_processedCacheKey;
    long long _imageFetchPriority;
    unsigned long long _fetchBehavior;
    unsigned long long _cacheBehavior;
    _Bool _ignoreCache;
    _Bool _shouldDecodeImage;
    _Bool _didDecodeImage;
    _Bool _needsUIImage;
    NSData *_previewData;
    struct CGSize _previewSize;
    id <IGImageProcessor> _imageProcessor;
    IGDiskCache *_diskCache;
    CDUnknownBlockType _completionBlock;
    _Bool _needsRetry;
    _Bool _canceled;
    _Bool _isWaitingForNetworkResponse;
    NSObject<OS_dispatch_queue> *_queue;
    BFExecutor *_executor;
    id <IGRequestToken> _requestToken;
    UIImage *_resultImage;
    NSData *_resultImageData;
    UIImage *_resultPreviewImage;
    NSString *_originalCacheKey;
}

- (void).cxx_destruct;
- (void)attachRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)canAttach:(id)arg1;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (void)dispatchCallbackWithImage:(id)arg1 error:(id)arg2;
- (void)dispatchCallbackWithPreviewImage:(id)arg1 error:(id)arg2;
- (void)dispatchCallbackWithProgress:(double)arg1;
- (id)getUIImageFromData:(id)arg1;
- (id)initWithRequest:(id)arg1 diskCache:(id)arg2 sharedTaskQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)loadImage;
- (void)logFailedNetworkRequest:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) NSString *originalCacheKey; // @synthesize originalCacheKey=_originalCacheKey;
- (void)storeInDiskCache:(id)arg1;
- (void)storeInMemoryCache:(id)arg1;
- (void)tryDecodeImagePreview;
- (_Bool)tryLoadingFromDiskCache;
- (_Bool)tryLoadingFromMemoryCache;
- (void)tryLoadingFromNetwork;

@end

