//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGListSectionType.h"

@class IGGridCollectionViewLayoutConfiguration, IGStaticStickerModel, NSString;

@interface IGStaticStickerSectionController : IGListSectionController <IGListSectionType>
{
    id <IGStaticStickerSectionControllerDelegate> _delegate;
    IGGridCollectionViewLayoutConfiguration *_layoutConfig;
    IGStaticStickerModel *_item;
}

- (void).cxx_destruct;
- (id)cellForItemAtIndex:(long long)arg1;
@property(nonatomic) __weak id <IGStaticStickerSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)init;
@property(readonly, nonatomic) IGStaticStickerModel *item; // @synthesize item=_item;
@property(readonly, nonatomic) IGGridCollectionViewLayoutConfiguration *layoutConfig; // @synthesize layoutConfig=_layoutConfig;
- (long long)numberOfItems;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

