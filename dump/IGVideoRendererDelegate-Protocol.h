//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGVideoRenderer, NSError, NSURL;

@protocol IGVideoRendererDelegate <NSObject>
- (void)videoRenderer:(IGVideoRenderer *)arg1 didFailWithError:(NSError *)arg2;
- (void)videoRenderer:(IGVideoRenderer *)arg1 didFinishRenderingVideoToURL:(NSURL *)arg2 videoSize:(struct CGSize)arg3 canceled:(_Bool)arg4;
@end

