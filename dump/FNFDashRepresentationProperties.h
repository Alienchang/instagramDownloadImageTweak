//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FNFDashRepresentationProperties : NSObject
{
    unsigned int _bandwidth;
    unsigned int _width;
    unsigned int _height;
    NSString *_representationId;
    NSString *_qualityLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int bandwidth; // @synthesize bandwidth=_bandwidth;
@property(readonly, nonatomic) unsigned int height; // @synthesize height=_height;
- (id)initWithTrack:(id)arg1;
@property(readonly, copy, nonatomic) NSString *qualityLabel; // @synthesize qualityLabel=_qualityLabel;
@property(readonly, copy, nonatomic) NSString *representationId; // @synthesize representationId=_representationId;
@property(readonly, nonatomic) unsigned int width; // @synthesize width=_width;

@end

