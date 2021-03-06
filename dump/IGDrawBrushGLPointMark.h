//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDrawBrushGLMark.h"

@class IGDrawMappedBufferRange, IGGLBlendMode, NSString;

@interface IGDrawBrushGLPointMark : NSObject <IGDrawBrushGLMark>
{
    id <IGDrawBrushGL> _brush;
    union _GLKVector4 _color;
    double _touchViewDelta;
    unsigned int _vertexArrayObject;
    double _remainder;
    double _totalDistance;
    IGDrawMappedBufferRange *_vertexRange;
    _Bool _hadToStopDueToFullBuffer;
    double _size;
    id <IGDrawDynamics> _dynamics;
    double _spacing;
    IGGLBlendMode *_blendMode;
}

- (void).cxx_destruct;
- (void)addLastPoint;
- (void)addSample:(struct _IGTouchSample)arg1;
@property(nonatomic) double alpha;
- (void)auxDraw:(struct _NSRange)arg1;
@property(retain, nonatomic) IGGLBlendMode *blendMode; // @synthesize blendMode=_blendMode;
@property(readonly, nonatomic) id <IGDrawBrushGL> brush; // @synthesize brush=_brush;
- (void)draw;
- (void)drawIncremental;
@property(readonly, nonatomic) id <IGDrawDynamics> dynamics; // @synthesize dynamics=_dynamics;
- (void)endWith:(struct _IGTouchSample)arg1;
@property(nonatomic) _Bool hadToStopDueToFullBuffer; // @synthesize hadToStopDueToFullBuffer=_hadToStopDueToFullBuffer;
- (void)idle;
- (void)idleUntil:(double)arg1 endingStroke:(_Bool)arg2;
- (id)initWithBrush:(id)arg1;
- (void)prepareToDraw;
@property(nonatomic) double size; // @synthesize size=_size;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
- (void)startWith:(struct _IGTouchSample)arg1;
@property(readonly, nonatomic) _Bool supportsIncrementalDrawing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

