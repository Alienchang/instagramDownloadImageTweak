//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGFeedToggleViewDelegate.h"

@class IGFeedToggleView, NSString;

@interface IGFeedToggleCollectionViewCell : UICollectionViewCell <IGFeedToggleViewDelegate>
{
    _Bool _isSelfProfile;
    id <IGFeedToggleCollectionViewCellDelegate> _delegate;
    IGFeedToggleView *_cellView;
    long long _buttonConfiguration;
}

+ (double)preferredCellHeight;
- (void).cxx_destruct;
@property(nonatomic) long long buttonConfiguration; // @synthesize buttonConfiguration=_buttonConfiguration;
@property(retain, nonatomic) IGFeedToggleView *cellView; // @synthesize cellView=_cellView;
@property(nonatomic) __weak id <IGFeedToggleCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)feedToggle:(id)arg1 selectedButton:(long long)arg2;
@property(nonatomic) _Bool isSelfProfile; // @synthesize isSelfProfile=_isSelfProfile;
- (void)layoutSubviews;
- (void)setButtonConfiguration:(long long)arg1 isSelfProfile:(_Bool)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

