//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HDHeadImgDownloadTask : NSObject
{
    unsigned char m_headCategory;
    unsigned int m_headType;
    int m_downloadType;
    unsigned int m_eventId;
    unsigned int m_totalLen;
    unsigned int m_startOffset;
    unsigned int m_uiDownloadEventId;
    NSString *m_nsName;
    NSString *_m_nsTempFile;
}

- (void).cxx_destruct;
@property(nonatomic) int m_downloadType; // @synthesize m_downloadType;
@property(nonatomic) unsigned int m_eventId; // @synthesize m_eventId;
@property(nonatomic) unsigned char m_headCategory; // @synthesize m_headCategory;
@property(nonatomic) unsigned int m_headType; // @synthesize m_headType;
@property(retain, nonatomic) NSString *m_nsName; // @synthesize m_nsName;
@property(retain, nonatomic) NSString *m_nsTempFile; // @synthesize m_nsTempFile=_m_nsTempFile;
@property(nonatomic) unsigned int m_startOffset; // @synthesize m_startOffset;
@property(nonatomic) unsigned int m_totalLen; // @synthesize m_totalLen;
@property(nonatomic) unsigned int m_uiDownloadEventId; // @synthesize m_uiDownloadEventId;

@end

