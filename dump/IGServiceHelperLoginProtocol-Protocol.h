//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGGroupedTableViewCell, IGServiceLoginTableViewController, NSIndexPath, NSString;

@protocol IGServiceHelperLoginProtocol <NSObject>
- (void)doAuthWithUsername:(NSString *)arg1 password:(NSString *)arg2;
- (NSString *)loginErrorMessage;
- (NSString *)loginFooterMessage;
- (_Bool)loginPending;
- (IGServiceLoginTableViewController *)loginViewController;
- (long long)numberOfExtraRowsForLogin;
- (void)prepareCell:(IGGroupedTableViewCell *)arg1 forIndexPath:(NSIndexPath *)arg2;
- (void)setLoginPending:(_Bool)arg1;
@end

