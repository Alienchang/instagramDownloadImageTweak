//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGTapButton;

@interface IGStoryPreviewLeftHeaderView : UIView
{
    id <IGStoryPreviewLeftHeaderViewDelegate> _delegate;
    IGTapButton *_closeButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGTapButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak id <IGStoryPreviewLeftHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapCancelButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setupCloseButton;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
