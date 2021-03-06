//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGUserTitleSubtitleViewLayoutSpec : NSObject
{
    double _viewHeight;
    double _titleLeftSpace;
    double _titleRightSpace;
    struct CGSize _avatarSize;
    struct UIEdgeInsets _insets;
}

+ (id)directStoryRecipientStyle;
@property(readonly, nonatomic) struct CGSize avatarSize; // @synthesize avatarSize=_avatarSize;
- (id)initWithViewHeight:(double)arg1 insets:(struct UIEdgeInsets)arg2 avatarSize:(struct CGSize)arg3 titleLeftSpace:(double)arg4 titleRightSpace:(double)arg5;
@property(readonly, nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double titleLeftSpace; // @synthesize titleLeftSpace=_titleLeftSpace;
@property(readonly, nonatomic) double titleRightSpace; // @synthesize titleRightSpace=_titleRightSpace;
@property(readonly, nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;

@end

