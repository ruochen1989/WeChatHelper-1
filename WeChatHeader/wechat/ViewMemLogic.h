//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AddMemLogicDelegate.h"
#import "IGroupMgrExt.h"
#import "RoomContactSelectDelegate.h"
#import "contactInfoDelegate.h"

@class AddMemLogic, CContact, NSString, RoomContactSelectViewController;

@interface ViewMemLogic : NSObject <RoomContactSelectDelegate, contactInfoDelegate, AddMemLogicDelegate, IGroupMgrExt>
{
    id <ViewMemLogicDelegate> m_delegate;
    AddMemLogic *m_addMemLogic;
    RoomContactSelectViewController *m_vc;
    _Bool m_bNeedReload;
    _Bool _m_bShowWithGrid;
    CContact *_m_oContact;
    struct CGPoint _m_bContentOffset;
}

- (void).cxx_destruct;
- (void)OnDelGroupMember:(id)arg1 withResult:(unsigned int)arg2 memberList:(id)arg3 errTip:(id)arg4;
- (void)addMember;
- (void)dealloc;
- (void)didClickDelContact:(id)arg1;
- (void)didReloadMemData;
- (void)didSelectContact:(id)arg1;
- (id)getViewController;
- (id)init;
@property(nonatomic) struct CGPoint m_bContentOffset; // @synthesize m_bContentOffset=_m_bContentOffset;
@property(nonatomic) _Bool m_bShowWithGrid; // @synthesize m_bShowWithGrid=_m_bShowWithGrid;
@property(nonatomic) __weak id <ViewMemLogicDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CContact *m_oContact; // @synthesize m_oContact=_m_oContact;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)onAddMemLogicStop:(_Bool)arg1;
- (void)onCancelSelectContact;
- (void)roomContactSearchBarDidBecomeFirstResponse;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

