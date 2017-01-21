//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGRetroRegistrationContactPointScrollViewDelegate.h"

@class IGRetroRegistrationBackgroundView, IGRetroRegistrationContactPointScrollView, IGWelcomeViewBackgroundView, NSString;

@interface IGRetroRegistrationContactPointView : UIView <IGRetroRegistrationContactPointScrollViewDelegate>
{
    IGRetroRegistrationContactPointScrollView *_contactPointScrollView;
    IGRetroRegistrationBackgroundView *_backgroundView;
    id <IGRetroRegistrationContactPointViewDelegate> _delegate;
    IGWelcomeViewBackgroundView *_redesignedBackgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGRetroRegistrationBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) IGRetroRegistrationContactPointScrollView *contactPointScrollView; // @synthesize contactPointScrollView=_contactPointScrollView;
- (void)contactPointScrollView:(id)arg1 didSelectContactPointType:(long long)arg2 wasFirstResponder:(_Bool)arg3;
- (id)createBackgroundView;
- (id)createContactPointScrollView;
- (id)createRedesignedBackgroundView;
@property(nonatomic) __weak id <IGRetroRegistrationContactPointViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapFooterLoginButton;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) IGWelcomeViewBackgroundView *redesignedBackgroundView; // @synthesize redesignedBackgroundView=_redesignedBackgroundView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
