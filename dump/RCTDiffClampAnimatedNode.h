//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTValueAnimatedNode.h"

@class NSNumber;

@interface RCTDiffClampAnimatedNode : RCTValueAnimatedNode
{
    NSNumber *_inputNodeTag;
    double _min;
    double _max;
    double _lastValue;
}

- (void).cxx_destruct;
- (id)initWithTag:(id)arg1 config:(id)arg2;
- (double)inputNodeValue;
- (void)onAttachedToNode:(id)arg1;
- (void)performUpdate;

@end

