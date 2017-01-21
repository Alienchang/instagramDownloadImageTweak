//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGNavigationController.h"

#import "IGAccountRecoveryEmailConfirmationControllerDelegate.h"
#import "IGAccountTakeOverViewControllerDelegate.h"
#import "IGContactsHelperDelegate.h"
#import "IGInviteFBFriendsViewController.h"
#import "IGOneTapLoginViewControllerDelegate.h"
#import "IGResetPasswordDelegate.h"
#import "IGRetroRegistrationAddEmailViewControllerDelegate.h"
#import "IGRetroRegistrationFindFriendsViewControllerDelegate.h"
#import "IGRetroRegistrationLoginViewControllerDelegate.h"
#import "IGRetroRegistrationPhoneConfirmationViewControllerDelegate.h"
#import "IGRetroRegistrationPhoneNumberViewControllerDelegate.h"
#import "IGRetroRegistrationRequestSupportDelegate.h"
#import "IGRetroRegistrationSMSVerificationViewControllerDelegate.h"
#import "IGRetroRegistrationSignInHelperViewControllerDelegate.h"
#import "IGRetroRegistrationSignUpViewControllerDelegate.h"
#import "IGRetroRegistrationUsernameViewControllerDelegate.h"
#import "IGRetroRegistrationWelcomeViewControllerDelegate.h"

@class FBSDKAccessToken, IGScopedNetworker, IGTwoFactorInfo, IGUserSession, IGWelcomeAlertHelper, NSArray, NSDictionary, NSString, UIImage;

@interface IGRetroRegistrationNavigationController : IGNavigationController <IGOneTapLoginViewControllerDelegate, IGRetroRegistrationWelcomeViewControllerDelegate, IGRetroRegistrationLoginViewControllerDelegate, IGRetroRegistrationAddEmailViewControllerDelegate, IGRetroRegistrationSignUpViewControllerDelegate, IGRetroRegistrationFindFriendsViewControllerDelegate, IGAccountRecoveryEmailConfirmationControllerDelegate, IGRetroRegistrationSMSVerificationViewControllerDelegate, IGRetroRegistrationPhoneNumberViewControllerDelegate, IGRetroRegistrationPhoneConfirmationViewControllerDelegate, IGAccountTakeOverViewControllerDelegate, IGResetPasswordDelegate, IGRetroRegistrationSignInHelperViewControllerDelegate, IGRetroRegistrationRequestSupportDelegate, IGRetroRegistrationUsernameViewControllerDelegate, IGInviteFBFriendsViewController, IGContactsHelperDelegate>
{
    _Bool _isSwitchingUsers;
    _Bool _shouldSkipCINux;
    _Bool _hasDisplayedFollowOptOut;
    long long _currentStep;
    long long _findFriendMode;
    NSDictionary *_facebookMeInfo;
    NSArray *_suggestedUsernames;
    NSDictionary *_loggedInDictionary;
    IGWelcomeAlertHelper *_welcomeAlertHelper;
    long long _followCount;
    NSString *_email;
    NSString *_username;
    NSString *_userPK;
    IGTwoFactorInfo *_twoFactorInfo;
    FBSDKAccessToken *_facebookAccessToken;
    NSString *_phoneNumber;
    NSString *_forceSignUpCode;
    NSString *_SMSVerificationCode;
    NSString *_fullName;
    NSString *_password;
    UIImage *_profilePhoto;
    long long _signUpStepFlow;
    IGUserSession *_userSession_PRODUCED_ONLY_NOW_THAT_LOGGED_IN_ANTIPATTERN;
    IGScopedNetworker *_loggedOutNetworker;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *SMSVerificationCode; // @synthesize SMSVerificationCode=_SMSVerificationCode;
- (void)accountRecoveryEmailConfirmationController:(id)arg1 proceedWithForceSignUpCode:(id)arg2;
- (void)accountRecoveryEmailConfirmationController:(id)arg1 proceedWithLoggedInDictionary:(id)arg2 signUpCode:(id)arg3;
- (void)accountRecoveryEmailConfirmationControllerBackToLoginView:(id)arg1;
- (void)accountTakeOverViewControllerDidTapConfirmLogInButton:(id)arg1 producedUserSession:(id)arg2;
- (void)accountTakeOverViewControllerDidTapSignUpButton:(id)arg1;
- (_Bool)accountTakeOverViewControllerIsSwitchingUsers:(id)arg1;
- (void)addEmailViewController:(id)arg1 proceedWithConflictedEmail:(id)arg2;
- (void)addEmailViewController:(id)arg1 proceedWithValidatedEmail:(id)arg2 usernameSuggestions:(id)arg3;
- (void)addEmailViewControllerDidTapLoginButton:(id)arg1;
- (void)addEmailViewControllerDidTapPhoneRegiButton:(id)arg1;
- (void)contactPointViewController:(id)arg1 proceedWithValidatedEmail:(id)arg2 usernameSuggestions:(id)arg3;
- (void)contactPointViewControllerDelegateSMSSentWithPhoneNumber:(id)arg1 contactPointViewController:(id)arg2;
- (void)contactPointViewControllerDidTapLoginButton:(id)arg1;
- (void)contactsHelperDidFetchContacts:(id)arg1;
- (void)contactsHelperWasDeniedContacts;
- (void)continueCurrentStep;
- (void)continueFromCurrentStepOnFindFriendsController:(id)arg1;
- (void)continueStep:(long long)arg1;
- (void)continueToSignUpWithBackButton:(_Bool)arg1;
- (void)continueToSwitchAccountLogInWithBackButton:(_Bool)arg1;
- (id)createAccountTakeOverViewController;
- (id)createEmailConfirmationViewController;
- (id)createFindFriendsViewControllerWithUserSession:(id)arg1;
- (id)createFollowPeopleViewControllerWithUserSession:(id)arg1;
- (id)createInviteFBFriendsViewControllerWithUserSession:(id)arg1;
- (id)createPhoneConfirmationViewController;
- (id)createRequestSupportFormViewController;
- (id)createSMSVerificationViewController;
- (id)createSignInHelperViewController;
- (id)createSignUpViewController;
- (id)createTwoFactorContactFormViewController;
- (id)createUsernameStepViewController;
@property(nonatomic) long long currentStep; // @synthesize currentStep=_currentStep;
- (void)dealloc;
- (void)didTapBackButton:(id)arg1;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) FBSDKAccessToken *facebookAccessToken; // @synthesize facebookAccessToken=_facebookAccessToken;
@property(retain, nonatomic) NSDictionary *facebookMeInfo; // @synthesize facebookMeInfo=_facebookMeInfo;
- (void)fastForwardToFollowPeopleStep;
@property(nonatomic) long long findFriendMode; // @synthesize findFriendMode=_findFriendMode;
- (void)findFriendsController:(id)arg1 didLoadUsers:(id)arg2;
- (void)findFriendsController:(id)arg1 wantsToDismissViewControllerAnimated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)findFriendsController:(id)arg1 wantsToPresentViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)findFriendsController:(id)arg1 wantsToUpdateToFollowCount:(long long)arg2;
- (void)findFriendsController:(id)arg1 wasTappedOnURL:(id)arg2;
- (void)findFriendsControllerDidFollowTopAccounts:(id)arg1;
- (void)findFriendsControllerNextButtonTapped:(id)arg1;
- (void)findFriendsControllerSkipButtonTapped:(id)arg1;
- (long long)findFriendsMode;
- (long long)findFriendsStep;
@property(nonatomic) long long followCount; // @synthesize followCount=_followCount;
- (long long)followPeopleStep;
@property(copy, nonatomic) NSString *forceSignUpCode; // @synthesize forceSignUpCode=_forceSignUpCode;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
@property(nonatomic) _Bool hasDisplayedFollowOptOut; // @synthesize hasDisplayedFollowOptOut=_hasDisplayedFollowOptOut;
- (long long)indexOfViewControllerClass:(Class)arg1;
- (id)initWithNetworker:(id)arg1 isSwitchingUsers:(_Bool)arg2 hasRecentlyEnabledOneTapLoginUsers:(_Bool)arg3;
- (void)inviteFBFriendsViewControllerDidFinish:(id)arg1;
- (_Bool)isFBSignUpForUsernameViewController:(id)arg1;
- (_Bool)isPhoneRegForUsernameViewController:(id)arg1;
@property(nonatomic) _Bool isSwitchingUsers; // @synthesize isSwitchingUsers=_isSwitchingUsers;
- (_Bool)isUserSwitchingForUsernameViewController:(id)arg1;
- (void)logInFromEmail:(id)arg1;
@property(retain, nonatomic) NSDictionary *loggedInDictionary; // @synthesize loggedInDictionary=_loggedInDictionary;
@property(readonly, nonatomic) IGScopedNetworker *loggedOutNetworker; // @synthesize loggedOutNetworker=_loggedOutNetworker;
- (void)loginViewController:(id)arg1 didTapOnLoginHelperButtonWithUsername:(id)arg2;
- (void)loginViewController:(id)arg1 didTapOnURL:(id)arg2;
- (void)loginViewController:(id)arg1 proceedRegistrationWithFBInfo:(id)arg2 facebookAccessToken:(id)arg3;
- (void)loginViewController:(id)arg1 proceedTwoFactorWithInfo:(id)arg2 facebookAccessToken:(id)arg3;
- (void)loginViewController:(id)arg1 resetPasswordWithViewController:(id)arg2;
- (void)loginViewController:(id)arg1 userEmailTakenAutoLoginWithLoggedInDict:(id)arg2;
- (void)loginViewControllerDidTapGoBackButton:(id)arg1;
- (void)loginViewControllerDidTapLoginButton:(id)arg1;
- (void)loginViewControllerDidTapSignUpButton:(id)arg1;
- (_Bool)loginViewControllerIsSwitchingUsers:(id)arg1;
- (void)loginViewControllerWantsToDismiss:(id)arg1;
- (void)onDoneButtonTapped;
- (void)onRegistrationFinishedWithUserSession:(id)arg1;
- (void)oneTapLoginViewControllerDidTapLoginButton:(id)arg1;
- (void)oneTapLoginViewControllerDidTapOnURL:(id)arg1;
- (void)oneTapLoginViewControllerDidTapSignUpButton:(id)arg1;
- (void)oneTapLoginViewControllerDidTapSwitchAccountButton:(id)arg1 withBackButton:(_Bool)arg2;
- (void)oneTapLoginViewControllerProceedTwoFactorWithInfo:(id)arg1 facebookAccessToken:(id)arg2;
- (void)oneTapLoginViewControllerResetPasswordWithViewController:(id)arg1;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
- (void)phoneConfirmationViewController:(id)arg1 didVerifyWithCode:(id)arg2;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void)phoneNumberViewControllerDelegateDidTapEmailRegistrationButton:(id)arg1;
- (void)phoneNumberViewControllerDelegateDidTapLoginButton:(id)arg1;
- (void)phoneNumberViewControllerDelegateSMSSentWithPhoneNumber:(id)arg1 phoneNumberViewController:(id)arg2;
- (long long)preferredStatusBarStyle;
- (void)proceedRegistrationWithFBUserInfo:(id)arg1 facebookAccessToken:(id)arg2;
@property(retain, nonatomic) UIImage *profilePhoto; // @synthesize profilePhoto=_profilePhoto;
- (long long)registrationFlowForSignUpViewController:(id)arg1;
- (long long)registrationFlowForUsernameViewController:(id)arg1;
- (long long)registrationStepForAddEmailViewController:(id)arg1;
- (long long)registrationStepForContactPointViewController:(id)arg1;
- (long long)registrationStepForFindFriendsViewController:(id)arg1;
- (long long)registrationStepForOneTapLoginViewController:(id)arg1;
- (long long)registrationStepForSignUpViewController:(id)arg1;
- (long long)registrationStepForUsernameViewController:(id)arg1;
- (long long)registrationStepForWelcomeViewController:(id)arg1;
- (void)requestSupportViewControllerWantsToDismiss:(id)arg1;
- (void)resetPasswordController:(id)arg1 dismissWithTwoFactorInfo:(id)arg2 facebookAccessToken:(id)arg3;
- (_Bool)resetPasswordControllerIsSwitchingUsers:(id)arg1;
@property(nonatomic) _Bool shouldSkipCINux; // @synthesize shouldSkipCINux=_shouldSkipCINux;
@property(nonatomic) long long signUpStepFlow; // @synthesize signUpStepFlow=_signUpStepFlow;
@property(retain, nonatomic) NSArray *suggestedUsernames; // @synthesize suggestedUsernames=_suggestedUsernames;
@property(retain, nonatomic) IGTwoFactorInfo *twoFactorInfo; // @synthesize twoFactorInfo=_twoFactorInfo;
@property(copy, nonatomic) NSString *userPK; // @synthesize userPK=_userPK;
@property(retain, nonatomic) IGUserSession *userSession_PRODUCED_ONLY_NOW_THAT_LOGGED_IN_ANTIPATTERN; // @synthesize userSession_PRODUCED_ONLY_NOW_THAT_LOGGED_IN_ANTIPATTERN=_userSession_PRODUCED_ONLY_NOW_THAT_LOGGED_IN_ANTIPATTERN;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) IGWelcomeAlertHelper *welcomeAlertHelper; // @synthesize welcomeAlertHelper=_welcomeAlertHelper;
- (void)signInHelperViewController:(id)arg1 didRequestSupportWithUsername:(id)arg2;
- (void)signInHelperViewController:(id)arg1 didTapOnURL:(id)arg2;
- (void)signInHelperViewController:(id)arg1 proceedTwoFactorWithInfo:(id)arg2 facebookAccessToken:(id)arg3;
- (void)signInHelperViewController:(id)arg1 resetPasswordWithViewController:(id)arg2;
- (void)signInHelperViewController:(id)arg1 userEmailTakenAutoLoginWithLoggedInDicted:(id)arg2;
- (void)signInHelperViewController:(id)arg1 willProceedRegistrationWithFBInfo:(id)arg2 facebookAccessToken:(id)arg3;
- (void)signInHelperViewControllerDidTapBackButton:(id)arg1;
- (void)signInHelperViewControllerDidTapLogInButton:(id)arg1;
- (void)signInHelperViewControllerDidTapSignUpButton:(id)arg1;
- (_Bool)signInHelperViewControllerIsSwitchingUsers:(id)arg1;
- (void)signupViewController:(id)arg1 requestsLoginToUsername:(id)arg2 password:(id)arg3;
- (void)signupViewControllerDidTapLoginButton:(id)arg1;
- (void)signupViewControllerDidTapNextButton:(id)arg1 withFullName:(id)arg2 password:(id)arg3 profilePhoto:(id)arg4 fromFlow:(long long)arg5;
- (_Bool)signupViewControllerIsSwitchingUsers:(id)arg1;
- (void)skipCINuxIfNeededAndContinue;
- (void)smsVerificationViewController:(id)arg1 didRequestSupportWithUsername:(id)arg2 twoFactorIdentifier:(id)arg3;
- (void)smsVerificationViewController:(id)arg1 wantsToPopViewControllerAnimated:(_Bool)arg2;
- (_Bool)smsVerificationViewControllerIsSwitchingUsers:(id)arg1;
- (void)userLoggedInOperationsWithUserSession:(id)arg1;
- (void)usernameStepViewControllerRegistrationSucceeded:(id)arg1 shouldSkipCINux:(_Bool)arg2 producedUserSession:(id)arg3;
- (void)usernameViewController:(id)arg1 requestsLoginToUsername:(id)arg2 password:(id)arg3;
- (void)usernameViewControllerDidTaSigninButton:(id)arg1;
- (void)usernameViewControllerDidTapNextButton:(id)arg1;
- (Class)viewControllerClassForStep:(long long)arg1;
- (id)viewControllerForStep:(long long)arg1;
- (void)welcomeViewController:(id)arg1 proceedRegistrationWithFBInfo:(id)arg2 facebookAccessToken:(id)arg3;
- (void)welcomeViewController:(id)arg1 proceedTwoFactorWithInfo:(id)arg2 facebookAccessToken:(id)arg3;
- (void)welcomeViewController:(id)arg1 resetPasswordWithViewController:(id)arg2;
- (void)welcomeViewController:(id)arg1 userEmailTakenAutoLoginWithLoggedInDict:(id)arg2;
- (void)welcomeViewControllerDidGoBackButton:(id)arg1;
- (void)welcomeViewControllerDidTapLoginButton:(id)arg1;
- (void)welcomeViewControllerDidTapSignUpButton:(id)arg1;
- (_Bool)welcomeViewControllerIsSwitchingUsers:(id)arg1;
- (void)welcomeViewControllerWantsToDismiss:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

