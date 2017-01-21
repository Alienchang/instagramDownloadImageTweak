//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

#import "IGSlidingCollectionViewCell.h"

@class IGDate, NSString, UILabel;

@interface IGTimeStampHeaderView : UICollectionReusableView <IGSlidingCollectionViewCell>
{
    double _slideAmount;
    IGDate *_timestamp;
    UILabel *_timestampLabel;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) double maxSlideAmount;
- (void)prepareForReuse;
@property(nonatomic) double slideAmount; // @synthesize slideAmount=_slideAmount;
@property(retain, nonatomic) IGDate *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) UILabel *timestampLabel; // @synthesize timestampLabel=_timestampLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

