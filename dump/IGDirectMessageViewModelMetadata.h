//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectMessageCellLayoutSpec, IGDirectMessageReactionsViewModel, NSString;

@interface IGDirectMessageViewModelMetadata : NSObject
{
    _Bool _senderIsCurrentUser;
    _Bool _isPendingThread;
    _Bool _isGroupMessage;
    IGDirectMessageCellLayoutSpec *_layoutSpec;
    NSString *_currentUserPK;
    IGDirectMessageReactionsViewModel *_reactionsViewModel;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *currentUserPK; // @synthesize currentUserPK=_currentUserPK;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSenderPK:(id)arg1 currentUserPK:(id)arg2 nextSenderPK:(id)arg3 previousSenderPK:(id)arg4 reactionsViewModel:(id)arg5 isPendingThread:(_Bool)arg6 isGroupMessage:(_Bool)arg7 viewWidth:(double)arg8;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isGroupMessage; // @synthesize isGroupMessage=_isGroupMessage;
@property(readonly, nonatomic) _Bool isPendingThread; // @synthesize isPendingThread=_isPendingThread;
@property(readonly, nonatomic) IGDirectMessageCellLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
@property(readonly, nonatomic) IGDirectMessageReactionsViewModel *reactionsViewModel; // @synthesize reactionsViewModel=_reactionsViewModel;
@property(readonly, nonatomic) _Bool senderIsCurrentUser; // @synthesize senderIsCurrentUser=_senderIsCurrentUser;

@end

