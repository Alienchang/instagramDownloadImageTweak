//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedNetworkSource, NSArray, NSMutableSet;

@interface IGFetchedResultsController : NSObject
{
    _Bool _blockUpdatedNotifications;
    id <IGFetchedResultsControllerDelegate> _delegate;
    IGFeedNetworkSource *_feedSource;
    NSArray *_previousObjects;
    NSArray *_currentObjects;
    NSMutableSet *_updatedObjects;
}

- (void).cxx_destruct;
@property _Bool blockUpdatedNotifications; // @synthesize blockUpdatedNotifications=_blockUpdatedNotifications;
@property(retain, nonatomic) NSArray *currentObjects; // @synthesize currentObjects=_currentObjects;
- (void)dealloc;
@property(nonatomic) __weak id <IGFetchedResultsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didUpdateToObjects:(id)arg1;
@property(nonatomic) __weak IGFeedNetworkSource *feedSource; // @synthesize feedSource=_feedSource;
- (id)initWithFeedSource:(id)arg1;
- (void)onPostUpdated:(id)arg1;
@property(retain, nonatomic) NSArray *previousObjects; // @synthesize previousObjects=_previousObjects;
@property(retain, nonatomic) NSMutableSet *updatedObjects; // @synthesize updatedObjects=_updatedObjects;

@end

