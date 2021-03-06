//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface FBPingPongBuffer : NSObject
{
    unsigned int _framebuffer;
    _Bool _flipped;
    NSArray *_textures;
    struct CGSize _size;
}

- (void).cxx_destruct;
- (void)_setTextureProperties;
- (void)flipTextures;
- (unsigned int)framebuffer;
- (id)initWithContext:(id)arg1 size:(struct CGSize)arg2;
- (id)readTexture;
- (struct CGSize)size;
- (id)writeTexture;

@end

