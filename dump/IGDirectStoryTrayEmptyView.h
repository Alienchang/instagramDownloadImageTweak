//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UILabel;

@interface IGDirectStoryTrayEmptyView : UIView
{
    UILabel *_label;
    UIActivityIndicatorView *_spinner;
}

- (void).cxx_destruct;
- (void)hideSpinner;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)showSpinner;
@property(readonly, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;

@end

