//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGDiscoverPeopleCellDelegate.h"
#import "IGListSectionType.h"

@class IGFeaturedUserInfo, IGUserSession, NSString;

@interface IGFindUsersSectionController : IGListSectionController <IGDiscoverPeopleCellDelegate, IGListSectionType>
{
    _Bool _showDismissButton;
    IGFeaturedUserInfo *_featuredUserInfo;
    id <IGFollowPeopleLoggerProtocol> _logger;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)cellForItemAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (void)discoverPeopleCellDidTapDismiss:(id)arg1;
- (void)discoverPeopleCellDidTapFollow:(id)arg1;
- (void)discoverPeopleCellDidTapFollowing:(id)arg1;
- (void)discoverPeopleCellDidTapProfileRing:(id)arg1;
@property(readonly, nonatomic) IGFeaturedUserInfo *featuredUserInfo; // @synthesize featuredUserInfo=_featuredUserInfo;
- (id)initWithLogger:(id)arg1 userSession:(id)arg2 showDismissButton:(_Bool)arg3;
@property(readonly, nonatomic) id <IGFollowPeopleLoggerProtocol> logger; // @synthesize logger=_logger;
- (long long)numberOfItems;
@property(readonly, nonatomic) _Bool showDismissButton; // @synthesize showDismissButton=_showDismissButton;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

