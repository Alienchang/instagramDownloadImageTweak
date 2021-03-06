//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUserSession;

@interface IGQuickCamAssetProcessor : NSObject
{
    int _fullSizeRequestID;
    id <IGQuickCamAssetProcessorPreviewDelegate> _previewDelegate;
    id <IGQuickCamAssetProcessorGenerationDelegate> _generationDelegate;
    id <IGQuickCamInputAsset> _inputAsset;
    IGUserSession *_userSession;
    double _maxLibraryVideoDuration;
    double _previewImageSize;
    unsigned long long _contentEditingInputRequestID;
}

- (void).cxx_destruct;
- (void)assetForLivePhoto:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)configureOutputPhotoAsset:(id)arg1 withInputAsset:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) unsigned long long contentEditingInputRequestID; // @synthesize contentEditingInputRequestID=_contentEditingInputRequestID;
@property(nonatomic) int fullSizeRequestID; // @synthesize fullSizeRequestID=_fullSizeRequestID;
@property(nonatomic) __weak id <IGQuickCamAssetProcessorGenerationDelegate> generationDelegate; // @synthesize generationDelegate=_generationDelegate;
- (id)initWithInputAsset:(id)arg1 previewImageSize:(double)arg2 maxLibraryVideoDuration:(double)arg3 userSession:(id)arg4;
@property(readonly, nonatomic) id <IGQuickCamInputAsset> inputAsset; // @synthesize inputAsset=_inputAsset;
@property(readonly, nonatomic) double maxLibraryVideoDuration; // @synthesize maxLibraryVideoDuration=_maxLibraryVideoDuration;
@property(nonatomic) __weak id <IGQuickCamAssetProcessorPreviewDelegate> previewDelegate; // @synthesize previewDelegate=_previewDelegate;
@property(readonly, nonatomic) double previewImageSize; // @synthesize previewImageSize=_previewImageSize;
- (void)processAsset;
- (void)processCameraPhotoAsset:(id)arg1;
- (void)processCameraVideoAsset:(id)arg1;
- (void)processLibraryLivePhotoAssetForPhotosFramework:(id)arg1;
- (void)processLibraryPhotoAssetForPhotosFramework:(id)arg1;
- (void)processLibraryVideoAssetForPhotosFramework:(id)arg1;
- (id)temporaryVideoURL;
- (id)thumbnailPreviewImageForAsset:(id)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

@end

