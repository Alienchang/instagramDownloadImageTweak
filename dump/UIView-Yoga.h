//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface UIView (Yoga)
- (struct CGSize)calculateLayoutWithSize:(struct CGSize)arg1;
- (struct YGNode *)ygNode;
- (void)yg_applyLayout;
@property(nonatomic, setter=yg_setIncludeInLayout:) _Bool yg_includeInLayout;
- (struct CGSize)yg_intrinsicSize;
- (unsigned long long)yg_numberOfChildren;
- (int)yg_resolvedDirection;
- (void)yg_setAlignContent:(int)arg1;
- (void)yg_setAlignItems:(int)arg1;
- (void)yg_setAlignSelf:(int)arg1;
- (void)yg_setAspectRatio:(double)arg1;
- (void)yg_setDirection:(int)arg1;
- (void)yg_setFlexBasis:(double)arg1;
- (void)yg_setFlexDirection:(int)arg1;
- (void)yg_setFlexGrow:(double)arg1;
- (void)yg_setFlexShrink:(double)arg1;
- (void)yg_setFlexWrap:(int)arg1;
- (void)yg_setHeight:(double)arg1;
- (void)yg_setJustifyContent:(int)arg1;
- (void)yg_setMargin:(double)arg1 forEdge:(int)arg2;
- (void)yg_setMaxHeight:(double)arg1;
- (void)yg_setMaxWidth:(double)arg1;
- (void)yg_setMinHeight:(double)arg1;
- (void)yg_setMinWidth:(double)arg1;
- (void)yg_setPadding:(double)arg1 forEdge:(int)arg2;
- (void)yg_setPosition:(double)arg1 forEdge:(int)arg2;
- (void)yg_setPositionType:(int)arg1;
@property(nonatomic, setter=yg_setUsesYoga:) _Bool yg_usesYoga;
- (void)yg_setWidth:(double)arg1;
@end
