//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSData, NSString;

@interface CUploadVoiceWrap : NSObject <WCDBCoding>
{
    NSString *m_nsFromUsrName;
    NSString *m_nsToUsrName;
    long long m_n64SvrID;
    unsigned int m_uiLocalID;
    unsigned int m_uiOffset;
    unsigned int m_uiLen;
    unsigned int m_uiCreateTime;
    unsigned int m_uiVoiceLen;
    unsigned int m_uiVoiceTime;
    unsigned int m_uiVoiceFormat;
    unsigned int m_uiEndFlag;
    NSData *m_dtVoice;
    unsigned int m_uiRetryCount;
    unsigned int m_uiInsertQueueTime;
    unsigned int m_uiCancelFlag;
    unsigned int m_uiVoiceForwardFlag;
    unsigned int m_uiCgi;
    NSString *m_nsMsgThumbUrl;
    NSString *m_nsMsgSource;
    unsigned int m_uiStatus;
    NSString *m_nsExtend;
    NSString *ConStrRes2;
    NSString *ConStrRes3;
    long long m___rowID;
}

+ (id)dummyObject;
+ (const map_0e718273 *)getFileValueTagIndexMap;
+ (id)getFileValueTypeTable;
+ (const map_0e718273 *)getPackedValueTagIndexMap;
+ (id)getPackedValueTypeTable;
+ (const map_7a576766 *)getValueNameIndexMap;
+ (id)getValueTable;
+ (const struct WCDBIndexHelper *)getWCDBIndexArray;
+ (unsigned long long)getWCDBIndexArrayCount;
+ (const basic_string_a490aa4c *)getWCDBPrimaryColumnName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *ConStrRes2; // @synthesize ConStrRes2;
@property(retain, nonatomic) NSString *ConStrRes3; // @synthesize ConStrRes3;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
- (const WCDBCondition_22fabacd *)db_ConStrRes2;
- (const WCDBCondition_22fabacd *)db_ConStrRes3;
- (const WCDBCondition_94982106 *)db_m_n64SvrID;
- (const WCDBCondition_22fabacd *)db_m_nsExtend;
- (const WCDBCondition_22fabacd *)db_m_nsToUsrName;
- (const WCDBCondition_c6db074e *)db_m_uiCancelFlag;
- (const WCDBCondition_c6db074e *)db_m_uiCreateTime;
- (const WCDBCondition_c6db074e *)db_m_uiEndFlag;
- (const WCDBCondition_c6db074e *)db_m_uiInsertQueueTime;
- (const WCDBCondition_c6db074e *)db_m_uiLen;
- (const WCDBCondition_c6db074e *)db_m_uiLocalID;
- (const WCDBCondition_c6db074e *)db_m_uiOffset;
- (const WCDBCondition_c6db074e *)db_m_uiRetryCount;
- (const WCDBCondition_c6db074e *)db_m_uiStatus;
- (const WCDBCondition_c6db074e *)db_m_uiVoiceFormat;
- (const WCDBCondition_c6db074e *)db_m_uiVoiceTime;
@property(readonly, copy) NSString *description;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
@property(retain, nonatomic) NSData *m_dtVoice; // @synthesize m_dtVoice;
@property(nonatomic) long long m_n64SvrID; // @synthesize m_n64SvrID;
@property(retain, nonatomic) NSString *m_nsExtend; // @synthesize m_nsExtend;
@property(retain, nonatomic) NSString *m_nsFromUsrName; // @synthesize m_nsFromUsrName;
@property(retain, nonatomic) NSString *m_nsMsgSource; // @synthesize m_nsMsgSource;
@property(retain, nonatomic) NSString *m_nsToUsrName; // @synthesize m_nsToUsrName;
@property(nonatomic) unsigned int m_uiCancelFlag; // @synthesize m_uiCancelFlag;
@property(nonatomic) unsigned int m_uiCgi; // @synthesize m_uiCgi;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(nonatomic) unsigned int m_uiEndFlag; // @synthesize m_uiEndFlag;
@property(nonatomic) unsigned int m_uiInsertQueueTime; // @synthesize m_uiInsertQueueTime;
@property(nonatomic) unsigned int m_uiLen; // @synthesize m_uiLen;
@property(nonatomic) unsigned int m_uiLocalID; // @synthesize m_uiLocalID;
@property(nonatomic) unsigned int m_uiOffset; // @synthesize m_uiOffset;
@property(nonatomic) unsigned int m_uiRetryCount; // @synthesize m_uiRetryCount;
@property(nonatomic) unsigned int m_uiStatus; // @synthesize m_uiStatus;
@property(nonatomic) unsigned int m_uiVoiceFormat; // @synthesize m_uiVoiceFormat;
@property(nonatomic) unsigned int m_uiVoiceForwardFlag; // @synthesize m_uiVoiceForwardFlag;
@property(nonatomic) unsigned int m_uiVoiceLen; // @synthesize m_uiVoiceLen;
@property(nonatomic) unsigned int m_uiVoiceTime; // @synthesize m_uiVoiceTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
