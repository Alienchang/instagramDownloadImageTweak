//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectMessageCell.h"

#import "IGHeartAnimatable.h"

@class IGDirectReshareMessageContainerView, NSString;

@interface IGDirectProfileMessageCell : IGDirectMessageCell <IGHeartAnimatable>
{
    IGDirectReshareMessageContainerView *_reshareContainerView;
    struct CGSize _contentSize;
}

- (void).cxx_destruct;
- (void)configureWithViewModel:(id)arg1;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (id)contentViewForHeartAnimation;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
@property(readonly, nonatomic) IGDirectReshareMessageContainerView *reshareContainerView; // @synthesize reshareContainerView=_reshareContainerView;
- (void)setupSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

