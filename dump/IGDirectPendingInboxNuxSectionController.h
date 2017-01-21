//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGListSectionType.h"

@class IGDirectPendingInboxNuxViewModel, IGSeparatorSupplementaryViewSource, NSString;

@interface IGDirectPendingInboxNuxSectionController : IGListSectionController <IGListSectionType>
{
    IGDirectPendingInboxNuxViewModel *_viewModel;
    IGSeparatorSupplementaryViewSource *_separatorViewSource;
}

- (void).cxx_destruct;
- (id)cellForItemAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (long long)numberOfItems;
@property(retain, nonatomic) IGSeparatorSupplementaryViewSource *separatorViewSource; // @synthesize separatorViewSource=_separatorViewSource;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) IGDirectPendingInboxNuxViewModel *viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

