//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGFeedItemTrackingManager : NSObject
{
    id <IGAPIClient> _networker;
}

+ (_Bool)allowExploreTrackingForFeedItem:(id)arg1;
+ (_Bool)allowOrganicTrackingForFeedItem:(id)arg1;
+ (_Bool)allowSponsoredPostForFeedItem:(id)arg1;
+ (id)currentModule;
+ (id)exploreFeedItemTracker;
+ (id)exploreItemImpressionTracker;
+ (void)hideFeedItem:(id)arg1 extraDictionary:(id)arg2;
+ (id)impressionTrackerForFeedItem:(id)arg1;
+ (_Bool)isAdRatingFeed;
+ (_Bool)isCTAAdvertiserProfile;
+ (_Bool)isCommentingFromMainFeed;
+ (_Bool)isHotOrNotSurvey;
+ (_Bool)isLikesViewAd:(id)arg1;
+ (_Bool)isMainFeed;
+ (_Bool)isSingleMediaAdSharing;
+ (_Bool)isStoryViewer;
+ (_Bool)isViewingCommentLikers;
+ (_Bool)isWatchAndAction;
+ (void)moreActionSheetForFeedItem:(id)arg1 dismissedWithButtonTitled:(id)arg2 userInfo:(id)arg3;
+ (id)organicFeedItemTracker;
+ (id)organicItemImpressionTracker;
+ (void)removeFeedItem:(id)arg1;
+ (void)reportEvent:(id)arg1 immediately:(_Bool)arg2;
+ (id)sponsoredFeedItemTracker;
+ (id)sponsoredItemImpressionTracker;
+ (id)trackerForFeedItem:(id)arg1;
+ (id)trackingTokenStringForPost:(id)arg1;
+ (id)trackingTokenStringTypeForPost:(id)arg1;
+ (_Bool)useNoLatencyLoggingForPost:(id)arg1;
- (void).cxx_destruct;
- (void)analyticsNoLatencyUploadSuccess:(id)arg1;
- (void)brandLiftQuestionAnswered:(id)arg1;
- (void)brandLiftQuestionDidDismiss:(id)arg1;
- (void)brandLiftSurveyPrimerViewDidDismiss:(id)arg1;
- (void)brandLiftSurveyWillAppear:(id)arg1;
- (void)commentButtonTapped:(id)arg1;
- (void)commentComposed:(id)arg1;
- (void)commentLiked:(id)arg1;
- (void)commentPosted:(id)arg1;
- (void)commentReplyButtonTapped:(id)arg1;
- (void)commentUnliked:(id)arg1;
- (void)dealloc;
- (void)didTapHeaderImage:(id)arg1;
- (void)didTapHeaderTitle:(id)arg1;
- (void)didTapMedia:(id)arg1;
- (void)feedItemDidAppear:(id)arg1;
- (void)feedItemDidDisappear:(id)arg1;
- (void)feedItemDidScrollOffScreen:(id)arg1;
- (void)feedItemDidStartViewing:(id)arg1;
- (void)feedItemHideReasonSelected:(id)arg1;
- (void)feedItemHideSpam:(id)arg1;
- (void)feedItemLiked:(id)arg1;
- (void)feedItemLocationTapped:(id)arg1;
- (void)feedItemMediaDidAppearInFull:(id)arg1;
- (void)feedItemPinchAttempted:(id)arg1;
- (void)feedItemReportInappropriate:(id)arg1;
- (void)feedItemSaved:(id)arg1;
- (void)feedItemURLTapped:(id)arg1;
- (void)feedItemUnliked:(id)arg1;
- (void)feedItemUnsaved:(id)arg1;
- (void)feedItemUserTapped:(id)arg1;
- (void)feedItemZoomEndedWithDuration:(id)arg1;
- (void)feedItemsDidUpdate:(id)arg1;
- (void)headerLabelTapped:(id)arg1;
- (void)hotOrNotAdDidAttempt:(id)arg1;
- (void)hotOrNotAdDidDraw:(id)arg1;
- (void)hotOrNotAdDidLose:(id)arg1;
- (void)hotOrNotAdDidSwitch:(id)arg1;
- (void)hotOrNotAdDidWin:(id)arg1;
- (void)includeVideoMetadataFromNotification:(id)arg1 intoEvent:(id)arg2;
- (id)initWithNetworker:(id)arg1;
- (void)logEventName:(id)arg1 notification:(id)arg2;
- (void)logHotOrNotActionEventForNotification:(id)arg1 eventType:(id)arg2;
- (void)logHotOrNotResultEventForNotification:(id)arg1 eventType:(id)arg2;
- (void)moreButtonTapped:(id)arg1;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
- (void)numberOfCommentLikesTapped:(id)arg1;
- (id)stringForAudioToggleReason:(long long)arg1;
- (id)stringForVideoPlaybackReason:(long long)arg1;
- (void)surveyAnswered:(id)arg1;
- (void)surveyPrimerViewDidDismiss:(id)arg1;
- (void)surveyWillAppear:(id)arg1;
- (void)videoCompleted:(id)arg1;
- (void)videoDidToggleAudio:(id)arg1;
- (void)videoDisplayed:(id)arg1;
- (void)videoPaused:(id)arg1;
- (void)videoShouldStartPlaying:(id)arg1;
- (void)videoStarted:(id)arg1;
- (void)videoTapped:(id)arg1;
- (void)videoUnpaused:(id)arg1;
- (void)videoViewDidComplete:(id)arg1;

@end
