//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGStoryTappableOverlayModelType.h"

@class IGUser, NSString;

@interface IGStoryMention : NSObject <IGStoryTappableOverlayModelType>
{
    double _rotation;
    IGUser *_user;
    struct CGPoint _center;
    struct CGSize _size;
}

+ (id)storyMentionWithServerDict:(id)arg1;
+ (id)storyMentionsFromServerArray:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)uploadArrayFromStoryMentions:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(readonly, nonatomic) NSString *displayText;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 rotation:(double)arg4;
@property(readonly, nonatomic) double rotation; // @synthesize rotation=_rotation;
- (id)sharingInfo;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;

@end

