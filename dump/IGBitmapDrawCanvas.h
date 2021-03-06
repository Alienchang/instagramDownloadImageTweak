//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDrawCanvasType.h"

@class IGDrawBezierCurve, NSString;

@interface IGBitmapDrawCanvas : NSObject <IGDrawCanvasType>
{
    IGDrawBezierCurve *_currentStroke;
    struct CGContext *_context;
    struct CGSize _canvasSize;
    struct CGSize _bitmapSize;
    _Bool _hasDrawing;
    id <IGDrawBrush> _brushInternal;
    id <IGDrawBrushCommon> _brush;
    id <IGDrawCanvasDelegate> _delegate;
    struct CGRect _currentDrawingPointsBounds;
}

- (void).cxx_destruct;
- (void)addPointWithSample:(struct _IGTouchSample)arg1;
- (void)beginStrokeWithSample:(struct _IGTouchSample)arg1;
@property(retain, nonatomic) id <IGDrawBrushCommon> brush; // @synthesize brush=_brush;
- (_Bool)canUndoStroke;
- (void)clear;
- (void)continueStrokeWithSample:(struct _IGTouchSample)arg1;
- (struct CGImage *)createImageWithSection:(struct CGRect)arg1 ofBitmapContext:(struct CGContext *)arg2;
- (id)currentDrawing;
@property(nonatomic) struct CGRect currentDrawingPointsBounds; // @synthesize currentDrawingPointsBounds=_currentDrawingPointsBounds;
- (void)dealloc;
@property(nonatomic) __weak id <IGDrawCanvasDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drawInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)drawInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2 applyBrushShadow:(_Bool)arg3;
- (struct CGContext *)drawingContext;
- (void)endStrokeWithSample:(struct _IGTouchSample)arg1;
- (_Bool)hasDrawing;
- (id)initWithCanvasSize:(struct CGSize)arg1 bitmapContextSize:(struct CGSize)arg2;
- (void)undoStroke;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

