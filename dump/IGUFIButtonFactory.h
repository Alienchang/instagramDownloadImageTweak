//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGUFIButtonFactory : NSObject
{
}

+ (void)animateSpringButton:(id)arg1 withIsSet:(_Bool)arg2;
+ (id)commentButtonImageNameForUFIButtonStyleType:(long long)arg1;
+ (id)commentButtonWithColorType:(long long)arg1 ufiButtonStyleType:(long long)arg2;
+ (id)countTextButtonWithColorType:(long long)arg1;
+ (id)directButtonWithColorType:(long long)arg1 ufiButtonStyleType:(long long)arg2;
+ (struct UIEdgeInsets)emptyTextButtonContentEdgeInsets;
+ (id)iconButtonWithImageName:(id)arg1 ufiButtonStyleType:(long long)arg2 colorType:(long long)arg3 accessibilityLabel:(id)arg4 accessibilityHint:(id)arg5 accessibilityIdentifier:(id)arg6;
+ (id)iconWithCountLabelButtonWithButtonType:(long long)arg1;
+ (id)likeButtonImageNameForUFIButtonStyleType:(long long)arg1;
+ (id)likeButtonWithColorType:(long long)arg1 ufiButtonStyleType:(long long)arg2;
+ (id)likedButtonImageNameForUFIButtonStyleType:(long long)arg1;
+ (id)moreButtonWithColorType:(long long)arg1;
+ (id)saveButtonImageNameForUFIButtonStyleType:(long long)arg1;
+ (id)saveButtonWithColorType:(long long)arg1 ufiButtonStyleType:(long long)arg2;
+ (id)savedButtonImageNameForUFIButtonStyleType:(long long)arg1;
+ (id)sendButtonImageNameForUFIButtonStyleType:(long long)arg1;
+ (id)shareButtonImageNameForUFIButtonStyleType:(long long)arg1;
+ (id)shareButtonWithColorType:(long long)arg1 ufiButtonStyleType:(long long)arg2;
+ (struct UIEdgeInsets)textButtonContentEdgeInsets;
+ (id)textButtonWithColorType:(long long)arg1 selectedColor:(id)arg2;
+ (void)updateCommentLikeIconButton:(id)arg1 hasLiked:(_Bool)arg2 animated:(_Bool)arg3;
+ (void)updateLikeIconButton:(id)arg1 hasLiked:(_Bool)arg2 animated:(_Bool)arg3;
+ (void)updateSaveIconButton:(id)arg1 hasSaved:(_Bool)arg2 animated:(_Bool)arg3;
+ (id)viewButtonWithColorType:(long long)arg1 ufiButtonStyleType:(long long)arg2;

@end

