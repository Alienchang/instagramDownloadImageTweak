//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FNFDataLoader.h"

@class FNFAssetResourceLoader, FNFAssetResourceLoadingRequest, FNFDataBlockDistributor, NSObject<OS_dispatch_queue>, NSURL;

@interface FNFMp4DataLoader : NSObject <FNFDataLoader>
{
    id <FNFDataLoaderDelegate> _delegate;
    FNFAssetResourceLoader *_resourceLoader;
    FNFDataBlockDistributor *_dataBlockDistributor;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    FNFAssetResourceLoadingRequest *_currentResourceLoaderRequest;
    unsigned long long _requestOffset;
    unsigned long long _receiveOffset;
    _Bool _fullyLoaded;
    unsigned long long _bitrate;
    NSURL *_url;
    unsigned long long _fileSize;
    _Bool _async;
}

- (void).cxx_destruct;
- (void)_dataCallback:(id)arg1 offset:(unsigned long long)arg2 dataRequest:(id)arg3;
- (void)_dataFinished:(id)arg1 dataRequest:(id)arg2 contentInfo:(id)arg3 loadingRequest:(id)arg4;
- (void)_fetchStartingAtOffset:(unsigned long long)arg1 length:(unsigned long long)arg2 forTrack:(long long)arg3;
- (void)_forTestingOverrideResourceLoader:(id)arg1;
- (void)cancelRequests;
- (unsigned long long)currentReceiveOffsetForTrack:(long long)arg1;
- (unsigned long long)currentRequestOffsetForTrack:(long long)arg1;
- (void)fetchFirstRequestForSeconds:(unsigned int)arg1 initializationAtomSize:(unsigned long long)arg2 track:(long long)arg3;
- (_Bool)fetchInProgressForTrack:(long long)arg1;
- (void)fetchToOffset:(unsigned long long)arg1 forTrack:(long long)arg2;
- (id)initWithUrl:(id)arg1 bitrate:(unsigned long long)arg2 dataBlockDistributor:(id)arg3 dispatchQueue:(id)arg4 async:(_Bool)arg5;
- (_Bool)isFullyDownloaded:(long long)arg1;
- (void)resetWithNewVideoDataBlockDistributor:(id)arg1 audioDataBlockDistributor:(id)arg2;
- (id)resourceLoader;
- (void)seekForwardToOffset:(unsigned long long)arg1 forTrack:(long long)arg2;
- (void)setDelegate:(id)arg1;

@end

