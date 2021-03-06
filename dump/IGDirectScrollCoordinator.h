//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIScrollView;

@interface IGDirectScrollCoordinator : NSObject
{
    _Bool _shouldForceScrollToBottom;
    _Bool _isFirstLoad;
    UIScrollView *_scrollView;
    double _offsetDistance;
}

- (void).cxx_destruct;
- (void)forceNextScrollToBottom;
- (id)initWithScrollView:(id)arg1;
- (_Bool)isCloseToBottom;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(nonatomic) double offsetDistance; // @synthesize offsetDistance=_offsetDistance;
- (void)performScrollAction:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)restorePosition;
- (void)savePosition;
- (void)scrollToBottomAnimated:(_Bool)arg1;
- (_Bool)scrollToBottomIfNeeded:(_Bool)arg1;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool shouldForceScrollToBottom; // @synthesize shouldForceScrollToBottom=_shouldForceScrollToBottom;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewWillDisappear;

@end

