//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UIImageView, UILabel;

@interface IGDirectLinkPreview : UIView
{
    unsigned long long _state;
    UILabel *_informationLabel;
    UIActivityIndicatorView *_activityIndicator;
    UIImageView *_errorIndicatorImageView;
    UIImageView *_previewImageView;
    UILabel *_titleLabel;
    UILabel *_urlLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (id)createActivityView;
- (id)createErrorIndicator;
- (id)createInformationLabel;
- (id)createTitleLabel;
- (id)createUrlLabel;
@property(retain, nonatomic) UIImageView *errorIndicatorImageView; // @synthesize errorIndicatorImageView=_errorIndicatorImageView;
@property(retain, nonatomic) UILabel *informationLabel; // @synthesize informationLabel=_informationLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
- (void)reset;
- (void)resetViewState;
- (void)setLink:(id)arg1 withImage:(id)arg2;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *urlLabel; // @synthesize urlLabel=_urlLabel;

@end
