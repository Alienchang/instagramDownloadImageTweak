//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGAutocompleteAbstractDataSource.h"

@class IGUserSession;

@interface IGHashtagListLocalDataSource : IGAutocompleteAbstractDataSource
{
    IGUserSession *_userSession;
}

+ (id)hashtagModelArrayFromMixedHashtagArray:(id)arg1;
- (void).cxx_destruct;
- (void)filterHashtags:(id)arg1;
- (id)initWithUserSession:(id)arg1;
- (void)setUnfilteredResults:(id)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

@end

