//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class IGDirectInboxCellButtonConfig, IGUser, NSAttributedString, NSString, NSURL, UIImage;

@interface IGDirectInboxThreadCellViewModel : NSObject <IGListDiffable>
{
    _Bool _displaysUnreadIndicator;
    _Bool _isMuted;
    _Bool _isPending;
    _Bool _shouldHideThumbnail;
    _Bool _isSwipedOpen;
    _Bool _isSelected;
    _Bool _isEditable;
    NSString *_threadId;
    double _cellHeight;
    IGUser *_firstUser;
    IGUser *_secondUser;
    NSString *_nameText;
    NSAttributedString *_messageText;
    NSString *_timestampText;
    NSURL *_imageURL;
    UIImage *_placeholderImage;
    IGDirectInboxCellButtonConfig *_buttonConfig;
    IGUser *_currentUser;
}

- (void).cxx_destruct;
- (id)accessibilityLabelFromThread:(id)arg1;
@property(retain, nonatomic) IGDirectInboxCellButtonConfig *buttonConfig; // @synthesize buttonConfig=_buttonConfig;
- (id)buttonConfigFromThread:(id)arg1;
@property(readonly, nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(readonly, nonatomic) IGUser *currentUser; // @synthesize currentUser=_currentUser;
- (id)description;
- (id)diffIdentifier;
@property(readonly, nonatomic) _Bool displaysUnreadIndicator; // @synthesize displaysUnreadIndicator=_displaysUnreadIndicator;
@property(readonly, nonatomic) IGUser *firstUser; // @synthesize firstUser=_firstUser;
- (unsigned long long)hash;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (id)initWithThread:(id)arg1 currentUser:(id)arg2;
@property(nonatomic) _Bool isEditable; // @synthesize isEditable=_isEditable;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
@property(readonly, nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(readonly, nonatomic) _Bool isPending; // @synthesize isPending=_isPending;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool isSwipedOpen; // @synthesize isSwipedOpen=_isSwipedOpen;
@property(readonly, nonatomic) NSAttributedString *messageText; // @synthesize messageText=_messageText;
- (id)messageTextFromThread:(id)arg1;
- (id)mostRecentImageURLFromImageURLProvider:(id)arg1 imageHeight:(double)arg2;
@property(readonly, nonatomic) NSString *nameText; // @synthesize nameText=_nameText;
@property(readonly, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
- (id)preloadedImageFromImageURLProvider:(id)arg1;
- (_Bool)ravenEnabled;
@property(readonly, nonatomic) IGUser *secondUser; // @synthesize secondUser=_secondUser;
@property(readonly, nonatomic) _Bool shouldHideThumbnail; // @synthesize shouldHideThumbnail=_shouldHideThumbnail;
@property(readonly, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(readonly, nonatomic) NSString *timestampText; // @synthesize timestampText=_timestampText;
- (id)usernameTextFromThread:(id)arg1;

@end

