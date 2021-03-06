//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMAsset.h"

@class NSDate, PHAsset;

@interface MMAssetForPHAssetFramework : MMAsset
{
    int m_displayRequestId;
    int m_videoRequestId;
    int m_bigImageRequestId;
    PHAsset *m_asset;
    NSDate *_modificationDate;
}

+ (id)compressSquareImage:(id)arg1;
+ (id)genSquareThumbnailImage:(id)arg1;
+ (_Bool)isGifForAsset:(id)arg1;
+ (_Bool)shouldPreventRecursiveCompress:(struct CGSize)arg1 edgeLimit:(double)arg2;
- (void).cxx_destruct;
- (id)alAssetReferenceUrl;
- (id)assetUrl;
- (void)asyncGetAspectRatioThumbnailWithTargetSize:(struct CGSize)arg1 andResult:(CDUnknownBlockType)arg2;
- (void)asyncGetMetadata:(CDUnknownBlockType)arg1;
- (void)asyncGetThumbnail:(CDUnknownBlockType)arg1;
- (void)asyncGetVideoUrlWithBlock:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)getBigImageWithCompressConfig:(id)arg1 ProcessBlock:(CDUnknownBlockType)arg2 ResultBlock:(CDUnknownBlockType)arg3 ErrorBlock:(CDUnknownBlockType)arg4;
- (id)getCreatedDate;
- (void)getDisplayImageWithCompressConfig:(id)arg1 ResultBlock:(CDUnknownBlockType)arg2 ErrorBlock:(CDUnknownBlockType)arg3;
- (id)getImageManager;
- (struct CGSize)getImageRatioSize;
@property(retain, nonatomic, getter=getModificationDate) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
- (id)getOriginImageDataSize;
- (id)getThumbImage;
- (id)getThumbnail;
- (id)getVideoUrl;
- (_Bool)hasLocation;
- (id)initWithPHAsset:(id)arg1 IsNeedOrigin:(_Bool)arg2;
- (id)initWithUrl:(id)arg1 IsNeedOrigin:(_Bool)arg2;
- (_Bool)isGif;
- (_Bool)isPicture;
- (_Bool)isSlowMotionVideo;
- (_Bool)isVideo;
- (double)latitude;
- (double)longitude;
@property(retain, nonatomic) PHAsset *m_asset; // @synthesize m_asset;
@property(nonatomic) int m_bigImageRequestId; // @synthesize m_bigImageRequestId;
@property(nonatomic) int m_displayRequestId; // @synthesize m_displayRequestId;
@property(nonatomic) int m_videoRequestId; // @synthesize m_videoRequestId;
- (struct CGSize)retriveOriginImageSize;
- (void)stopBigImageRequest;
- (void)stopDisplayRequest;
- (void)stopGetBigImageICloudActivity;
- (void)stopICloudActivity;
- (void)stopVideoRequest;
- (id)videoDuration;

@end

