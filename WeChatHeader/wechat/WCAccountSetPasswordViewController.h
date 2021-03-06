//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseViewController.h"

#import "PasswordLogicDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSString, PasswordLogic, UIButton, WCAccountTextFieldItem, WCBaseKeyboardToolBar;

@interface WCAccountSetPasswordViewController : WCAccountBaseViewController <PasswordLogicDelegate, UIAlertViewDelegate>
{
    id <WCAccountSetPasswordViewControllerDelegate> m_delegate;
    PasswordLogic *m_setPasswdLogic;
    WCBaseKeyboardToolBar *m_keyboardBar;
    WCAccountTextFieldItem *m_textFieldFirstPwdItem;
    WCAccountTextFieldItem *m_textFieldSecondPwdItem;
    UIButton *m_doneBtn;
    UIButton *m_showBtn;
    NSString *m_nsHeaderTitle;
    NSString *m_nsHeaderTip;
    NSString *m_nsTicket;
    _Bool m_bShowTip;
    _Bool m_bShow;
}

- (void).cxx_destruct;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (_Bool)WCBaseInfoItemShouldBeginEditing:(id)arg1;
- (void)checkEnable;
- (void)dealloc;
- (void)doChangePassword;
- (id)init;
- (_Bool)isFromServerControl;
- (void)onFirstNext;
- (void)onSecondNext;
- (void)onShowBtnClick;
- (void)setDelegate:(id)arg1;
- (void)setHeaderTip:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setPasswordFail:(id)arg1;
- (void)setPasswordOK:(id)arg1;
- (void)setShowTip:(_Bool)arg1;
- (void)setTicket:(id)arg1;
- (void)startLoading;
- (void)stopLoading;
- (void)textFieldTextDidChange:(id)arg1;
- (void)unknownFail:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

