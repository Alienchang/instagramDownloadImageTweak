//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBSurface;

@interface FBSurfaceView : UIView
{
    FBSurface *_surface;
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
@property(readonly, nonatomic) FBSurface *surface;

@end
