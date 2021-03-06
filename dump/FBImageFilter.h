//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBOpenGLFilter.h"

#import "FBFilterCropping.h"
#import "NSCopying.h"

@class NSString;

@interface FBImageFilter : FBOpenGLFilter <NSCopying, FBFilterCropping>
{
    _Bool _needsConfigure;
    _Bool _flip;
    double _strength;
    NSString *_fullFragmentShader;
    NSString *_fullVertexShader;
    union _GLKMatrix4 _contentTransform;
    union _GLKMatrix4 _textureTransform;
}

+ (id)basicVertexShader;
+ (id)identityFragmentShader;
- (void).cxx_destruct;
- (void)configureProgram:(id)arg1;
@property(nonatomic) union _GLKMatrix4 contentTransform; // @synthesize contentTransform=_contentTransform;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) _Bool flip; // @synthesize flip=_flip;
- (id)fragmentShader;
- (id)fragmentShaderPrecision;
@property(copy, nonatomic) NSString *fullFragmentShader; // @synthesize fullFragmentShader=_fullFragmentShader;
@property(copy, nonatomic) NSString *fullVertexShader; // @synthesize fullVertexShader=_fullVertexShader;
- (id)generateFullFragmentShader;
- (id)generateFullVertexShader;
- (id)init;
- (unsigned long long)inputPixelFormat;
- (unsigned long long)outputPixelFormat;
- (void)render:(id)arg1 to:(id)arg2 program:(id)arg3 time:(CDStruct_1b6d18a9)arg4;
@property(nonatomic) double strength; // @synthesize strength=_strength;
@property(nonatomic) union _GLKMatrix4 textureTransform; // @synthesize textureTransform=_textureTransform;
- (id)vertexShader;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

