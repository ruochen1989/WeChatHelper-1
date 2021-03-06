//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBrandServiceSearchExt.h"

@class BSBusinessContent, NSMutableArray, NSString;

@interface BSSHomePageLogicController : NSObject <IBrandServiceSearchExt>
{
    _Bool _isSearchWaiting;
    _Bool _isLastSearchSuccess;
    unsigned int _requestEventID;
    id <BSSHomePageLogicControllerDelegate> _delegate;
    BSBusinessContent *_curContent;
    NSString *_searchKeyword;
    NSMutableArray *_homePageContentList;
    unsigned long long _responseTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BSBusinessContent *curContent; // @synthesize curContent=_curContent;
- (void)dealloc;
@property(nonatomic) __weak id <BSSHomePageLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doRealSearch;
- (id)getKeywordListAtIndexPath:(id)arg1;
- (id)getLoadMoreWordingInSection:(long long)arg1;
- (unsigned long long)getResponseTime;
- (id)getResultItemAtIndexPath:(id)arg1;
- (long long)getResultTypeOfIndexPath:(id)arg1;
- (id)getTitleWithSection:(long long)arg1;
- (void)handleBrandContactSelectWithIndexPath:(id)arg1;
- (void)handleHomePageLoadMore;
- (void)handleHomepageSearchWithKeyWord:(id)arg1;
- (void)handleHouseServiceSecectWithIndexPath:(id)arg1;
- (void)handleJobServiceSelectWithIndexPath:(id)arg1;
- (void)handleLoadMoreCellSelectWithIndexPath:(id)arg1;
- (void)handleMovieServiceSelectWithIndexPath:(id)arg1;
- (void)handleMusicServiceSelectWithIndexPath:(id)arg1;
- (void)handleProductSelectWithIndexPath:(id)arg1;
- (void)handleSearchCancel;
- (void)handleTableViewSelecttionWithIndexPath:(id)arg1;
- (void)handleUrlTypeServiceSelectWithIndexPath:(id)arg1;
- (_Bool)hasMoreHomePageData;
@property(retain, nonatomic) NSMutableArray *homePageContentList; // @synthesize homePageContentList=_homePageContentList;
- (id)init;
- (_Bool)isBrandContactSection:(long long)arg1;
- (_Bool)isHouseServiceSection:(long long)arg1;
- (_Bool)isJobServiceSection:(long long)arg1;
@property(nonatomic) _Bool isLastSearchSuccess; // @synthesize isLastSearchSuccess=_isLastSearchSuccess;
- (_Bool)isLoadMoreCell:(id)arg1;
- (_Bool)isMovieServiceSection:(long long)arg1;
- (_Bool)isMusicServiceSection:(long long)arg1;
- (_Bool)isProductSection:(long long)arg1;
@property(nonatomic) _Bool isSearchWaiting; // @synthesize isSearchWaiting=_isSearchWaiting;
- (long long)numberOfRowInSection:(long long)arg1;
- (long long)numberOfSectionInSearchResult;
- (void)onGetSearchDetailPageResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onRetrieveLocationFinished:(int)arg1;
- (void)prepareSearch;
@property(nonatomic) unsigned int requestEventID; // @synthesize requestEventID=_requestEventID;
- (void)resetData;
@property(nonatomic) unsigned long long responseTime; // @synthesize responseTime=_responseTime;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
- (void)sendHomePageLoadMoreRequest;
- (void)sendHomePageSearchRequest;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

