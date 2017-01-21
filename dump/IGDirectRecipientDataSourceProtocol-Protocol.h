//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol IGDirectRecipientDataSourceProtocol <NSObject>
@property(readonly, nonatomic) NSArray *currentResults;
- (void)fetchDataWithRecipientUseLocalCache:(_Bool)arg1 successHandler:(void (^)(NSString *, NSArray *, _Bool))arg2 failureHandler:(void (^)(IGHTTPResponse *, NSDictionary *, NSError *))arg3;
@property(readonly, nonatomic) _Bool isLocal;
@property(copy, nonatomic) NSString *searchString;
@end

