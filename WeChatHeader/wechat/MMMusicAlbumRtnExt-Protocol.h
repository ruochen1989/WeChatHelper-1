//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMMusicInfo, NSString, UIImage;

@protocol MMMusicAlbumRtnExt <NSObject>

@optional
- (void)OnGetAlbumImage:(MMMusicInfo *)arg1 AlbumImage:(UIImage *)arg2;
- (void)OnGetSongAlbumUrl:(MMMusicInfo *)arg1 AlbumUrl:(NSString *)arg2;
@end
