//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGPreviewActionItem.h"

@class NSString;

@interface IGPreviewAction : NSObject <IGPreviewActionItem>
{
    NSString *_title;
    CDUnknownBlockType _handler;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (id)initWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
