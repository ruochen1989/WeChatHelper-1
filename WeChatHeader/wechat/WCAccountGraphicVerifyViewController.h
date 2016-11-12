//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseViewController.h"

@class UIButton, UIImageView, WCAccountTextFieldItem, WCBaseKeyboardToolBar;

@interface WCAccountGraphicVerifyViewController : WCAccountBaseViewController
{
    UIImageView *m_codeImageView;
    UIButton *m_changeImgBtn;
    UIButton *m_btnNext;
    WCBaseKeyboardToolBar *m_keyboardBar;
    WCAccountTextFieldItem *m_textFieldCodeItem;
    id <WCAccountGraphicVerifyViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)initHeaderView;
- (void)initNavigationBar;
- (void)onNext;
- (void)refreshViewWithData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)textFieldDidChanged:(id)arg1;
- (void)textFieldDidEndOnExit:(id)arg1;
- (void)vcBecomeFirstResponder;
- (void)vcResignFirstResponder;
- (void)viewDidLoad;

@end
