//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectContentCell.h"

@class IGCoreTextView;

@interface IGDirectThreadActionLogCell : IGDirectContentCell
{
    IGCoreTextView *_titleTextLabel;
}

+ (double)heightForCellWithActionLog:(id)arg1 withWidth:(double)arg2;
+ (id)styledTitleStringForActionLog:(id)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setContent:(id)arg1 currentUser:(id)arg2;
- (void)setHideProfilePicture:(_Bool)arg1;
- (void)setShowUsername:(_Bool)arg1;
@property(retain, nonatomic) IGCoreTextView *titleTextLabel; // @synthesize titleTextLabel=_titleTextLabel;

@end

