//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGHTTPStack.h"

@class NSString;

@interface IGTigonLigerStack : NSObject <IGHTTPStack>
{
    struct unique_ptr<IGTigonLigerServices, std::__1::default_delete<IGTigonLigerServices>> _tigonLigerServices;
    unsigned int _samplingRate;
    CDUnknownBlockType _sandboxProvider;
    unsigned long long _nsInputStreamBufferLimit;
    _Bool _zeroProtocolEnabled;
    _Bool _enableHandlerAbortTxnOnBadStatus;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct TigonService *)getTigonLigerService;
- (struct TigonRequest)getTigonRequestFromIGURLRequest:(id)arg1;
- (id)initWithSamplingRate:(unsigned int)arg1 withZeroProtocol:(_Bool)arg2 andSandboxProvider:(CDUnknownBlockType)arg3 inputStreamBufferLimit:(unsigned long long)arg4 enableHandlerAbortTxnOnBadStatus:(_Bool)arg5;
@property(nonatomic) long long maxConcurrentOperationCount;
- (id)startRequest:(id)arg1 policy:(id)arg2 callbackQueue:(id)arg3 responseReceivedHandler:(CDUnknownBlockType)arg4 bytesReceivedHandler:(CDUnknownBlockType)arg5 successHandler:(CDUnknownBlockType)arg6 failureHandler:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

