//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeMethod.h"

@class NSArray, NSInvocation, NSString;

@interface RCTModuleMethod : NSObject <RCTBridgeMethod>
{
    Class _moduleClass;
    NSInvocation *_invocation;
    NSArray *_argumentBlocks;
    NSString *_methodSignature;
    SEL _selector;
    NSString *_JSMethodName;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *JSMethodName; // @synthesize JSMethodName=_JSMethodName;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long functionType;
- (id)init;
- (id)initWithMethodSignature:(id)arg1 JSMethodName:(id)arg2 moduleClass:(Class)arg3;
- (id)invokeWithBridge:(id)arg1 module:(id)arg2 arguments:(id)arg3;
- (id)methodName;
@property(readonly, nonatomic) Class moduleClass; // @synthesize moduleClass=_moduleClass;
- (void)processMethodSignature;
@property(readonly, nonatomic) SEL selector;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

