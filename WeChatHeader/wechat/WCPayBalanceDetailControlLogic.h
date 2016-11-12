//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCBaseControlMgrExt.h"
#import "WCPayBalanceDetailViewControllerDelegate.h"

@class NSString, WCPayAddPayCardLogic;

@interface WCPayBalanceDetailControlLogic : WCPayControlLogic <WCPayBalanceDetailViewControllerDelegate, WCBaseControlMgrExt>
{
    int m_eWCPayBalanceDetailControlLogicScene;
    WCPayAddPayCardLogic *m_oWCPayAddPayCardLogic;
}

- (void).cxx_destruct;
- (void)BackToRootView;
- (void)BalanceDetailBack;
- (void)BalanceDetailFetchMoney;
- (void)BalanceDetailRequeryBalance;
- (void)BalanceDetailSaveMoney;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnRealnameVerifySuccessNotification:(id)arg1;
- (void)dealloc;
- (void)doAddCard;
- (void)doFetchMoney;
- (id)init;
@property(nonatomic) int m_eWCPayBalanceDetailControlLogicScene; // @synthesize m_eWCPayBalanceDetailControlLogicScene;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)pause;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
