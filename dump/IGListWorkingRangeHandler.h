//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGListWorkingRangeHandler : NSObject
{
    struct unordered_set<_IGListWorkingRangeHandlerIndexPath, _IGListWorkingRangeHandlerIndexPathHash, std::__1::equal_to<_IGListWorkingRangeHandlerIndexPath>, std::__1::allocator<_IGListWorkingRangeHandlerIndexPath>> _visibleSectionIndices;
    struct unordered_set<_IGListWorkingRangeHandlerSectionControllerWrapper, _IGListWorkingRangeHashID, std::__1::equal_to<_IGListWorkingRangeHandlerSectionControllerWrapper>, std::__1::allocator<_IGListWorkingRangeHandlerSectionControllerWrapper>> _workingRangeSectionControllers;
    long long _workingRangeSize;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didEndDisplayingItemAtIndexPath:(id)arg1 forListAdapter:(id)arg2;
- (id)initWithWorkingRangeSize:(long long)arg1;
- (void)updateWorkingRangesWithListAdapter:(id)arg1;
- (void)willDisplayItemAtIndexPath:(id)arg1 forListAdapter:(id)arg2;
@property(readonly, nonatomic) long long workingRangeSize; // @synthesize workingRangeSize=_workingRangeSize;

@end

