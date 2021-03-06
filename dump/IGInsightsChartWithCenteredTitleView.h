//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGInsightsHeaderTabPageViewDataSource.h"

@class IGInsightsHeaderTabPageView, NSArray, NSString;

@interface IGInsightsChartWithCenteredTitleView : UIView <IGInsightsHeaderTabPageViewDataSource>
{
    UIView *_bottomSeparator;
    IGInsightsHeaderTabPageView *_headerTabPageView;
    NSString *_header;
    NSString *_queryButtonText;
    NSString *_chartStyle;
    NSArray *_chartTab;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(copy, nonatomic) NSString *chartStyle; // @synthesize chartStyle=_chartStyle;
@property(copy, nonatomic) NSArray *chartTab; // @synthesize chartTab=_chartTab;
- (struct UIEdgeInsets)contentViewPaddingsForInsightsHeaderTabPageView:(id)arg1;
@property(copy, nonatomic) NSString *header; // @synthesize header=_header;
@property(retain, nonatomic) IGInsightsHeaderTabPageView *headerTabPageView; // @synthesize headerTabPageView=_headerTabPageView;
- (id)initWithHeader:(id)arg1 queryButtonText:(id)arg2 chartStyle:(id)arg3 chartTab:(id)arg4 componentName:(id)arg5 logger:(id)arg6;
- (id)insightsHeaderTabPageView:(id)arg1 selectedTabAtIndex:(unsigned long long)arg2;
- (id)insightsHeaderTabPageView:(id)arg1 titleForTabAtIndex:(unsigned long long)arg2;
- (id)insightsHeaderTabPageView:(id)arg1 viewForTabAtIndex:(unsigned long long)arg2;
- (void)layoutSubviews;
- (id)navigateButtonTextForInsightsHeaderTabPageView:(id)arg1;
- (unsigned long long)numberOfContentViewsForInsightsHeaderTabPageView:(id)arg1;
@property(copy, nonatomic) NSString *queryButtonText; // @synthesize queryButtonText=_queryButtonText;
- (void)setHeaderDelegate:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)titleForInsightsHeaderTabPageView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

