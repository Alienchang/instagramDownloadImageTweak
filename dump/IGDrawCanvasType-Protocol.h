//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@protocol IGDrawCanvasType <NSObject>
- (void)beginStrokeWithSample:(struct _IGTouchSample)arg1;
@property(retain, nonatomic) id <IGDrawBrushCommon> brush;
- (_Bool)canUndoStroke;
- (void)clear;
- (void)continueStrokeWithSample:(struct _IGTouchSample)arg1;
- (UIImage *)currentDrawing;
@property(nonatomic) __weak id <IGDrawCanvasDelegate> delegate;
- (void)drawInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)endStrokeWithSample:(struct _IGTouchSample)arg1;
- (_Bool)hasDrawing;
- (void)undoStroke;
@end
