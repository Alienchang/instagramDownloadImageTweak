//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGVideoTrimView;

@protocol IGVideoTrimViewDelegate <NSObject>
- (void)trimView:(IGVideoTrimView *)arg1 didUpdateTrimmedRange:(struct _IGRange)arg2;
- (void)trimViewDidEndUpdatingTrimmedRange:(IGVideoTrimView *)arg1;
- (void)trimViewWillBeginUpdatingTrimmedRange:(IGVideoTrimView *)arg1;
@end

