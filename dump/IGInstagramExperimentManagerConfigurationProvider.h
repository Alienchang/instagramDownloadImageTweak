//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGExperimentManagerConfigurationProvider.h"

@class NSString;

@interface IGInstagramExperimentManagerConfigurationProvider : NSObject <IGExperimentManagerConfigurationProvider>
{
    CDUnknownBlockType _userSessionProvider;
}

+ (id)providerWithUserSessionProvider:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)allExperimentSpecs;
- (id)currentExperimentSets;
- (id)deviceExperimentSet;
- (id)initWithUserSessionProvider:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

