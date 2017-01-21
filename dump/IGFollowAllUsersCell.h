//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGFollowAllUsersView;

@interface IGFollowAllUsersCell : UICollectionViewCell
{
    id <IGFollowAllUsersCellDelegate> _delegate;
    IGFollowAllUsersView *_followAllUsersView;
}

+ (double)preferredHeight;
+ (Class)viewClass;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGFollowAllUsersCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool followAllButtonEnabled;
@property(readonly, nonatomic) IGFollowAllUsersView *followAllUsersView; // @synthesize followAllUsersView=_followAllUsersView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)onFollowAllButtonTapped;
@property(nonatomic) unsigned long long userCount;

@end
