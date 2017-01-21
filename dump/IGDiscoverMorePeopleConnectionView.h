//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGPlainTableViewCell.h"

@class IGDiscoverMorePeopleServiceConfiguration, UITapGestureRecognizer;

@interface IGDiscoverMorePeopleConnectionView : IGPlainTableViewCell
{
    CDUnknownBlockType _tapAction;
    UITapGestureRecognizer *_tapGestureRecognizer;
    IGDiscoverMorePeopleServiceConfiguration *_serviceConfiguration;
}

+ (double)defaultHeight;
+ (id)imageNameForViewType:(long long)arg1;
- (void).cxx_destruct;
- (void)configureWithConnectionViewType:(long long)arg1 userSession:(id)arg2;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)onCellTapped;
@property(readonly, nonatomic) IGDiscoverMorePeopleServiceConfiguration *serviceConfiguration; // @synthesize serviceConfiguration=_serviceConfiguration;
- (void)setServiceConnected:(_Bool)arg1 withConnectionCount:(unsigned long long)arg2;
@property(copy, nonatomic) CDUnknownBlockType tapAction; // @synthesize tapAction=_tapAction;
@property(readonly, nonatomic) __weak UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
- (void)updateConnectionView;

@end
