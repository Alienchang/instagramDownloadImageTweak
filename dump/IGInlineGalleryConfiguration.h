//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGInlineGalleryConfiguration : NSObject
{
}

+ (long long)backoffUnitInHours;
+ (_Bool)canAutoPromptInlineGallery:(id)arg1;
+ (long long)consecutiveHardDismissals;
+ (id)debugSummaryString;
+ (id)effectiveQEGroupName;
+ (void)incrementDismissalCount;
+ (long long)intValueOf:(id)arg1 withDefault:(id)arg2;
+ (_Bool)isEnabled;
+ (id)lastInteractedTime;
+ (_Bool)longPressShortcutEnabled;
+ (long long)lookbackTimeInHours;
+ (long long)maxBackoffInDays;
+ (long long)maxDismissals;
+ (long long)maxItemsToShow;
+ (long long)newMediaThreshold;
+ (_Bool)noBackoffEnabled;
+ (void)resetDismissalCount;
+ (void)updateLastInteractedTime;

@end

