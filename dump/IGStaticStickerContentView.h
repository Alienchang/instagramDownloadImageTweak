//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGImageViewDelegate.h"
#import "IGStickerContentViewType.h"

@class IGStaticStickerModel, NSArray, NSString;

@interface IGStaticStickerContentView : UIView <IGImageViewDelegate, IGStickerContentViewType>
{
    id <IGStickerContentViewDelegate> _delegate;
    IGStaticStickerModel *_model;
    NSArray *_stickerViews;
    long long _currentIndex;
}

- (void).cxx_destruct;
- (void)cleanUp;
- (void)configureWithModel:(id)arg1;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) __weak id <IGStickerContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
@property(readonly, nonatomic) IGStaticStickerModel *model; // @synthesize model=_model;
- (long long)numberOfStickers;
- (void)selectStickerViewAtIndex:(long long)arg1;
- (id)singleViewForSingleModel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) NSArray *stickerViews; // @synthesize stickerViews=_stickerViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

