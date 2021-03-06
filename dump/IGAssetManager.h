//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray;

@interface IGAssetManager : NSObject
{
    NSDictionary *_assetCategoryDictionary;
    _Bool _completed;
    NSMutableArray *_observers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)asyncFetch;
- (_Bool)fileExistsAtCategory:(id)arg1 fileName:(id)arg2;
- (void)finish;
- (id)init;
- (void)removeObserver:(id)arg1;
- (id)urlWithCategory:(id)arg1 fileName:(id)arg2;

@end

