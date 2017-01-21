//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGMediaPermissions : NSObject
{
}

+ (void)checkLibraryPermissions:(CDUnknownBlockType)arg1;
+ (_Bool)hasDeniedCameraAccess;
+ (_Bool)isAudioAndVideoAuthorized;
+ (_Bool)isAudioAuthorizationDetermined;
+ (_Bool)isAudioAuthorized;
+ (_Bool)isLibraryAuthorized;
+ (_Bool)isLibraryPermissionDetermined;
+ (_Bool)isVideoAuthorizationDetermined;
+ (_Bool)isVideoAuthorized;
+ (void)requestAudioAuthorization:(CDUnknownBlockType)arg1;
+ (void)requestCameraAuthorization:(CDUnknownBlockType)arg1;

@end

