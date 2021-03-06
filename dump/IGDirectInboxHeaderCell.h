//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIButton, UILabel;

@interface IGDirectInboxHeaderCell : UICollectionViewCell
{
    id <IGDirectInboxHeaderCellDelegate> _delegate;
    UILabel *_headerLabel;
    UIButton *_pendingMessagesButton;
}

- (void).cxx_destruct;
- (void)configureWithViewModel:(id)arg1 delegate:(id)arg2;
@property(readonly, nonatomic) __weak id <IGDirectInboxHeaderCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutTitleAndImageForPendingMessagesButton;
@property(readonly, nonatomic) UIButton *pendingMessagesButton; // @synthesize pendingMessagesButton=_pendingMessagesButton;
- (void)pendingMessagesButtonPressed:(id)arg1;
- (void)setupHeaderLabel;
- (void)setupPendingMessagesButton;
- (void)setupSubviews;

@end

