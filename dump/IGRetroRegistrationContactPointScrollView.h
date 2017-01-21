//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "IGTabSwitcherDelegate.h"

@class IGCoreTextView, IGRetroRegistrationNextButton, IGRetroRegistrationPhoneNumberField, IGTabSwitcher, IGTextField, NSString, UIImageView;

@interface IGRetroRegistrationContactPointScrollView : UIScrollView <IGTabSwitcherDelegate>
{
    IGRetroRegistrationNextButton *_nextButton;
    IGTextField *_emailField;
    IGRetroRegistrationPhoneNumberField *_phoneNumberField;
    IGCoreTextView *_termView;
    id <IGRetroRegistrationContactPointScrollViewDelegate> _contactPointScrollViewDelegate;
    UIImageView *_glyphView;
    IGTabSwitcher *_tabSwitcher;
}

- (void).cxx_destruct;
- (void)IGTabSwitcher:(id)arg1 didSelectIndex:(unsigned long long)arg2;
@property(nonatomic) __weak id <IGRetroRegistrationContactPointScrollViewDelegate> contactPointScrollViewDelegate; // @synthesize contactPointScrollViewDelegate=_contactPointScrollViewDelegate;
- (id)createEmailField;
- (id)createGlyphView;
- (id)createPhoneNumberField;
- (id)createTabSwitcher;
- (id)createTermView;
@property(retain, nonatomic) IGTextField *emailField; // @synthesize emailField=_emailField;
@property(retain, nonatomic) UIImageView *glyphView; // @synthesize glyphView=_glyphView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) IGRetroRegistrationNextButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) IGRetroRegistrationPhoneNumberField *phoneNumberField; // @synthesize phoneNumberField=_phoneNumberField;
@property(retain, nonatomic) IGTabSwitcher *tabSwitcher; // @synthesize tabSwitcher=_tabSwitcher;
@property(retain, nonatomic) IGCoreTextView *termView; // @synthesize termView=_termView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

