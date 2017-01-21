//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSDictionary, UIImage;

@interface IGStyledStringAttachment : NSObject
{
    struct __CTRunDelegate *delegate;
    UIImage *_image;
    double _leftBearing;
    double _rightBearing;
    NSAttributedString *_attributedString;
    NSDictionary *_imageAttributes;
    struct CGRect _bounds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
- (void)dealloc;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSDictionary *imageAttributes; // @synthesize imageAttributes=_imageAttributes;
- (id)initWithImage:(id)arg1;
@property(nonatomic) double leftBearing; // @synthesize leftBearing=_leftBearing;
@property(nonatomic) double rightBearing; // @synthesize rightBearing=_rightBearing;

@end

