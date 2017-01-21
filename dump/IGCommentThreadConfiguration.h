//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGCommentThreadConfiguration : NSObject
{
    _Bool _showKeyboard;
    _Bool _supportPagination;
    long long _entryPoint;
    NSString *_sourceAnalyticsModule;
    NSString *_previewCommentID;
}

- (void).cxx_destruct;
- (_Bool)allowScrollToFetchMore;
- (_Bool)disableAutoScrollToBottom;
@property(readonly, nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
- (id)initWithCommentThreadEntryPoint:(long long)arg1 previewCommentID:(id)arg2 showKeyboard:(_Bool)arg3 sourceAnalyticsModule:(id)arg4;
@property(readonly, copy, nonatomic) NSString *previewCommentID; // @synthesize previewCommentID=_previewCommentID;
@property(readonly, nonatomic) _Bool showKeyboard; // @synthesize showKeyboard=_showKeyboard;
@property(readonly, copy, nonatomic) NSString *sourceAnalyticsModule; // @synthesize sourceAnalyticsModule=_sourceAnalyticsModule;
@property(readonly, nonatomic) _Bool supportPagination; // @synthesize supportPagination=_supportPagination;
- (id)targetCommentID;

@end

