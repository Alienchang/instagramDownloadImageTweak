//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGMediaThumbnailCell, IGMediaThumbnailSectionController;

@protocol IGMediaThumbnailSectionControllerImageLoadingDelegate <NSObject>
- (void)mediaThumbnailSectionController:(IGMediaThumbnailSectionController *)arg1 didFinishLoadingImageForCell:(IGMediaThumbnailCell *)arg2 isSuccess:(_Bool)arg3;
- (void)mediaThumbnailSectionController:(IGMediaThumbnailSectionController *)arg1 didStartLoadingImageForCell:(IGMediaThumbnailCell *)arg2;
@end

