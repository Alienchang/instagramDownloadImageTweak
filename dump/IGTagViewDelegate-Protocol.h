//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGTagView;

@protocol IGTagViewDelegate <NSObject>
- (void)tagViewDidEndMove:(IGTagView *)arg1;
- (void)tagViewDidMove:(IGTagView *)arg1;
- (void)tagViewWasRemoved:(IGTagView *)arg1;
- (void)tagViewWasSelected:(IGTagView *)arg1;
- (void)tagViewWillMove:(IGTagView *)arg1;

@optional
- (_Bool)tagViewCanBeSelected:(IGTagView *)arg1;
@end

