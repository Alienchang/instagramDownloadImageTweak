//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPTAnimationPeriod, NSDictionary;

@interface CPTAnimationOperation : NSObject
{
    _Bool canceled;
    CPTAnimationPeriod *period;
    long long animationCurve;
    id boundObject;
    SEL boundGetter;
    SEL boundSetter;
    id <CPTAnimationDelegate> delegate;
    id <NSCopying><NSObject> identifier;
    NSDictionary *userInfo;
}

- (void).cxx_destruct;
@property(nonatomic) long long animationCurve; // @synthesize animationCurve;
@property(nonatomic) SEL boundGetter; // @synthesize boundGetter;
@property(retain, nonatomic) id boundObject; // @synthesize boundObject;
@property(nonatomic) SEL boundSetter; // @synthesize boundSetter;
@property(nonatomic) __weak id <CPTAnimationDelegate> delegate; // @synthesize delegate;
- (id)description;
@property(copy, nonatomic) id <NSCopying><NSObject> identifier; // @synthesize identifier;
- (id)init;
@property(getter=isCanceled) _Bool canceled; // @synthesize canceled;
@property(retain, nonatomic) CPTAnimationPeriod *period; // @synthesize period;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo;

@end

