//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIControl.h"

#import "WCActionSheetDelegate.h"
#import "WCFacadeExt.h"
#import "WCForceTouchPreviewProtocol.h"

@class MMFICImageTableChunk, NSString, UIImage, UIImageView, UILabel, UINavigationController, UIView, WCDataItem, WCMediaItem;

@interface WCImageView : MMUIControl <WCFacadeExt, WCActionSheetDelegate, WCForceTouchPreviewProtocol>
{
    WCDataItem *m_dataItem;
    WCMediaItem *m_mediaData;
    int m_uiImageType;
    int m_uiPrecedentImageType;
    unsigned int m_uiSourceType;
    _Bool m_bIsLongPressHandled;
    int m_style;
    int m_photoType;
    _Bool m_isImageReady;
    UIImageView *m_imageView;
    UINavigationController *navigationController;
    UIImageView *m_lockStausView;
    UIImageView *m_sharedStausView;
    UILabel *m_nickLabel;
    UIView *m_highLightView;
    id <WCImageViewDelegate> m_delegate;
    _Bool _isGridPreviewImg;
    MMFICImageTableChunk *_imageDataChunk;
    UIImage *m_image;
}

- (void).cxx_destruct;
- (void)LongPressEvents;
- (void)animationShow:(_Bool)arg1;
- (_Bool)canPeek;
- (void)dealloc;
- (id)getImage;
@property(retain, nonatomic) MMFICImageTableChunk *imageDataChunk; // @synthesize imageDataChunk=_imageDataChunk;
- (void)initData:(id)arg1 imageType:(int)arg2 precedentImageType:(int)arg3;
- (id)initWithMediaData:(id)arg1 imageType:(int)arg2;
- (id)initWithMediaData:(id)arg1 imageType:(int)arg2 isGridPreviewImg:(_Bool)arg3;
- (id)initWithMediaData:(id)arg1 imageType:(int)arg2 precedentImageType:(int)arg3;
- (void)layoutSubviews;
@property(retain, nonatomic) WCDataItem *m_dataItem; // @synthesize m_dataItem;
@property(nonatomic) __weak id <WCImageViewDelegate> m_delegate; // @synthesize m_delegate;
@property(readonly, nonatomic) UIImage *m_image; // @synthesize m_image;
@property(readonly, nonatomic) UIImageView *m_imageView; // @synthesize m_imageView;
@property(readonly, nonatomic) _Bool m_isImageReady; // @synthesize m_isImageReady;
@property(readonly, nonatomic) WCMediaItem *m_mediaData; // @synthesize m_mediaData;
@property(nonatomic) int m_photoType; // @synthesize m_photoType;
@property(nonatomic) int m_style; // @synthesize m_style;
@property(readonly, nonatomic) int m_uiImageType; // @synthesize m_uiImageType;
@property(nonatomic) unsigned int m_uiSourceType; // @synthesize m_uiSourceType;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController;
- (void)onClickWCImage:(id)arg1;
- (void)onDownloadFinish:(id)arg1 downloadType:(int)arg2;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)reloadImage;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)showLockStatus:(_Bool)arg1;
- (void)showOwnerNickname:(_Bool)arg1 username:(id)arg2;
- (void)showSharedStatus:(_Bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)triggerClickAction;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
