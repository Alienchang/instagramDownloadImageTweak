//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItem, NSString;

@interface IGTranslationNetworkDataSource : NSObject
{
    _Bool _loading;
    int _currentType;
    id <IGTranslationNetworkDataSourceDelegate> _delegate;
    NSString *_currentPK;
    IGFeedItem *_feedItem;
    id <IGRequestToken> _currentRequestToken;
    id <IGAPIClient> _networker;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *currentPK; // @synthesize currentPK=_currentPK;
@property(retain, nonatomic) id <IGRequestToken> currentRequestToken; // @synthesize currentRequestToken=_currentRequestToken;
@property(nonatomic) int currentType; // @synthesize currentType=_currentType;
@property(nonatomic) __weak id <IGTranslationNetworkDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (id)initWithNetworker:(id)arg1;
- (void)loadTranslationForFeedItem:(id)arg1 userSession:(id)arg2;
- (void)loadTranslationForPK:(id)arg1 contentType:(int)arg2;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;

@end

