//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCRedEnvelopesControlLogic.h"

#import "ContactsCreateChatRoomLogicDelegate.h"
#import "IWCPayControlLogicExt.h"
#import "MMWebViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCBaseControlLogicDeleagte.h"
#import "WCBaseControlMgrExt.h"
#import "WCRedEnvelopesMadeHBSuccessViewDelegate.h"
#import "WCRedEnvelopesMakeRedEnvelopesViewControllerDelegate.h"
#import "WCRedEnvelopesMultiSelectContactsViewControllerDelegate.h"
#import "WCRedEnvelopesSessionSelectViewControllerDelegate.h"
#import "WCRedEnvelopesWelcomePageViewControllerDelegate.h"

@class ContactsCreateChatRoomLogic, NSString, WCPayControlData, WCPayPayMoneyLogic, WCRedEnvelopesMadeHBSuccessView;

@interface WCRedEnvelopesSendControlLogic : WCRedEnvelopesControlLogic <MMWebViewDelegate, WCBaseControlLogicDeleagte, WCBaseControlMgrExt, WCRedEnvelopesWelcomePageViewControllerDelegate, WCRedEnvelopesMakeRedEnvelopesViewControllerDelegate, WCRedEnvelopesMultiSelectContactsViewControllerDelegate, WCRedEnvelopesSessionSelectViewControllerDelegate, WCActionSheetDelegate, IWCPayControlLogicExt, WCRedEnvelopesMadeHBSuccessViewDelegate, ContactsCreateChatRoomLogicDelegate>
{
    WCPayPayMoneyLogic *m_payMoneyLogic;
    WCPayControlData *oPayData;
    int m_scene;
    int m_enMadeRedEnvelopesType;
    WCRedEnvelopesMadeHBSuccessView *m_oWCRedEnvelopesMadeHBSuccessView;
    ContactsCreateChatRoomLogic *createChatRoomLogic;
}

- (void).cxx_destruct;
- (void)GotoNotReceivedListLogic;
- (void)OnClickNotReceivedButton;
- (void)OnConfirmCreateChatRoomAndSendMessageSelectSessionViewController;
- (void)OnConfirmSendMessageSelectSessionViewController;
- (void)OnCreateRoom:(id)arg1;
- (_Bool)OnFilterSessionContact:(id)arg1;
- (void)OnGenH5RedEnvelopesPayRequest:(id)arg1 Error:(id)arg2;
- (void)OnGenRedEnvelopesPayRequest:(id)arg1 Error:(id)arg2;
- (void)OnGotoRootViewController;
- (void)OnJumpedToReceiveList;
- (void)OnMakeWCRedEnvelopesButtonClick:(id)arg1;
- (void)OnQueryRedEnvelopesUserInfo:(id)arg1 Error:(id)arg2;
- (void)OnSelectMutilContactsButton;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSessionReturn:(id)arg1;
- (void)OnSendShareRedEnvelopesoRequest:(id)arg1 Error:(id)arg2;
- (void)OnWCRedEnvelopesMakeRedEnvelopesViewControllerBack;
- (void)OnWCRedEnvelopesSendSuccessViewAnimationDidStop;
- (void)OnWCRedEnvelopesWelcomePageViewControllerBack;
- (void)OnWCRedEnvelopesWelcomePageViewControllerMyRedEnvelopesList;
- (void)OnWCRedEnvelopesWelcomePageViewControllerSelectNormalRedEnvelopes;
- (void)OnWCRedEnvelopesWelcomePageViewControllerSelectRadmonRedEnvelopes;
- (void)WCRedEnvelopesMadeHBSuccessViewBack;
- (void)WCRedEnvelopesMadeHBSuccessViewSendHB;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (id)getData;
- (void)gotoSelectSessionViewController;
- (_Bool)gotoViewController:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 Scene:(int)arg2 RedEnvelopesType:(int)arg3;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onWebViewWillClose:(id)arg1;
- (void)setScene:(int)arg1;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

