//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMAlbum.h"

@class ALAssetsGroup, NSArray, NSDictionary;

@interface MMAlbumForALAssetLibrary : MMAlbum
{
    _Bool m_isWithVideoAsset;
    ALAssetsGroup *m_group;
    NSArray *_m_imagesArray;
    NSDictionary *_m_indexInAllToIndexInImages;
}

- (void).cxx_destruct;
- (id)albumId;
- (id)assetOfIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)coverImage;
- (id)initWithALAssetsGroup:(id)arg1 shouldIncludeVideo:(_Bool)arg2 isOnlyShowVideo:(_Bool)arg3;
- (id)lastAssetWithSecond:(double)arg1;
@property(retain, nonatomic) ALAssetsGroup *m_group; // @synthesize m_group;
@property(retain, nonatomic) NSArray *m_imagesArray; // @synthesize m_imagesArray=_m_imagesArray;
@property(retain, nonatomic) NSDictionary *m_indexInAllToIndexInImages; // @synthesize m_indexInAllToIndexInImages=_m_indexInAllToIndexInImages;
@property(nonatomic) _Bool m_isWithVideoAsset; // @synthesize m_isWithVideoAsset;
- (id)name;
- (unsigned long long)photosCount;
- (void)retriveCoverImageWithAsyncBlock:(CDUnknownBlockType)arg1;
- (void)retrivePhotoCountWithAsyncBlock:(CDUnknownBlockType)arg1;
- (void)stopICloudActivity;

@end

