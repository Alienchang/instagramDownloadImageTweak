//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGCollectionViewLayout.h"

@interface IGSquaresLayout : IGCollectionViewLayout
{
    long long _numberOfItems;
}

+ (struct CGSize)itemSize;
- (struct CGSize)collectionViewContentSize;
- (struct _NSRange)itemsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (void)reloadWithNewObjects:(id)arg1 context:(id)arg2 oldObjects:(id)arg3 oldContext:(id)arg4 synchronous:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

