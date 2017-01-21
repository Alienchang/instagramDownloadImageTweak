//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGListSectionType.h"
#import "IGTaggedPhotoHeaderViewCellDelegate.h"

@class NSString;

@interface IGTaggedPhotoHeaderViewSectionController : IGListSectionController <IGTaggedPhotoHeaderViewCellDelegate, IGListSectionType>
{
    _Bool _showsActionsButton;
    _Bool _hasTopBlankSpace;
    id <IGTaggedPhotoHeaderViewSectionControllerDelegate> _delegate;
    NSString *_title;
}

- (void).cxx_destruct;
- (id)cellForItemAtIndex:(long long)arg1;
@property(nonatomic) __weak id <IGTaggedPhotoHeaderViewSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
@property(nonatomic) _Bool hasTopBlankSpace; // @synthesize hasTopBlankSpace=_hasTopBlankSpace;
- (id)initWithTitle:(id)arg1 hasTopBlankSpace:(_Bool)arg2 showsActionsButton:(_Bool)arg3;
- (long long)numberOfItems;
@property(nonatomic) _Bool showsActionsButton; // @synthesize showsActionsButton=_showsActionsButton;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)taggedPhotoHeaderViewCellDidTapActionsButton:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
