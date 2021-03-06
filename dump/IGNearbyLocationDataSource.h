//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"

@class CLLocation, IGUserSession, NSArray, NSDate, NSDictionary, NSString;

@interface IGNearbyLocationDataSource : NSObject <UITableViewDataSource>
{
    _Bool _isLoading;
    _Bool _isSearching;
    _Bool _isLocating;
    _Bool _preventEagerFetch;
    _Bool _locationIsFromEXIF;
    NSArray *_locations;
    NSArray *_EXIFLocations;
    NSString *_rankToken;
    NSString *_lastRequestID;
    NSString *_responseRankTokenID;
    NSString *_responseQueryText;
    id <IGNearbyLocationDataSourceDelegate> _delegate;
    long long _fetchStatus;
    CLLocation *_EXIFPhotoLocation;
    CLLocation *_currentUserLocation;
    NSDate *_mediaCreationTime;
    IGUserSession *_userSession;
    id <IGRequestToken> _requestToken;
    CLLocation *_lastKnownLocation;
    NSDictionary *_lastKnownResponse;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *EXIFLocations; // @synthesize EXIFLocations=_EXIFLocations;
@property(retain, nonatomic) CLLocation *EXIFPhotoLocation; // @synthesize EXIFPhotoLocation=_EXIFPhotoLocation;
- (id)activeLocationFromEXIF:(_Bool *)arg1;
@property(retain, nonatomic) CLLocation *currentUserLocation; // @synthesize currentUserLocation=_currentUserLocation;
- (void)dealloc;
@property(nonatomic) __weak id <IGNearbyLocationDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchLocationsNearCLLocation:(id)arg1 atMediaCreationTime:(id)arg2 locationIsFromEXIF:(_Bool)arg3 withQuery:(id)arg4;
- (void)fetchLocationsNearCLLocation:(id)arg1 atMediaCreationTime:(id)arg2 locationIsFromEXIF:(_Bool)arg3 withQuery:(id)arg4 rankToken:(id)arg5;
- (void)fetchLocationsNearCLLocation:(id)arg1 locationIsFromEXIF:(_Bool)arg2 withQuery:(id)arg3;
- (void)fetchLocationsNearCLLocation:(id)arg1 locationIsFromEXIF:(_Bool)arg2 withQuery:(id)arg3 rankToken:(id)arg4;
- (void)fetchLocationsOrLocateUser;
@property(nonatomic) long long fetchStatus; // @synthesize fetchStatus=_fetchStatus;
- (void)handleLocationFetchError:(id)arg1 response:(id)arg2;
- (void)handleLocationFetchSuccess:(id)arg1 queryText:(id)arg2 rankToken:(id)arg3;
- (_Bool)hasError;
- (_Bool)hasLocations;
- (void)initGroupsFromResponse:(id)arg1;
- (id)initWithDelegate:(id)arg1 userSession:(id)arg2;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool isLocating; // @synthesize isLocating=_isLocating;
@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(retain, nonatomic) CLLocation *lastKnownLocation; // @synthesize lastKnownLocation=_lastKnownLocation;
@property(retain, nonatomic) NSDictionary *lastKnownResponse; // @synthesize lastKnownResponse=_lastKnownResponse;
@property(retain, nonatomic) NSString *lastRequestID; // @synthesize lastRequestID=_lastRequestID;
- (id)locationForIndexPath:(id)arg1;
@property(nonatomic) _Bool locationIsFromEXIF; // @synthesize locationIsFromEXIF=_locationIsFromEXIF;
@property(retain, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) NSDate *mediaCreationTime; // @synthesize mediaCreationTime=_mediaCreationTime;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onLocationDenied:(id)arg1;
- (void)onLocationFailed:(id)arg1;
- (void)onLocationUpdated:(id)arg1;
@property(nonatomic) _Bool preventEagerFetch; // @synthesize preventEagerFetch=_preventEagerFetch;
@property(readonly, nonatomic) NSString *rankToken; // @synthesize rankToken=_rankToken;
- (void)reloadData;
@property(retain, nonatomic) id <IGRequestToken> requestToken; // @synthesize requestToken=_requestToken;
@property(retain, nonatomic) NSString *responseQueryText; // @synthesize responseQueryText=_responseQueryText;
@property(retain, nonatomic) NSString *responseRankTokenID; // @synthesize responseRankTokenID=_responseRankTokenID;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 errorCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 locationCellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 statusCellForRowAtIndexPath:(id)arg2;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

