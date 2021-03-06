//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MMTimer;

@interface KitProgressBar : UIView
{
    double m_targetProgress;
    double m_curProgress;
    MMTimer *m_timer;
    id <KitProgressBarDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <KitProgressBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)resetProgress;
- (void)setProgress:(double)arg1;
- (void)startTimer;
- (void)stopTimer;
- (void)updateAnimation;

@end

