//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface COpenBottleWrap : NSObject
{
    unsigned int m_uiLocalID;
    NSString *m_nsBottleInfo;
    unsigned int m_uiMsgType;
    unsigned int m_uiThumbStartPos;
    unsigned int m_uiThumbTotalLen;
    NSData *m_dtThumb;
    unsigned int m_uiContentStartPos;
    unsigned int m_uiContentTotalLen;
    NSData *m_dtContent;
    unsigned int m_uiVoiceTime;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;
@property(retain, nonatomic) NSData *m_dtContent; // @synthesize m_dtContent;
@property(retain, nonatomic) NSData *m_dtThumb; // @synthesize m_dtThumb;
@property(retain, nonatomic) NSString *m_nsBottleInfo; // @synthesize m_nsBottleInfo;
@property(nonatomic) unsigned int m_uiContentStartPos; // @synthesize m_uiContentStartPos;
@property(nonatomic) unsigned int m_uiContentTotalLen; // @synthesize m_uiContentTotalLen;
@property(nonatomic) unsigned int m_uiLocalID; // @synthesize m_uiLocalID;
@property(nonatomic) unsigned int m_uiMsgType; // @synthesize m_uiMsgType;
@property(nonatomic) unsigned int m_uiThumbStartPos; // @synthesize m_uiThumbStartPos;
@property(nonatomic) unsigned int m_uiThumbTotalLen; // @synthesize m_uiThumbTotalLen;
@property(nonatomic) unsigned int m_uiVoiceTime; // @synthesize m_uiVoiceTime;

@end

