//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MMUIViewControllerDelegate.h"
#import "StoreEmotionRewardAskForRewardCgiDelegate.h"
#import "WCBaseControlMgrExt.h"

@class EmoticonStoreItem, EmotionRewardResponseInfo, MMUIViewController, NSString, StoreEmotionRewardAskForRewardCgi, WCPayPayMoneyLogic;

@interface StoreEmotionRewardLogicObject : MMObject <StoreEmotionRewardAskForRewardCgiDelegate, WCBaseControlMgrExt, MMUIViewControllerDelegate>
{
    EmoticonStoreItem *m_storeItem;
    EmotionRewardResponseInfo *m_rewardInfo;
    MMUIViewController *m_rootViewController;
    MMUIViewController *m_askForRewardViewController;
    StoreEmotionRewardAskForRewardCgi *m_askForRewardCgi;
    WCPayPayMoneyLogic *m_payLogic;
    _Bool m_isAskingForReward;
}

- (void).cxx_destruct;
- (_Bool)askForRewardWithPrice:(id)arg1 FromViewController:(id)arg2;
- (void)cancelReward;
- (void)dealloc;
- (void)finishReward;
- (id)getViewController;
- (id)initWithStoreItem:(id)arg1 RewardInfo:(id)arg2 FromRootViewController:(id)arg3;
- (_Bool)isOnWeChatPay;
- (void)onAskForRewardCgiFailWithPid:(id)arg1;
- (void)onAskForRewardCgiOkWithPid:(id)arg1 AndReqKey:(id)arg2;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)presentThanksViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
