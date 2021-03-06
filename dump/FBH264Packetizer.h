//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBVideoStreamingErrorProcessor.h"

@class FBRtmpSession, NSString;

@interface FBH264Packetizer : NSObject <FBVideoStreamingErrorProcessor>
{
    shared_ptr_aecb8741 _sps;
    shared_ptr_aecb8741 _pps;
    vector_a3426c4e _outbuffer;
    _Bool _sentConfig;
    FBRtmpSession *_transport;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)droppedPackets:(shared_ptr_896bc00e)arg1 withReason:(id)arg2;
- (id)initWithTransport:(id)arg1;
- (void)packetSps:(shared_ptr_aecb8741)arg1 andPps:(shared_ptr_aecb8741)arg2 pts:(CDStruct_1b6d18a9)arg3 dts:(CDStruct_1b6d18a9)arg4;
- (void)packetVideoFrame:(shared_ptr_ed0b32ac)arg1 pts:(CDStruct_1b6d18a9)arg2 dts:(CDStruct_1b6d18a9)arg3;
- (void)processError:(id)arg1;
- (void)writeAvcConfigDataToBuffer:(vector_a3426c4e *)arg1;
- (void)writePictureDataToBuffer:(vector_a3426c4e *)arg1 frame:(shared_ptr_ed0b32ac)arg2 compositionTime:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

