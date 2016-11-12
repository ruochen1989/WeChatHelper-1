//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MMImageLoaderObserver.h"
#import "MMWebImageViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ColorGradientView, MMMusicInfo, MMMusicLyricResolver, MMTimer, MMWebImageView, NSMutableArray, NSString, NSURL, UIButton, UIColor, UIImageView, UILabel, UITableView;

@interface MMMusicPageView : UIView <UITableViewDelegate, UITableViewDataSource, MMImageLoaderObserver, MMWebImageViewDelegate>
{
    UIImageView *_musicCoverView;
    MMWebImageView *_lowMusicCoverWebView;
    ColorGradientView *_navBarGradientView;
    MMMusicInfo *_musicInfo;
    NSURL *_url;
    int _currentLyricIndex;
    MMTimer *_timer;
    float _offset;
    NSMutableArray *_lyricsList;
    NSMutableArray *_timeList;
    UIView *_bgShadeView;
    ColorGradientView *_shadeGradientView;
    UIView *_bottomBgView;
    UIColor *_bgColorByCover;
    UIColor *_lyricColorHl;
    _Bool _isSingleLyricPage;
    NSString *_displayName;
    UIView *_musicTitleView;
    UILabel *_shareLabel;
    UILabel *_musicTitleLabel;
    UILabel *_singleLyricLabel;
    _Bool _isTimeToShowSingleLyric;
    UITableView *_lyricsView;
    UIView *_lyricsContainerView;
    ColorGradientView *_headColorGradientView;
    ColorGradientView *_bottomColorGradientView;
    UIView *_secondPageGuesterView;
    MMMusicLyricResolver *_lyricResolver;
    _Bool _isShakeMusicPage;
    id <MMMusicPageViewDelegate> m_delegate;
    int _musicIndex;
    UIButton *_arrowUpBtn;
    _Bool _hasAddBlurEffect;
    UIView *_blurView;
}

- (void).cxx_destruct;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)addBlurEffectForMusicCover;
- (void)addGestureRecognizers;
@property(retain, nonatomic) UIButton *arrowUpBtn; // @synthesize arrowUpBtn=_arrowUpBtn;
- (void)back2FirstPage;
- (void)becomeCenterPage;
- (void)commitArrowUpAnimation;
- (void)configureWithMusicInfo:(id)arg1 andIndex:(int)arg2 andIsSingleLyricPage:(_Bool)arg3 isFirstConfigure:(_Bool)arg4;
- (void)coverImageViewTapped;
- (void)dealloc;
- (void)fadeShowShareLabel;
- (id)getBackGroundColor;
- (id)getCoverImage;
- (double)getCoverViewOriginX;
- (double)getCoverViewSideLength;
- (id)getLyricColor;
- (id)getMusicInfo;
- (void)initArrowUpBtn;
- (void)initDisplayName;
- (void)initDisplayNameByUsrName:(id)arg1;
- (void)initFirstPage;
- (void)initMusicTitleView;
- (void)initPageView;
- (void)initSecondPage;
- (id)initWithMusicInfo:(id)arg1 andIndex:(int)arg2 andIsSingleLyricPage:(_Bool)arg3;
- (id)initWithMusicInfo:(id)arg1 andIndex:(int)arg2 andIsSingleLyricPage:(_Bool)arg3 andOffset:(float)arg4;
@property(nonatomic) _Bool isShakeMusicPage; // @synthesize isShakeMusicPage=_isShakeMusicPage;
@property(nonatomic) _Bool isSingleLyricPage; // @synthesize isSingleLyricPage=_isSingleLyricPage;
- (_Bool)isValidDisplayName;
- (_Bool)isValidLyric;
- (void)layoutPageView;
@property(nonatomic) __weak id <MMMusicPageViewDelegate> m_delegate; // @synthesize m_delegate;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)onShowSecondPage;
- (void)onSwipeBack2FirstPage;
- (void)performFadeShowShareLabel;
- (void)resetBgShadeViewY;
- (void)resetLyricContainerViewY;
- (void)resetMusicCoverFrame;
- (void)resetWidthAndX;
- (void)scroll;
- (void)setAlphaForSubViews;
- (void)setDefaultTwoColors;
- (void)shadeGradientViewSwipeDown;
- (void)shadeGradientViewTapped;
- (id)shareLabelText;
- (void)showSecondPage;
- (void)startScroll;
- (void)stopTimer;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tryToUpdateBlurEffect;
- (void)tryToUseIpadRatio;
- (void)updateAlbumCoverImg:(id)arg1;
- (void)updateColorGradientView;
- (void)updateCurIndex;
- (void)updateCurIndexJustByTime;
- (void)updateLowMusicCoverWebView;
- (void)updateLyrics:(id)arg1;
- (void)updateNavBarGradientView;
- (void)updateShadeGradientView;
- (void)updateTimeLyricArrayWithLyrics:(id)arg1;
- (void)updateTwoColorsByImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
