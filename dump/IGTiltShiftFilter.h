//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGImageFilter.h"

@interface IGTiltShiftFilter : IGImageFilter
{
    unsigned long long _mode;
    double _radius;
    double _angle;
    struct CGPoint _center;
}

@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
- (void)configureProgram:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)fragmentFunctions;
- (id)fragmentShader;
- (id)fragmentShaderPrecision;
- (id)init;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) double radius; // @synthesize radius=_radius;
- (void)render:(id)arg1 to:(id)arg2 program:(id)arg3;

@end

