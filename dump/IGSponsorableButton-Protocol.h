//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IGActionSheetConfiguration, IGFeedItem, UIColor;

@protocol IGSponsorableButton
@property(retain, nonatomic) IGActionSheetConfiguration *actionSheetConfiguration;
@property(retain, nonatomic) IGFeedItem *feedItem;
@property(nonatomic) __weak id <IGFeedItemLoggingProviderDelegate> loggingDelegate;
- (void)setColor:(UIColor *)arg1 forState:(unsigned long long)arg2;
@property(nonatomic) _Bool showIcon;
@end
