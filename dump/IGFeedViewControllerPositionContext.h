//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItem;

@interface IGFeedViewControllerPositionContext : NSObject
{
    IGFeedItem *_feedItem;
    struct CGSize _offset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (id)initWithFeedItem:(id)arg1 offset:(struct CGSize)arg2;
@property(readonly, nonatomic) struct CGSize offset; // @synthesize offset=_offset;

@end

