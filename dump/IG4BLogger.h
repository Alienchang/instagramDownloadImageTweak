//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IG4BLogger : NSObject
{
    NSString *_flow;
    NSString *_waterfallID;
    NSString *_entryPoint;
    NSString *_step;
    NSString *_fbUserID;
}

+ (id)loggerWithLogger:(id)arg1 atStep:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, copy, nonatomic) NSString *fbUserID; // @synthesize fbUserID=_fbUserID;
@property(readonly, copy, nonatomic) NSString *flow; // @synthesize flow=_flow;
- (id)initWithFlow:(id)arg1 entrypoint:(id)arg2 step:(id)arg3;
- (id)initWithFlow:(id)arg1 entrypoint:(id)arg2 step:(id)arg3 fbUserId:(id)arg4;
- (id)initWithFlow:(id)arg1 entrypoint:(id)arg2 step:(id)arg3 fbUserId:(id)arg4 waterfallID:(id)arg5;
- (_Bool)isIG4BEventValid:(id)arg1;
- (void)logEvent:(id)arg1;
@property(readonly, copy, nonatomic) NSString *step; // @synthesize step=_step;
@property(readonly, copy, nonatomic) NSString *waterfallID; // @synthesize waterfallID=_waterfallID;

@end

