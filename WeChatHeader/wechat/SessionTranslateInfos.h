//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface SessionTranslateInfos : MMObject <PBCoding>
{
    NSString *userName;
    NSMutableArray *arrTransInfo;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrTransInfo; // @synthesize arrTransInfo;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
