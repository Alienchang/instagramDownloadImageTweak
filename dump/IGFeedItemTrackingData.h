//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItem, NSIndexPath;

@interface IGFeedItemTrackingData : NSObject
{
    IGFeedItem *_feedItem;
    NSIndexPath *_indexPath;
    struct CGRect _frame;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (id)initWithFeedItem:(id)arg1 frame:(struct CGRect)arg2 indexPath:(id)arg3;

@end
