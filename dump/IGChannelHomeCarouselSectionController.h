//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGListAdapterDataSource.h"
#import "IGListAdapterDelegate.h"
#import "IGListSectionType.h"
#import "UICollectionViewDelegate.h"

@class IGChannelHomeCarouselItemModel, IGChannelHomeLogger, IGListAdapter, IGUserSession, NSString;

@interface IGChannelHomeCarouselSectionController : IGListSectionController <IGListAdapterDataSource, IGListAdapterDelegate, UICollectionViewDelegate, IGListSectionType>
{
    IGUserSession *_userSession;
    IGChannelHomeCarouselItemModel *_item;
    IGListAdapter *_adapter;
    IGChannelHomeLogger *_logger;
    unsigned long long _section;
    NSString *_sessionId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGListAdapter *adapter; // @synthesize adapter=_adapter;
- (id)cellForItemAtIndex:(long long)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)initWithSection:(unsigned long long)arg1 sessionId:(id)arg2 logger:(id)arg3 userSession:(id)arg4;
@property(readonly, nonatomic) IGChannelHomeCarouselItemModel *item; // @synthesize item=_item;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
@property(readonly, nonatomic) IGChannelHomeLogger *logger; // @synthesize logger=_logger;
- (long long)numberOfItems;
- (id)objectsForListAdapter:(id)arg1;
@property(readonly, nonatomic) unsigned long long section; // @synthesize section=_section;
@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

