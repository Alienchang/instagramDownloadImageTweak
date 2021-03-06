//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class IGButton, IGTextField, NSString, UIButton;

@interface IGSearchBar : UIView <UITextFieldDelegate>
{
    IGButton *_cancelButton;
    UIButton *_clearButton;
    _Bool _showsCancelButton;
    IGTextField *_textField;
    id <IGSearchBarDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
- (_Bool)becomeFirstResponder;
- (void)cancelButtonTapped:(id)arg1;
@property(nonatomic) __weak id <IGSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (_Bool)isFirstResponder;
@property(copy, nonatomic) NSString *placeholder;
- (_Bool)resignFirstResponder;
@property(nonatomic) long long returnKeyType;
@property(nonatomic) _Bool showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) IGTextField *textField; // @synthesize textField=_textField;
- (void)showCancelButton:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

