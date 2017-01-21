//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIBarButtonItem, UIToolbar;

@interface IGUnifiedWebViewToolbar : UIView
{
    id <IGUnifiedWebViewToolbarDelegate> _delegate;
    UIToolbar *_toolbar;
    UIBarButtonItem *_forwardItem;
    UIBarButtonItem *_backItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIBarButtonItem *backItem; // @synthesize backItem=_backItem;
- (void)backNavigationButtonTapped;
@property(nonatomic) __weak id <IGUnifiedWebViewToolbarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIBarButtonItem *forwardItem; // @synthesize forwardItem=_forwardItem;
- (void)forwardNavigationButtonTapped;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
- (void)updateNavigationButtonsForWebView:(id)arg1;

@end
