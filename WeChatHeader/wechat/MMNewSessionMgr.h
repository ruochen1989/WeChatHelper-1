//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "EmoticonDescMgrExt.h"
#import "IContactMgrExt.h"
#import "IEnterpriseMsgExt.h"
#import "IMsgExt.h"
#import "ISessionInfoExt.h"
#import "MMService.h"

@class MMSessionDB, NSMutableArray, NSMutableDictionary, NSString, SessionSortLogic;

@interface MMNewSessionMgr : MMService <IEnterpriseMsgExt, ISessionInfoExt, MMService, IMsgExt, IContactMgrExt, EmoticonDescMgrExt>
{
    NSMutableArray *m_arrSession;
    MMSessionDB *m_sessionStorage;
    NSString *m_nsActiveUserName;
    SessionSortLogic *m_oSessionSortLogic;
    unsigned int m_uiTotalUnReadCount;
    NSMutableDictionary *m_dicAtMeCount;
    NSMutableDictionary *m_dicNewInvCount;
    NSMutableDictionary *m_dicAtMeType;
}

- (void).cxx_destruct;
- (void)AddOrModifySession:(id)arg1 withNotifyFlag:(int)arg2;
- (void)AddSessionToTop:(id)arg1;
- (void)AsyncFulFillSession:(id)arg1;
- (void)ChangeSessionUnReadCount:(id)arg1 to:(unsigned int)arg2;
- (void)CleanupPreLoadSessionCache;
- (void)DeleteAllSession;
- (void)DeleteSessionAtIndex:(unsigned int)arg1;
- (void)DeleteSessionOfUser:(id)arg1;
- (void)DeleteSessionWithoutDeleteMessage:(id)arg1;
- (unsigned int)GenSendMsgTime;
- (id)GetActiveUser;
- (id)GetSessionAtIndex:(unsigned int)arg1;
- (id)GetSessionByUserName:(id)arg1;
- (unsigned int)GetSessionCount;
- (id)GetSessionDeleteInfo:(id)arg1;
- (long long)GetSessionIndexByUserName:(id)arg1;
- (id)GetSessionInfoList;
- (id)GetSessionUserNameAtIndex:(unsigned int)arg1;
- (id)GetSyncUserNamesOnSessionListWithMaxCount:(unsigned int)arg1;
- (unsigned int)GetTotalUnreadCount;
- (id)GetUserNamesOnSessionList;
- (_Bool)HasActiveUser;
- (_Bool)InsertOrUpdateSessionDeleteInfo:(id)arg1;
- (_Bool)IsActiveUser:(id)arg1;
- (_Bool)IsSessionNeedDelayLoad;
- (_Bool)IsTopSessionCountExceed;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(_Bool)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgNotAddDBNotify:(id)arg1 MsgWrap:(id)arg2;
- (void)OnUnReadCountChange:(id)arg1;
- (void)ReImportData;
- (id)SessionEnumerator;
- (id)SessionNewArray;
- (void)SetActiveSession:(id)arg1;
- (void)TopSessionByName:(id)arg1;
- (void)UntopSessionByName:(id)arg1;
- (void)addContact:(id)arg1 AtUser:(id)arg2;
- (void)buildSession:(_Bool)arg1;
- (void)checkAndMergeTopFlag;
- (void)checkLoadData;
- (void)checkSessionTop:(id)arg1 contact:(id)arg2;
- (void)clearAtMeCount:(id)arg1;
- (void)clearNewInvApprove:(id)arg1;
- (void)clearNewInvCount:(id)arg1;
- (void)dealloc;
- (void)deleteAtUserList:(id)arg1;
- (void)deleteSessionAtIndex:(unsigned int)arg1 forceDelete:(_Bool)arg2;
- (void)filterSessionDeleted:(id)arg1 modified:(id)arg2;
- (void)fulFillSession:(id)arg1;
- (id)genSessionInfoByContact:(id)arg1;
- (id)genSessionInfoByUserName:(id)arg1;
- (id)getContactByNameForce:(id)arg1;
- (unsigned int)getSessionIndexOfUser:(id)arg1;
- (_Bool)isMsgNeedProcess:(id)arg1;
- (_Bool)isNeedCallNewMsgArrival:(id)arg1;
- (_Bool)isNeedDeleteMsg:(id)arg1 forceDelete:(_Bool)arg2;
- (_Bool)isNeedSaveSessionInfo:(id)arg1;
- (_Bool)isSessionTopable:(id)arg1;
- (_Bool)isUserNeedProcess:(id)arg1;
- (void)onAddMsgDigetstForSession:(id)arg1;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onGetDraft:(id)arg1 draft:(id)arg2;
- (void)onGetEmoticonDesc:(id)arg1 descList:(id)arg2;
- (void)onModifyContact:(id)arg1;
- (void)onModifyDraft:(id)arg1 draft:(id)arg2 draftTime:(unsigned int)arg3;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)processContactWhenAddMsg:(id)arg1;
- (void)processOnAddMsgWithNotifyFlag:(int)arg1 UsrName:(id)arg2;
- (void)recountUnReadCount;
- (void)recountUnReadCountAndFireExtension;
- (void)resortSessions;
- (void)tryGetContactImage:(id)arg1;
- (void)updateSessions:(id)arg1 NotifyUsrName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

