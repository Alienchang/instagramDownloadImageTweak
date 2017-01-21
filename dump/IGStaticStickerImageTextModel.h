//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGStaticStickerSingleModel.h"

@class NSString, NSURL, UIColor;

@interface IGStaticStickerImageTextModel : IGStaticStickerSingleModel
{
    NSURL *_imageURL;
    double _imageWidthRatio;
    double _imageWidth;
    double _imageHeight;
    double _aspectRatio;
    NSString *_text;
    double _fontSize;
    UIColor *_textColor;
    UIColor *_textBackgroundColor;
    double _xRatio;
    double _yRatio;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(readonly, nonatomic) double imageHeight; // @synthesize imageHeight=_imageHeight;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) double imageWidth; // @synthesize imageWidth=_imageWidth;
@property(readonly, nonatomic) double imageWidthRatio; // @synthesize imageWidthRatio=_imageWidthRatio;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) UIColor *textBackgroundColor; // @synthesize textBackgroundColor=_textBackgroundColor;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) double xRatio; // @synthesize xRatio=_xRatio;
@property(readonly, nonatomic) double yRatio; // @synthesize yRatio=_yRatio;

@end
