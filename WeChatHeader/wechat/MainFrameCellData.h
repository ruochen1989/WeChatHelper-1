//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMSessionInfo, NSString;

@interface MainFrameCellData : NSObject
{
    MMSessionInfo *m_sessionInfo;
    _Bool m_isNeedUpdateDataForUI;
    NSString *m_nsHeadImgUsrName;
    NSString *m_nsHeadImgUrl;
    _Bool m_timeIsMoreThanAWeek;
    _Bool m_isFirstInitTimeText;
    _Bool m_isHavenInitedWithSessionInfo;
    double m_widthForTimeLabelText;
    double m_widthForNameLabelText;
    _Bool m_bIsSenderFromSelf;
    NSString *m_nsRealUsrName;
    NSString *m_textForNameLabel;
    NSString *m_textForMessageLabel;
    NSString *m_textForGreenLabel;
    NSString *m_textForTimeLabel;
    NSString *m_prefixTextForQuoteMessage;
    NSString *m_subfixTextForQuoteMessage;
    double m_widthForMessageLabelText;
    double m_widthForGreenLabelText;
    NSString *m_oldTextForNameLabel;
    int m_widthCacheVersion;
    _Bool m_isRealTimeTalkRoomEmpty;
    _Bool m_bIsEnableCacheCellData;
    _Bool m_bIsNeedSaveCellData;
    _Bool m_bIsRoomDisplayEmpty;
    _Bool m_bIsModifyContact;
    long long m_lastUnReadCount;
    NSString *m_cpKeyForNickname;
    NSString *m_cpKeyForMessage;
    _Bool m_isNicknameUnsafe;
    _Bool m_isMessageUnsafe;
}

- (void).cxx_destruct;
- (void)checkDataIsValid;
- (void)copyFieldFromPBCellData:(id)arg1;
- (id)copyFieldToPBCellData;
@property(retain, nonatomic) NSString *cpKeyForMessage; // @synthesize cpKeyForMessage=m_cpKeyForMessage;
@property(retain, nonatomic) NSString *cpKeyForNickname; // @synthesize cpKeyForNickname=m_cpKeyForNickname;
- (id)init;
- (id)initWithSessionInfo:(id)arg1 isEnableCacheCellData:(_Bool)arg2;
- (id)initWithSessionInfo:(id)arg1 isEnableCacheCellData:(_Bool)arg2 PBCellData:(id)arg3;
@property(nonatomic) _Bool isMessageUnsafe; // @synthesize isMessageUnsafe=m_isMessageUnsafe;
@property(nonatomic) _Bool isNicknameUnsafe; // @synthesize isNicknameUnsafe=m_isNicknameUnsafe;
@property(nonatomic) _Bool m_bIsModifyContact; // @synthesize m_bIsModifyContact;
@property(readonly, nonatomic) _Bool m_bIsRoomDisplayEmpty; // @synthesize m_bIsRoomDisplayEmpty;
@property(readonly, nonatomic) _Bool m_bIsSenderFromSelf; // @synthesize m_bIsSenderFromSelf;
@property(nonatomic) _Bool m_isFirstInitTimeText; // @synthesize m_isFirstInitTimeText;
@property(readonly, nonatomic) _Bool m_isHavenInitedWithSessionInfo; // @synthesize m_isHavenInitedWithSessionInfo;
@property(readonly, nonatomic) _Bool m_isRealTimeTalkRoomEmpty; // @synthesize m_isRealTimeTalkRoomEmpty;
@property(nonatomic) long long m_lastUnReadCount; // @synthesize m_lastUnReadCount;
@property(retain, nonatomic) NSString *m_nsHeadImgUrl; // @synthesize m_nsHeadImgUrl;
@property(retain, nonatomic) NSString *m_nsHeadImgUsrName; // @synthesize m_nsHeadImgUsrName;
@property(retain, nonatomic) NSString *m_nsRealUsrName; // @synthesize m_nsRealUsrName;
@property(retain, nonatomic) NSString *m_oldTextForNameLabel; // @synthesize m_oldTextForNameLabel;
@property(retain, nonatomic) NSString *m_prefixTextForQuoteMessage; // @synthesize m_prefixTextForQuoteMessage;
@property(retain, nonatomic) MMSessionInfo *m_sessionInfo; // @synthesize m_sessionInfo;
@property(retain, nonatomic) NSString *m_subfixTextForQuoteMessage; // @synthesize m_subfixTextForQuoteMessage;
@property(retain, nonatomic) NSString *m_textForGreenLabel; // @synthesize m_textForGreenLabel;
@property(retain, nonatomic) NSString *m_textForMessageLabel; // @synthesize m_textForMessageLabel;
@property(retain, nonatomic) NSString *m_textForNameLabel; // @synthesize m_textForNameLabel;
@property(retain, nonatomic) NSString *m_textForTimeLabel; // @synthesize m_textForTimeLabel;
@property(nonatomic) _Bool m_timeIsMoreThanAWeek; // @synthesize m_timeIsMoreThanAWeek;
@property(nonatomic) int m_widthCacheVersion; // @synthesize m_widthCacheVersion;
@property(nonatomic) double m_widthForGreenLabelText; // @synthesize m_widthForGreenLabelText;
@property(nonatomic) double m_widthForMessageLabelText; // @synthesize m_widthForMessageLabelText;
@property(nonatomic) double m_widthForNameLabelText; // @synthesize m_widthForNameLabelText;
@property(nonatomic) double m_widthForTimeLabelText; // @synthesize m_widthForTimeLabelText;
- (id)makeEmoticonMessageText:(id)arg1;
- (void)makeTextForChatRoomMessage:(id)arg1;
- (void)makeTextForMessageLabel;
- (void)makeTextForNameLabel;
- (void)makeTextForPluginMessage;
- (void)makeTextForQuoteMessage;
- (void)makeTextForSingleMessage;
- (void)makeTextSession:(id)arg1;
- (void)savePBCellData;
- (void)updateData:(id)arg1;
- (void)updateDataFieldForUI;
- (void)updateExtensionRegister:(id)arg1;
- (void)updateTextForTimeLabel;
- (void)updateTimeField:(unsigned int)arg1;
- (void)updateWidthForNameLabel;

@end

