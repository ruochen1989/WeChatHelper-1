//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class WCCardDataCardInfo, WCCardDataCardTPInfo;

@interface WCCardGeneralCardView : MMUIView
{
    _Bool _bIsShareCardMode;
    _Bool _bIsShowCodeBtn;
    _Bool _bIsIPhone5ShareCardMode;
    id <WCCardGeneralCardViewDelegate> _delegate;
    WCCardDataCardInfo *_cardInfo;
    WCCardDataCardTPInfo *_cardTPInfo;
    double _contentHeight;
    double _contentBottom;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bIsIPhone5ShareCardMode; // @synthesize bIsIPhone5ShareCardMode=_bIsIPhone5ShareCardMode;
@property(nonatomic) _Bool bIsShareCardMode; // @synthesize bIsShareCardMode=_bIsShareCardMode;
@property(nonatomic) _Bool bIsShowCodeBtn; // @synthesize bIsShowCodeBtn=_bIsShowCodeBtn;
@property(retain, nonatomic) WCCardDataCardInfo *cardInfo; // @synthesize cardInfo=_cardInfo;
@property(retain, nonatomic) WCCardDataCardTPInfo *cardTPInfo; // @synthesize cardTPInfo=_cardTPInfo;
@property(nonatomic) double contentBottom; // @synthesize contentBottom=_contentBottom;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) __weak id <WCCardGeneralCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGRect)getApplyBtnFrame;
- (double)getCardContentBottom;
- (double)getContentViewRealHeight;
- (id)getLogoName;
- (_Bool)hasLimitField;
- (_Bool)hasOperateField;
- (id)initGeneralCardViewWithFrame:(struct CGRect)arg1 withContainerRealHeight:(double)arg2 withCardInfo:(id)arg3 withCardTpInfo:(id)arg4 isShareCardMode:(_Bool)arg5 isShowUseCodeBtn:(_Bool)arg6 isIPhone5ShareCardMode:(_Bool)arg7;
- (void)initSubViewWhenHasLimitFieldWithTitleBottom:(double)arg1;
- (void)initSubViewWhenHasNoOperateFieldWithTitleBottom:(double)arg1;
- (void)initSubViewWhenHasOperateFieldWithTitleBottom:(double)arg1;
- (void)initView;
- (void)onClickApplyBtn:(id)arg1;
- (void)onClickOperationBtn:(id)arg1;

@end

