//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGInstaVideoImageFetcher : NSObject
{
    id <IGInstaVideoImageFetcherDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGInstaVideoImageFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchImageWithUrl:(id)arg1 userInfo:(id)arg2;

@end
