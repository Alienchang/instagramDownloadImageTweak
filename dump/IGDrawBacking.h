//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGContext, IGGLProgram, IGSurface;

@interface IGDrawBacking : NSObject
{
    unsigned int _vertexArrayObject;
    unsigned int _squareVertexBuffer;
    IGContext *_igContext;
    IGSurface *_igSurface;
    _Bool _hasSomethingToDraw;
    IGGLProgram *_program;
    IGGLProgram *_unpremultiplyProgram;
    IGContext *_context;
    id _advisoryOwner;
    union _GLKVector4 _color;
    union _GLKMatrix4 _projection;
    union _GLKMatrix4 _modelView;
}

+ (id)fragment;
+ (id)unpremultiply;
+ (id)vertex;
- (void).cxx_destruct;
@property(nonatomic) __weak id advisoryOwner; // @synthesize advisoryOwner=_advisoryOwner;
- (void)clear;
@property(nonatomic) union _GLKVector4 color; // @synthesize color=_color;
@property(readonly, retain, nonatomic) IGContext *context; // @synthesize context=_context;
- (void)copy;
- (void)dispose;
- (void)doneTargeting;
- (void)draw;
- (void)drawToUnpremultiplied;
- (id)initWithContext:(id)arg1 size:(struct CGSize)arg2;
@property(nonatomic) union _GLKMatrix4 modelView; // @synthesize modelView=_modelView;
@property(readonly, retain, nonatomic) IGGLProgram *program; // @synthesize program=_program;
@property(nonatomic) union _GLKMatrix4 projection; // @synthesize projection=_projection;
- (void)targetForDrawing;
@property(readonly, retain, nonatomic) IGGLProgram *unpremultiplyProgram; // @synthesize unpremultiplyProgram=_unpremultiplyProgram;

@end

