//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUser, IGUserTitleSubtitleViewLayoutSpec, NSString;

@interface IGUserTitleSubtitleViewModel : NSObject
{
    NSString *_title;
    NSString *_subtitle;
    IGUser *_firstUser;
    IGUser *_secondUser;
    IGUserTitleSubtitleViewLayoutSpec *_layoutSpec;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGUser *firstUser; // @synthesize firstUser=_firstUser;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 firstUser:(id)arg3 secondUser:(id)arg4 layoutSpec:(id)arg5;
- (_Bool)isEqual:(id)arg1;
@property(retain, nonatomic) IGUserTitleSubtitleViewLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
@property(readonly, nonatomic) IGUser *secondUser; // @synthesize secondUser=_secondUser;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

@end
