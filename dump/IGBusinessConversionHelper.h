//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGBusinessConversionHelper : NSObject
{
}

+ (id)addressField;
+ (id)addressPlaceholderText;
+ (id)basicPhoneNumberField;
+ (id)cityPlaceholderText;
+ (void)configureBuilder:(id)arg1 withPageInfo:(id)arg2;
+ (void)configureBuilderWithCurrentFacebookInfo:(id)arg1 andError:(id *)arg2 userSession:(id)arg3;
+ (id)emailField;
+ (id)fbConnectTermsString;
+ (void)finishConversionWithPageInfo:(id)arg1 completion:(CDUnknownBlockType)arg2 userSession:(id)arg3;
+ (void)handleNewSwitchBackToPersonalWithCompletion:(CDUnknownBlockType)arg1 userSession:(id)arg2;
+ (id)invalidAddressErrorString;
+ (id)invalidEmailErrorString;
+ (id)invalidPhoneErrorString;
+ (id)needContactMethodErrorString;
+ (id)phoneNumberFieldWithCountrySelector;
+ (_Bool)phoneNumberIsValid:(id)arg1;
+ (void)switchBackToPersonalAccountFromViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 userSession:(id)arg3;
+ (id)textButtonWithTitle:(id)arg1;
+ (void)updateProfileWithPageInfo:(id)arg1 networker:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)validatePageInfo:(id)arg1 withError:(id *)arg2;

@end

