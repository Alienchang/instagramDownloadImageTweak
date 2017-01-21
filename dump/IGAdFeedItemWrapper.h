//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGPhotosRenderedTracking.h"

@class IGDirectResponseInfo, IGFeedItem, IGFeedItemComments, IGLocation, IGSponsoredPostInfo, NSString, NSURL;

@interface IGAdFeedItemWrapper : NSObject <IGPhotosRenderedTracking>
{
    IGSponsoredPostInfo *_sponsoredPostInfo;
    IGFeedItem *_feedItem;
    IGDirectResponseInfo *_directResponseInfo;
    long long _directResponseStyle;
    NSString *_actionText;
    long long _adFeedItemType;
    long long _likeCount;
    IGFeedItemComments *_commentModel;
    IGLocation *_location;
    NSString *_actionButtonText;
    NSURL *_imageURL;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *actionButtonText; // @synthesize actionButtonText=_actionButtonText;
@property(readonly, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
@property(readonly, nonatomic) long long adFeedItemType; // @synthesize adFeedItemType=_adFeedItemType;
@property(readonly, nonatomic) IGFeedItemComments *commentModel; // @synthesize commentModel=_commentModel;
@property(readonly, nonatomic) IGDirectResponseInfo *directResponseInfo; // @synthesize directResponseInfo=_directResponseInfo;
@property(readonly, nonatomic) long long directResponseStyle; // @synthesize directResponseStyle=_directResponseStyle;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (id)firstItem;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (id)initWithFeedItem:(id)arg1 adFeedItemType:(long long)arg2 imageURL:(id)arg3 imageWidth:(long long)arg4 imageHeight:(long long)arg5 actionButtonText:(id)arg6;
- (_Bool)isAdsPreview;
- (_Bool)isDirectResponse;
- (_Bool)isKindOfClass:(Class)arg1;
- (id)items;
@property(readonly, nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(readonly, nonatomic) IGLocation *location; // @synthesize location=_location;
- (id)mediaId;
- (long long)mediaType;
- (id)overrideImageURL;
- (struct CGSize)sizeForMediaNormalizedToViewWidth:(double)arg1;
@property(readonly, nonatomic) IGSponsoredPostInfo *sponsoredPostInfo; // @synthesize sponsoredPostInfo=_sponsoredPostInfo;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
