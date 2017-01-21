//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGInstaVideoBroadcastViewerListQueryService : NSObject
{
    id <IGInstaVideoBroadcastViewerListQueryServiceDelegate> _delegate;
    id <IGAPIClient> _networker;
    NSString *_mediaId;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGInstaVideoBroadcastViewerListQueryServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchFinalViewerList;
- (void)fetchViewerList;
- (id)initWithMediaId:(id)arg1 networker:(id)arg2;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;

@end
