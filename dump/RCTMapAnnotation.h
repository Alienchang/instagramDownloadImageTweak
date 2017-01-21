//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKPointAnnotation.h"

#import "MKAnnotation.h"

@class NSString, UIColor, UIImage;

@interface RCTMapAnnotation : MKPointAnnotation <MKAnnotation>
{
    _Bool _hasLeftCallout;
    _Bool _hasRightCallout;
    _Bool _animateDrop;
    _Bool _draggable;
    NSString *_identifier;
    UIColor *_tintColor;
    UIImage *_image;
    unsigned long long _viewIndex;
    unsigned long long _leftCalloutViewIndex;
    unsigned long long _rightCalloutViewIndex;
    unsigned long long _detailCalloutViewIndex;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool animateDrop; // @synthesize animateDrop=_animateDrop;
@property(nonatomic) unsigned long long detailCalloutViewIndex; // @synthesize detailCalloutViewIndex=_detailCalloutViewIndex;
@property(nonatomic) _Bool draggable; // @synthesize draggable=_draggable;
@property(nonatomic) _Bool hasLeftCallout; // @synthesize hasLeftCallout=_hasLeftCallout;
@property(nonatomic) _Bool hasRightCallout; // @synthesize hasRightCallout=_hasRightCallout;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned long long leftCalloutViewIndex; // @synthesize leftCalloutViewIndex=_leftCalloutViewIndex;
@property(nonatomic) unsigned long long rightCalloutViewIndex; // @synthesize rightCalloutViewIndex=_rightCalloutViewIndex;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) unsigned long long viewIndex; // @synthesize viewIndex=_viewIndex;

// Remaining properties
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end
