//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileManager, NSString;

@interface IGDiskStore : NSObject
{
    NSString *_path;
    NSFileManager *_fileManager;
}

- (void).cxx_destruct;
- (_Bool)containsKey:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (id)initWithPath:(id)arg1;
- (id)objectForKey:(id)arg1;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (id)pathFromKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end

