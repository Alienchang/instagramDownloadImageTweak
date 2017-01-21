//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListSupplementaryViewSource.h"

@class IGLabelSupplementaryViewSource, IGSeparatorSupplementaryViewSource, NSString;

@interface IGHeaderFooterSupplementaryViewSource : NSObject <IGListSupplementaryViewSource>
{
    _Bool _hideHeader;
    _Bool _hideFooter;
    IGLabelSupplementaryViewSource *_header;
    IGSeparatorSupplementaryViewSource *_footer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGSeparatorSupplementaryViewSource *footer; // @synthesize footer=_footer;
@property(readonly, nonatomic) IGLabelSupplementaryViewSource *header; // @synthesize header=_header;
@property(nonatomic) _Bool hideFooter; // @synthesize hideFooter=_hideFooter;
@property(nonatomic) _Bool hideHeader; // @synthesize hideHeader=_hideHeader;
- (id)initWithHeaderViewSource:(id)arg1 footerViewSource:(id)arg2;
- (id)initWithSectionController:(id)arg1 collectionContext:(id)arg2;
- (struct CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

