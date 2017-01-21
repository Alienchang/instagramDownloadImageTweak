//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMessageViewModelProtocol.h"
#import "IGDirectReshareMessageHeaderViewModel.h"
#import "IGDirectReshareMessageMediaViewModel.h"
#import "IGListDiffable.h"

@class IGDirectMessageMetadata, IGDirectMessageViewModelMetadata, IGUser, NSArray, NSString;

@interface IGDirectProfileMessageViewModel : NSObject <IGDirectMessageViewModelProtocol, IGDirectReshareMessageHeaderViewModel, IGDirectReshareMessageMediaViewModel, IGListDiffable>
{
    IGDirectMessageMetadata *_messageMetadata;
    IGDirectMessageViewModelMetadata *_viewModelMetadata;
    IGUser *_sharedUser;
    NSArray *_previewMedia;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double cellHeight;
@property(readonly, nonatomic) struct CGSize contentSize;
@property(readonly, copy) NSString *description;
- (id)diffIdentifier;
@property(readonly) unsigned long long hash;
- (id)initWithProfileMessage:(id)arg1 viewModelMetadata:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
@property(readonly, nonatomic) IGDirectMessageMetadata *messageMetadata; // @synthesize messageMetadata=_messageMetadata;
@property(readonly, copy, nonatomic) NSArray *previewMedia; // @synthesize previewMedia=_previewMedia;
- (id)resharePreviewMedia;
- (id)reshareSubtitle;
- (id)reshareTitle;
- (id)reshareUser;
- (_Bool)senderIsCurrentUser;
@property(readonly, nonatomic) IGUser *sharedUser; // @synthesize sharedUser=_sharedUser;
- (double)thumbnailSize;
@property(readonly, nonatomic) IGDirectMessageViewModelMetadata *viewModelMetadata; // @synthesize viewModelMetadata=_viewModelMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
