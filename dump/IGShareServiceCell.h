//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGCollectionViewCell.h"

@class IGKVOHandle, IGShareService;

@interface IGShareServiceCell : IGCollectionViewCell
{
    IGShareService *_shareService;
    IGKVOHandle *_shareServiceObserver;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)setShareService:(id)arg1 userSession:(id)arg2;
@property(retain, nonatomic) IGKVOHandle *shareServiceObserver; // @synthesize shareServiceObserver=_shareServiceObserver;
@property(readonly, nonatomic) IGShareService *shareService; // @synthesize shareService=_shareService;
- (void)updateShareStateForUserSession:(id)arg1;

@end
