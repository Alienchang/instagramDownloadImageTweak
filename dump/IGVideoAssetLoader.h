//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGVideoAssetLoader : NSObject
{
}

+ (void)clipLoadingDidFinishWithClipsDictionary:(id)arg1 preselectedIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4 userSession:(id)arg5;
+ (id)identifiersFromPreselectedIdentifiers:(id)arg1 shouldUseLocalIdentifier:(_Bool)arg2;
+ (void)loadVideoFromAssetInMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3 userSession:(id)arg4;
+ (id)orderClipsFromDictionary:(id)arg1 forOrderedIdentifiers:(id)arg2;
+ (void)photosFramework_loadVideoFromAssetInMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3 userSession:(id)arg4;
+ (id)videoClipForAVAsset:(id)arg1 identifier:(id)arg2 originalSource:(long long)arg3;

@end
