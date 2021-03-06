/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class ACAccount, MSSearch, NSOperationQueue;

@interface AAAutoAccountVerifier : NSObject <MSSearchDelegate> {
    ACAccount *_account;
    int _attempts;
    BOOL _canceled;
    id _handler;
    NSOperationQueue *_requesterQueue;
    MSSearch *_search;
}

@property(retain) ACAccount * account;

- (void).cxx_destruct;
- (void)_resendVerificationEmailForAccount:(id)arg1 completion:(id)arg2;
- (void)_validateToken:(id)arg1;
- (void)_verify;
- (id)account;
- (void)cancel;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (BOOL)search:(id)arg1 didFindResults:(id)arg2;
- (void)search:(id)arg1 didFinishWithError:(id)arg2;
- (void)sendVerificationEmail;
- (void)setAccount:(id)arg1;
- (void)verifyWithHandler:(id)arg1;

@end
