//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError;

@protocol FNFDataLoaderDelegate
- (void)dataWasReceivedForTrack:(long long)arg1 andIsComplete:(_Bool)arg2;
- (void)loadingDidFailWithError:(NSError *)arg1;
- (void)reportWarning:(NSError *)arg1;
@end

