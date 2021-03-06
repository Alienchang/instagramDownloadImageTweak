//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGMediaPreloaderItem.h"
#import "IGPhotosRenderedTracking.h"
#import "IGStoryImageProvider.h"
#import "IGStoryItemType.h"
#import "IGVideoURLProvider.h"

@class IGPhoto, IGUser, IGVideo, NSArray, NSDate, NSString;

@interface IGDirectStoryMessage : NSObject <IGStoryImageProvider, IGVideoURLProvider, IGMediaPreloaderItem, IGStoryItemType, IGPhotosRenderedTracking>
{
    IGUser *_sender;
    NSDate *_sentDate;
    NSString *_serverId;
    NSArray *_seenUsers;
    NSString *_mediaId;
    long long _rawMediaType;
    IGPhoto *_rawPhoto;
    IGVideo *_rawVideo;
    double _suggestedPlaybackDuration;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)diffIdentifier;
- (id)feedItem;
@property(readonly) unsigned long long hash;
- (id)imageURLForWidth:(double)arg1;
- (id)initWithSender:(id)arg1 sentDate:(id)arg2 serverId:(id)arg3 mediaType:(long long)arg4 photo:(id)arg5 video:(id)arg6 seenUsers:(id)arg7 playbackDuration:(double)arg8 mediaId:(id)arg9;
- (id)isAudioDetected;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (_Bool)isSponsored;
- (id)locationStickers;
- (id)mediaID;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (long long)mediaType;
- (id)mentions;
- (id)pendingUpload;
- (id)photo;
- (id)pk;
- (id)preloadedImage;
@property(readonly, nonatomic) long long rawMediaType; // @synthesize rawMediaType=_rawMediaType;
@property(readonly, nonatomic) IGPhoto *rawPhoto; // @synthesize rawPhoto=_rawPhoto;
@property(readonly, nonatomic) IGVideo *rawVideo; // @synthesize rawVideo=_rawVideo;
@property(readonly, copy, nonatomic) NSArray *seenUsers; // @synthesize seenUsers=_seenUsers;
@property(readonly, nonatomic) IGUser *sender; // @synthesize sender=_sender;
@property(readonly, nonatomic) NSDate *sentDate; // @synthesize sentDate=_sentDate;
@property(readonly, copy, nonatomic) NSString *serverId; // @synthesize serverId=_serverId;
- (_Bool)shouldLoop;
- (id)storyLinkUrl;
@property(readonly, nonatomic) double suggestedPlaybackDuration; // @synthesize suggestedPlaybackDuration=_suggestedPlaybackDuration;
- (id)takenAtDate;
- (double)totalDuration;
- (id)user;
- (id)video;
- (id)videoURLForCurrentNetworkConditions;
- (id)videoURLForVideoVersion:(long long)arg1;
- (long long)viewerCount;
- (id)viewers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

