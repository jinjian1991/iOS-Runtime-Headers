/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class <AAUIAccountValidationControllerDelegate>, AAUIAccountRepairRemoteUI, AAUIRemoteUIRepairFlow, ACAccount, ACUIViewController, NSString;

@interface AAUIAccountValidationController : NSObject <AAUIRemoteUIRepairFlowDelegate> {
    ACAccount *_account;
    AAUIAccountRepairRemoteUI *_accountRepairRemoteUI;
    <AAUIAccountValidationControllerDelegate> *_delegate;
    AAUIRemoteUIRepairFlow *_flow;
    BOOL _inHSAVerification;
    BOOL _isPresentedModally;
    ACUIViewController *_presentingViewController;
}

@property(copy,readonly) NSString * debugDescription;
@property <AAUIAccountValidationControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)attemptHSALoginWithCompletion:(id)arg1;
- (id)delegate;
- (id)initWithAccount:(id)arg1 presentingViewController:(id)arg2 modal:(BOOL)arg3;
- (void)repairFlowWillHideViewController:(id)arg1;
- (void)repairFlowWillShowViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startHSAVerificationFlow;

@end
