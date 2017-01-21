//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIKeyInput.h"
#import "UITextInputTraits.h"

@class IGUser, NSString;

@interface IGTokenView : UIView <UIKeyInput, UITextInputTraits>
{
    IGUser *_token;
    id <IGTokenViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) long long autocorrectionType;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
@property(nonatomic) __weak id <IGTokenViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteBackward;
@property(readonly, nonatomic) _Bool hasText;
- (id)initWithToken:(id)arg1;
- (void)insertText:(id)arg1;
- (_Bool)resignFirstResponder;
- (void)setSelected:(_Bool)arg1;
@property(retain, nonatomic) IGUser *token; // @synthesize token=_token;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

