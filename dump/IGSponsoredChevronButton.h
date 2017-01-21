//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGChevronTitleButton.h"

#import "IGActionSheetDelegate.h"
#import "IGSponsorableButton.h"

@class IGActionSheetConfiguration, IGFeedItem, NSMutableDictionary, NSString;

@interface IGSponsoredChevronButton : IGChevronTitleButton <IGActionSheetDelegate, IGSponsorableButton>
{
    _Bool _showIcon;
    IGActionSheetConfiguration *_actionSheetConfiguration;
    IGFeedItem *_feedItem;
    id <IGFeedItemLoggingProviderDelegate> _loggingDelegate;
    NSMutableDictionary *_tintedColors;
}

+ (id)button;
+ (id)chevronImage;
- (void).cxx_destruct;
@property(retain, nonatomic) IGActionSheetConfiguration *actionSheetConfiguration; // @synthesize actionSheetConfiguration=_actionSheetConfiguration;
- (void)actionSheetDismissedWithButtonTitled:(id)arg1;
- (void)actionSheetFinishedHiding;
@property(retain, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (id)init;
@property(nonatomic) __weak id <IGFeedItemLoggingProviderDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
- (void)onSponsoredPostLabelTapped;
- (void)setColor:(id)arg1 forState:(unsigned long long)arg2;
@property(nonatomic) _Bool showIcon; // @synthesize showIcon=_showIcon;
@property(retain, nonatomic) NSMutableDictionary *tintedColors; // @synthesize tintedColors=_tintedColors;
- (void)updateAppearance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

