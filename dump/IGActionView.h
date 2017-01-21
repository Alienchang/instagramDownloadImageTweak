//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGHighlightButtonDelegate.h"

@class IGAlertAction, IGHighlightButton, NSString;

@interface IGActionView : UIView <IGHighlightButtonDelegate>
{
    IGAlertAction *_action;
    IGHighlightButton *_button;
    UIView *_highlightView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGAlertAction *action; // @synthesize action=_action;
@property(readonly, nonatomic) IGHighlightButton *button; // @synthesize button=_button;
- (void)buttonTapped;
- (void)highlightButton:(id)arg1 didBecomeHighlighted:(_Bool)arg2;
@property(readonly, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
