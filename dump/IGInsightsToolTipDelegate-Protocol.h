//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGTooltipView, UIView;

@protocol IGInsightsToolTipDelegate <NSObject>
- (void)dismissToolTip:(IGTooltipView *)arg1;
- (void)showToolTip:(IGTooltipView *)arg1 atPoint:(struct CGPoint)arg2 inView:(UIView *)arg3;
@end

