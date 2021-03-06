//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "MMService.h"
#import "QMapViewDelegate.h"

@class MMTimer, NSMutableArray, NSMutableDictionary, NSString, QMapView, UIView;

@interface LocationThumbMgr : MMService <QMapViewDelegate, IMsgExt, MMService>
{
    QMapView *_mapView;
    UIView *_mapPinView;
    NSMutableDictionary *_taskDic;
    NSMutableArray *_taskQueue;
    MMTimer *_taskTimer;
    _Bool _isUpdating;
}

+ (id)getThumbPathWithChatname:(id)arg1 MsgLocalID:(unsigned int)arg2;
- (void).cxx_destruct;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)addThumbTask:(id)arg1;
- (void)asyncGenThumbImage;
- (void)cleanResource;
- (void)dealloc;
- (int)deleteLocationThumb:(id)arg1 MsgLocalID:(unsigned int)arg2;
- (void)deleteThumbImageWithChatname:(id)arg1 MsgLocalID:(unsigned int)arg2;
- (void)deleteThumbTask:(id)arg1;
- (void)enterBackground;
- (void)enterForeground;
- (id)getLocationThumb:(id)arg1 MsgLocalID:(unsigned int)arg2;
- (void)initMapView;
- (void)loadMapView:(id)arg1;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)notifyTimeout;
- (void)onServiceClearData;
- (void)onServiceInit;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceReloadData;
- (void)onTaskFailedWithError:(int)arg1;
- (void)onTimeout;
- (void)saveThumbImage:(id)arg1 Chatname:(id)arg2 MsgLocalID:(unsigned int)arg3;
- (void)startNextTask;
- (int)startUpdate;
- (int)stopUpdate;
- (int)updateLocationThumb:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

