//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayCreditPayVerifyPasswdResponseStruct : NSObject
{
    NSString *m_nsSessionKey;
    NSString *m_nsNameMask;
    NSString *m_nsIDNumberMask;
    _Bool m_bNeedFillAllInfo;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) _Bool m_bNeedFillAllInfo; // @synthesize m_bNeedFillAllInfo;
@property(retain, nonatomic) NSString *m_nsIDNumberMask; // @synthesize m_nsIDNumberMask;
@property(retain, nonatomic) NSString *m_nsNameMask; // @synthesize m_nsNameMask;
@property(retain, nonatomic) NSString *m_nsSessionKey; // @synthesize m_nsSessionKey;

@end

