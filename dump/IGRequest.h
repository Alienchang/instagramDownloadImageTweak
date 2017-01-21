//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFHTTPRequestOperation.h"

#import "IGNetworkOperation.h"

@class NSProgress;

@interface IGRequest : AFHTTPRequestOperation <IGNetworkOperation>
{
    CDUnknownBlockType _headerHandler;
    unsigned long long _behavior;
    unsigned long long _requestType;
    double _totalBytesUp;
    double _totalBytesDown;
    NSProgress *_ig_downloadProgress;
    NSProgress *_ig_uploadProgress;
    double _requestStartTimestamp;
    double _requestEndTimestamp;
    double _requestFailedTimestamp;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)handleProgress:(id)arg1 totalBytes:(long long)arg2 totalExpectedBytes:(long long)arg3;
@property(copy, nonatomic) CDUnknownBlockType headerHandler; // @synthesize headerHandler=_headerHandler;
@property(readonly, nonatomic) NSProgress *ig_downloadProgress; // @synthesize ig_downloadProgress=_ig_downloadProgress;
@property(readonly, nonatomic) NSProgress *ig_uploadProgress; // @synthesize ig_uploadProgress=_ig_uploadProgress;
- (id)initWithRequest:(id)arg1 type:(unsigned long long)arg2 behavior:(unsigned long long)arg3;
- (id)networkMonitorDetailLabel;
- (id)networkMonitorLabel;
@property(nonatomic) double requestEndTimestamp; // @synthesize requestEndTimestamp=_requestEndTimestamp;
@property(nonatomic) double requestFailedTimestamp; // @synthesize requestFailedTimestamp=_requestFailedTimestamp;
@property(nonatomic) double requestStartTimestamp; // @synthesize requestStartTimestamp=_requestStartTimestamp;
@property(readonly, nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
- (void)setDownloadProgressBlock:(CDUnknownBlockType)arg1;
- (void)setQueuePriority:(long long)arg1;
@property(nonatomic) double totalBytesDown; // @synthesize totalBytesDown=_totalBytesDown;
@property(nonatomic) double totalBytesUp; // @synthesize totalBytesUp=_totalBytesUp;
- (void)setUploadProgressBlock:(CDUnknownBlockType)arg1;
- (void)start;
@property(readonly, nonatomic) double totalRequestTimeInMiliseconds;

@end

