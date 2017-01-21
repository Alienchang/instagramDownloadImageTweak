//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError;

@interface IGEditProfileReactFetcherResolver : NSObject
{
    NSDictionary *_userData;
    NSError *_networkError;
    CDUnknownBlockType _resolver;
    CDUnknownBlockType _rejecter;
    id <IGRequestToken> _token;
}

- (void).cxx_destruct;
- (void)resolveFailure;
- (void)resolveSuccess;
- (_Bool)setNetworkErrorAndResolveIfPossible:(id)arg1;
- (_Bool)setPromiseResolverAndResolveIfPossible:(CDUnknownBlockType)arg1 rejecter:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) id <IGRequestToken> token; // @synthesize token=_token;
- (_Bool)setUserDataAndResolveIfPossible:(id)arg1;

@end

