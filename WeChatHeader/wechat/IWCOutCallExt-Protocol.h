//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol IWCOutCallExt <NSObject>

@optional
- (void)OnCallEndFinish;
- (void)OnCheckNumberResp:(unsigned int)arg1 RespCountryCode:(NSString *)arg2;
- (void)OnUpdateCallStateWithText:(NSString *)arg1 hasBeAccepted:(_Bool)arg2 isCallEnded:(_Bool)arg3 isError:(_Bool)arg4 errorlevel:(unsigned long long)arg5 ErrTitle:(NSString *)arg6 showChargeAlert:(_Bool)arg7;
- (void)didReceiveInviteGap:(int)arg1;
@end
