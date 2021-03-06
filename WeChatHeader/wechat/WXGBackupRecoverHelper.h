//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BackupInfoItem, NSMutableSet, NSOperationQueue, WXGBackupAnalysis, WXGBackupIndexDB, WXGMapTableObject;

@interface WXGBackupRecoverHelper : NSObject
{
    NSOperationQueue *m_operationQueue;
    _Bool m_bRecovering;
    NSMutableSet *m_setChatName;
    WXGMapTableObject *m_mediaPathMapTable;
    WXGBackupIndexDB *m_indexDB;
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    WXGBackupAnalysis *m_analysisiHelper;
    BackupInfoItem *m_currentRecoverInfo;
    id <WXGBackupRecoverHelperDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <WXGBackupRecoverHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getOneEmptyInfoItem;
- (id)init;
- (_Bool)p_addContactListChat;
- (_Bool)p_addMsgFromMsgList:(id)arg1 withSessionName:(id)arg2;
- (void)p_analysisiHasMeidaType:(unsigned int)arg1;
- (_Bool)p_handleBufferForBakChatMsgItem:(id)arg1 withMessageWrap:(id)arg2;
- (void)p_handleChatName:(id)arg1;
- (_Bool)p_internalRecoverMessage:(id)arg1 withSessionName:(id)arg2;
- (void)p_reImportSessionData;
- (void)p_recoverThread;
- (_Bool)p_renameFilesInMediaDictinary:(id)arg1;
- (_Bool)p_renameMediaFiles;
- (void)procesNotifyCode:(unsigned long long)arg1;
- (void)procesNotifyCodeOnMainThread:(unsigned long long)arg1;
- (void)startRecover;
- (void)stopRecover;

@end

