//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMPingOperationDelegate.h"

@class MMHostResolutionOperation, MMPingOperation, NSMutableArray, NSString;

@interface MMTracerouteExecutor : NSObject <MMPingOperationDelegate>
{
    unsigned long long hostResolveFailCount;
    NSString *_host;
    id <MMTracerouteExecutorDelegate> _delegate;
    MMHostResolutionOperation *_currentOperation;
    MMPingOperation *_pingOperation;
    unsigned long long _hop;
    NSMutableArray *_pingSteps;
}

- (void).cxx_destruct;
- (void)_doAbort;
- (void)_doHostResolve;
- (void)_startPing;
- (void)abort;
- (void)begin;
@property(retain, nonatomic) MMHostResolutionOperation *currentOperation; // @synthesize currentOperation=_currentOperation;
- (void)dealloc;
@property(nonatomic) __weak id <MMTracerouteExecutorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getCurrentTTL;
@property(nonatomic) unsigned long long hop; // @synthesize hop=_hop;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
- (id)initWithHostname:(id)arg1;
- (void)onSuccess;
@property(retain, nonatomic) MMPingOperation *pingOperation; // @synthesize pingOperation=_pingOperation;
- (void)pingOperation:(id)arg1 didRecieveResponse:(id)arg2 withPingResult:(id)arg3;
- (void)pingOperation:(id)arg1 didSendPacket:(id)arg2;
- (void)pingOperation:(id)arg1 errorSendingPacket:(id)arg2 withError:(id)arg3;
- (void)pingOperationTimeout:(id)arg1;
@property(retain, nonatomic) NSMutableArray *pingSteps; // @synthesize pingSteps=_pingSteps;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

