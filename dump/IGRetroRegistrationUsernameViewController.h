//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGCoreTextLinkHandler.h"
#import "IGTextFieldDelegate.h"

@class FBSDKAccessToken, IGFacebookAuthHelper, IGRetroRegistrationUsernameStepView, NSArray, NSDictionary, NSString, NSTimer, UIImage, UITapGestureRecognizer;

@interface IGRetroRegistrationUsernameViewController : UIViewController <IGCoreTextLinkHandler, IGTextFieldDelegate>
{
    _Bool _isCIEnabled;
    _Bool _submitting;
    _Bool _skipEmail;
    id <IGRetroRegistrationUsernameViewControllerDelegate> _delegate;
    NSArray *_suggestedUsernames;
    NSString *_email;
    NSString *_phoneNumber;
    NSDictionary *_facebookInfo;
    FBSDKAccessToken *_facebookAccessToken;
    NSString *_SMSSignUpCode;
    NSString *_forceSignUpCode;
    NSString *_fullName;
    NSString *_password;
    UIImage *_profilePhoto;
    NSTimer *_usernameCheckTimer;
    id <IGRequestToken> _usernameRequestToken;
    id <IGRequestToken> _signUpRequestToken;
    NSString *_fbToken;
    long long _suggestedUsernameIndex;
    IGRetroRegistrationUsernameStepView *_usernameView;
    UITapGestureRecognizer *_backgroundTapGesture;
    IGFacebookAuthHelper *_fbAuthHelper;
    id <IGAPIClient> _networker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *SMSSignUpCode; // @synthesize SMSSignUpCode=_SMSSignUpCode;
- (void)accountCreatedWithUserInformation:(id)arg1;
- (void)accountRegistrationFailedWithResponse:(id)arg1;
@property(retain, nonatomic) UITapGestureRecognizer *backgroundTapGesture; // @synthesize backgroundTapGesture=_backgroundTapGesture;
- (void)backgroundTapped;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
@property(nonatomic) __weak id <IGRetroRegistrationUsernameViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)dictionaryRepresentation;
- (void)didTapFooterButton;
- (void)didTapNextButton;
- (void)didTapNextButtonWithoutCI;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) FBSDKAccessToken *facebookAccessToken; // @synthesize facebookAccessToken=_facebookAccessToken;
@property(retain, nonatomic) NSDictionary *facebookInfo; // @synthesize facebookInfo=_facebookInfo;
@property(retain, nonatomic) IGFacebookAuthHelper *fbAuthHelper; // @synthesize fbAuthHelper=_fbAuthHelper;
@property(copy, nonatomic) NSString *fbToken; // @synthesize fbToken=_fbToken;
- (void)fillSuggestedUsername;
- (id)flowName;
@property(retain, nonatomic) NSString *forceSignUpCode; // @synthesize forceSignUpCode=_forceSignUpCode;
@property(retain, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
- (void)goToNextStepWithCIEnabled:(_Bool)arg1;
- (id)initWithSuggestedUsernames:(id)arg1 email:(id)arg2 phoneNumber:(id)arg3 facebookInfo:(id)arg4 facebookAccessToken:(id)arg5 SMSSignUpCode:(id)arg6 forceSignUpCode:(id)arg7 fullName:(id)arg8 password:(id)arg9 profilePhoto:(id)arg10 networker:(id)arg11;
@property(nonatomic) _Bool isCIEnabled; // @synthesize isCIEnabled=_isCIEnabled;
- (void)keyboardWillShow:(id)arg1;
- (void)logNextButtonBlocked:(id)arg1;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
- (void)pasteFacebookUserInfo;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)prefersStatusBarHidden;
@property(retain, nonatomic) UIImage *profilePhoto; // @synthesize profilePhoto=_profilePhoto;
- (void)refreshButtonTapped;
- (void)registerAccountWithCIEnabled:(_Bool)arg1;
@property(retain, nonatomic) id <IGRequestToken> signUpRequestToken; // @synthesize signUpRequestToken=_signUpRequestToken;
@property(nonatomic) _Bool skipEmail; // @synthesize skipEmail=_skipEmail;
@property(nonatomic) _Bool submitting; // @synthesize submitting=_submitting;
@property(nonatomic) long long suggestedUsernameIndex; // @synthesize suggestedUsernameIndex=_suggestedUsernameIndex;
@property(retain, nonatomic) NSArray *suggestedUsernames; // @synthesize suggestedUsernames=_suggestedUsernames;
@property(retain, nonatomic) NSTimer *usernameCheckTimer; // @synthesize usernameCheckTimer=_usernameCheckTimer;
@property(retain, nonatomic) id <IGRequestToken> usernameRequestToken; // @synthesize usernameRequestToken=_usernameRequestToken;
@property(retain, nonatomic) IGRetroRegistrationUsernameStepView *usernameView; // @synthesize usernameView=_usernameView;
- (void)signUpSuccessHandler:(id)arg1;
- (void)signUpfailureHandler:(id)arg1;
- (void)startOrRestartUsernameCheckTimer;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)validateUsername;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

