//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIView<IGEditorTabView>;

@interface IGEditorTabBar : UIView
{
    NSArray *_tabViews;
    id <IGEditorTabBarDelegate> _delegate;
    unsigned long long _selectedIndex;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGEditorTabBarDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UIView<IGEditorTabView> *selectedTabView;
@property(copy, nonatomic) NSArray *tabViews; // @synthesize tabViews=_tabViews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

