//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSMutableDictionary, NSString;

@interface WCPayPaidOrderActivityMgr : MMService <MMService>
{
    NSMutableDictionary *dicUrlToControlItem;
}

- (void).cxx_destruct;
- (void)cleanAllControlItem;
- (id)getControlItem:(id)arg1;
- (void)setControlItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
