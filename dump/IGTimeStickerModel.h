//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class NSArray, NSDate, NSString;

@interface IGTimeStickerModel : NSObject <IGListDiffable>
{
    NSString *_pk;
    NSDate *_date;
    NSArray *_stickers;
}

+ (id)defaultTimeSticker;
- (void).cxx_destruct;
- (void)configureWithDate:(id)arg1;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)diffIdentifier;
- (unsigned long long)hash;
- (id)initWithDict:(id)arg1;
- (id)initWithPk:(id)arg1 stickers:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
@property(readonly, copy, nonatomic) NSArray *stickers; // @synthesize stickers=_stickers;

@end

