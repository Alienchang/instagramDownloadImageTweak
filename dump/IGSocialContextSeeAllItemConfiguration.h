//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class NSArray, NSString;

@interface IGSocialContextSeeAllItemConfiguration : NSObject <IGListDiffable>
{
    NSString *_title;
    NSString *_contextPK;
    NSArray *_forcedUserIds;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *contextPK; // @synthesize contextPK=_contextPK;
- (id)diffIdentifier;
@property(readonly, copy, nonatomic) NSArray *forcedUserIds; // @synthesize forcedUserIds=_forcedUserIds;
- (id)initWithTitle:(id)arg1 contextPK:(id)arg2 forcedUserIds:(id)arg3;
- (_Bool)isEqualToDiffableObject:(id)arg1;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

@end
