//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSMutableArray, UploadImageInfo;

@interface UploadImageMgr : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray *m_arrQueue;
    UploadImageInfo *m_oCurUpload;
}

- (void).cxx_destruct;
- (void)CheckQueue;
- (_Bool)CreateUploadEvent:(unsigned int)arg1;
- (unsigned int)GetTotalLen:(id)arg1;
- (unsigned int)GetUploadPercent:(id)arg1;
- (_Bool)IsUploading:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)StartUploadImage:(id)arg1;
- (void)UploadFail:(int)arg1;
- (void)UploadOk:(id)arg1;
- (void)dealloc;
- (id)init;

@end

