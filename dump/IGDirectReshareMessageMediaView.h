//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface IGDirectReshareMessageMediaView : UIView
{
    NSArray *_mediaViews;
    double _thumbnailSize;
}

- (void).cxx_destruct;
- (void)configureWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(readonly, copy, nonatomic) NSArray *mediaViews; // @synthesize mediaViews=_mediaViews;
- (void)reset;
@property(nonatomic) double thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
- (void)setupSubviews;

@end

