//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface IGAnalyticsMetadata : NSObject
{
    NSMutableArray *_analyticsNavStack;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSMutableArray *analyticsNavStack; // @synthesize analyticsNavStack=_analyticsNavStack;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArray:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)newAnalyticsNavState;
- (void)popAnalyticsMetadataForViewController:(id)arg1;
- (id)popAnalyticsNavEvent;
- (void)pushAnalyticsMetadataForViewController:(id)arg1;
- (void)pushAnalyticsNavEvent:(id)arg1;

@end
