//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAutoupdaterFeedDelegate.h"

@class FBAutoupdaterHost, FBAutoupdaterUpdateDriver, NSDate, NSFileManager, NSOperationQueue, NSString, NSTimer, NSURL;

@interface FBAutoupdater : NSObject <FBAutoupdaterFeedDelegate>
{
    NSFileManager *_fileManager;
    _Bool _serviceIsRunning;
    _Bool _fetchInProgress;
    NSTimer *_fetchTimer;
    NSOperationQueue *_delegateQueue;
    NSURL *_fetchURL;
    id <FBAutoupdaterDelegate> _delegate;
    id <FBAutoupdaterVersionComparator> _versionComparator;
    id <FBAutoupdaterFeed> _feed;
    id <FBAutoupdaterCleaner> _cleaner;
    id <FBAutoupdaterInstaller> _installer;
    FBAutoupdaterHost *_host;
    FBAutoupdaterUpdateDriver *_driver;
    double _checkInterval;
    NSDate *_lastCheckDate;
}

- (void).cxx_destruct;
- (void)_checkTimerTriggered:(id)arg1;
- (void)_cleanUpOldUpdates;
- (void)_failLoadingUpdatesWithError:(id)arg1;
- (void)_failLoadingUpdatesWithMessage:(id)arg1;
- (void)_finishedFetch;
- (void)_refreshTimerIfPossible;
- (_Bool)_shouldInstallUpdate:(id)arg1;
- (_Bool)_verifyInstallPreconditionsForUpdate:(id)arg1;
- (id)activeUpdateWithError:(id *)arg1;
- (id)appliedUpdateWithError:(id *)arg1;
- (void)autoupdaterFeed:(id)arg1 didFail:(id)arg2;
- (void)autoupdaterFeed:(id)arg1 didFinishLoadingUpdates:(id)arg2;
- (void)checkForUpdates;
@property(nonatomic) double checkInterval; // @synthesize checkInterval=_checkInterval;
@property(retain, nonatomic) id <FBAutoupdaterCleaner> cleaner; // @synthesize cleaner=_cleaner;
@property(nonatomic) __weak id <FBAutoupdaterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FBAutoupdaterUpdateDriver *driver; // @synthesize driver=_driver;
@property(retain, nonatomic) id <FBAutoupdaterFeed> feed; // @synthesize feed=_feed;
@property(copy, nonatomic) NSURL *fetchURL; // @synthesize fetchURL=_fetchURL;
@property(retain, nonatomic) FBAutoupdaterHost *host; // @synthesize host=_host;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 fetchURL:(id)arg2;
- (id)initWithDelegate:(id)arg1 fetchURL:(id)arg2 delegateQueue:(id)arg3 versionComparator:(id)arg4 feed:(id)arg5 downloader:(id)arg6 unarchiver:(id)arg7;
- (id)initWithDelegate:(id)arg1 host:(id)arg2 fetchURL:(id)arg3 delegateQueue:(id)arg4 versionComparator:(id)arg5 feed:(id)arg6 cleaner:(id)arg7 downloader:(id)arg8 unarchiver:(id)arg9 deltaApplier:(id)arg10 preparer:(id)arg11 verifier:(id)arg12 installer:(id)arg13;
@property(retain, nonatomic) id <FBAutoupdaterInstaller> installer; // @synthesize installer=_installer;
@property(retain, nonatomic) NSDate *lastCheckDate; // @synthesize lastCheckDate=_lastCheckDate;
@property(retain, nonatomic) id <FBAutoupdaterVersionComparator> versionComparator; // @synthesize versionComparator=_versionComparator;
- (void)startService;
- (void)stopService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

