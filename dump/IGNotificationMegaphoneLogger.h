//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGGenericMegaphoneLogger.h"

@interface IGNotificationMegaphoneLogger : NSObject <IGGenericMegaphoneLogger>
{
    _Bool _seen;
    unsigned long long _displaySource;
}

@property(readonly, nonatomic) unsigned long long displaySource; // @synthesize displaySource=_displaySource;
- (id)initWithDisplaySource:(unsigned long long)arg1;
- (void)logEvent:(id)arg1;
- (void)logMegaphone:(id)arg1 tappingButton:(id)arg2;
- (void)logMegaphoneButtonTapped:(id)arg1;
- (void)logMegaphoneButtonTapped:(id)arg1 withReason:(id)arg2;
- (void)logMegaphoneDismissed:(id)arg1;
- (void)logMegaphoneWasSeen:(id)arg1;
@property(nonatomic) _Bool seen; // @synthesize seen=_seen;

@end

