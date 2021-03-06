//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSRecursiveLock;

@interface QChinaBorder : NSObject
{
    struct CGPath *chinaBorderPath;
    int _version;
    NSRecursiveLock *_lock;
}

+ (id)instance;
- (void).cxx_destruct;
- (struct CGPath *)constructChinaBorderPath:(id)arg1;
- (struct CGPath *)constructPathWithString:(id)arg1 unitSeparator:(id)arg2 itemSeparator:(id)arg3;
- (_Bool)containsCoordinate:(CDStruct_c3b9c2ee)arg1;
- (_Bool)containsCoordinate:(CDStruct_c3b9c2ee)arg1 andRect:(CDStruct_02837cd9)arg2;
- (void)dealloc;
- (void)downloadNewData:(id)arg1;
- (id)filePath;
- (id)init;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (id)readChinaBorder;
@property(nonatomic) int version; // @synthesize version=_version;
- (_Bool)updateData:(id)arg1 version:(int)arg2;

@end

