//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWebViewController.h"

#import "IExposeMgrExt.h"
#import "IExtraDeviceLoginMgrExt.h"
#import "IOnlineDeviceMgrExt.h"
#import "IShortCutExt.h"
#import "IVOIPUILogicMgrExt.h"
#import "IWCPayJSApiMgrExt.h"
#import "MultiTalkMgrExt.h"

@class NSString, RCDraggableButton;

@interface H5GameViewController : MMWebViewController <IVOIPUILogicMgrExt, MultiTalkMgrExt, IExposeMgrExt, IExtraDeviceLoginMgrExt, IShortCutExt, IOnlineDeviceMgrExt, IWCPayJSApiMgrExt>
{
    RCDraggableButton *menuButton;
    _Bool m_bFullscreen;
    long long m_orientation;
    _Bool m_bPaying;
    _Bool m_bResetPayingPwd;
    struct CGSize m_ButtonSize;
    id <H5GameViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)applicationWillTerminate:(id)arg1;
- (void)dealloc;
- (void)delaySetFullScreen:(_Bool)arg1;
@property(retain, nonatomic) id <H5GameViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)enterBackground;
- (void)enterForeground;
- (void)gameActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithURL:(id)arg1 fullScreen:(_Bool)arg2;
- (_Bool)isFullScreen;
- (void)lockOrientation:(long long)arg1;
- (void)onBeginMultiTalk;
- (void)onDeviceInfoClose;
- (void)onDeviceInfoOpen;
- (void)onExposeComplete;
- (void)onExposeInit;
- (void)onExtraDeviceLoginClose;
- (void)onExtraDeviceLoginOpen;
- (void)onGameViewClosed;
- (void)onMultiTalkMaximized;
- (void)onMultiTalkMgrBeginToCleanStatus;
- (void)onMultiTalkMinimized;
- (void)onOpenApiWillBeginShare:(id)arg1;
- (void)onOperate:(id)arg1;
- (void)onPerformShortCut:(id)arg1;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onVideoVoipViewDisappear;
- (void)onVoipMaximized;
- (void)onVoipMinimized;
- (void)onWCPayJSApiBegin:(_Bool)arg1;
- (void)onWCPayJSApiEnd:(_Bool)arg1;
- (void)restoreViewStatus;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
