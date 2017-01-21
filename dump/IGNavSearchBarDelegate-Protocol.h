//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGNavSearchBar, NSString;

@protocol IGNavSearchBarDelegate <NSObject>

@optional
- (_Bool)searchBar:(IGNavSearchBar *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)searchBar:(IGNavSearchBar *)arg1 textDidChange:(NSString *)arg2;
- (void)searchBarButtonTapped:(IGNavSearchBar *)arg1;
- (void)searchBarCancelButtonTapped:(IGNavSearchBar *)arg1;
- (void)searchBarChannelHomeTapped:(IGNavSearchBar *)arg1;
- (void)searchBarDirectIconTapped:(IGNavSearchBar *)arg1;
- (void)searchBarPeopleIconTapped:(IGNavSearchBar *)arg1;
- (void)searchBarReturnKeyTapped:(IGNavSearchBar *)arg1;
- (_Bool)searchBarShouldBeginEditing:(IGNavSearchBar *)arg1;
- (_Bool)searchBarShouldEndEditing:(IGNavSearchBar *)arg1;
- (void)searchBarTextDidBeginEditing:(IGNavSearchBar *)arg1;
- (void)searchBarTextDidEndEditing:(IGNavSearchBar *)arg1;
- (void)searchBarWillBeginEditing:(IGNavSearchBar *)arg1;
- (void)searchBarWillEndEditing:(IGNavSearchBar *)arg1;
@end
