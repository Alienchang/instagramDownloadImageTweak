//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGStyledString, UIColor;

@interface IGCoreTextView : UIView
{
    UIColor *_shadowColor;
    double _shadowOffset;
    _Bool _heightIsValid;
    struct CGPoint _touchPoint;
    _Bool _longTapHandled;
    long long _closestTappedStringIndex;
    long long _lastEndedEventSeqNumber;
    _Bool _usePaddedTapDetection;
    IGStyledString *_styledString;
    id <IGCoreTextLinkHandler> _linkHandler;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (long long)findClosestIndexForURLForAttributedString:(id)arg1 nearPoint:(struct CGPoint)arg2 constrainedSize:(struct CGSize)arg3;
- (void)handleLongTap;
- (_Bool)handlePaddedTapAtPoint:(struct CGPoint)arg1 forTouchEvent:(unsigned long long)arg2 fromLongTap:(_Bool)arg3;
- (_Bool)handleTapAtIndex:(long long)arg1 forTouchEvent:(unsigned long long)arg2;
- (_Bool)handleTapAtIndex:(long long)arg1 forTouchEvent:(unsigned long long)arg2 fromLongTap:(_Bool)arg3;
- (_Bool)handleTapAtPoint:(struct CGPoint)arg1 forTouchEvent:(unsigned long long)arg2;
- (_Bool)handleTapAtPoint:(struct CGPoint)arg1 forTouchEvent:(unsigned long long)arg2 fromLongTap:(_Bool)arg3;
- (double)height;
- (double)heightForWidth:(double)arg1;
- (id)initWithWidth:(double)arg1;
- (struct CGPoint)lineOrigin:(struct CGPoint)arg1 fromRelativeToPath:(struct CGPath *)arg2 toRelativeToContext:(struct CGContext *)arg3;
@property(nonatomic) __weak id <IGCoreTextLinkHandler> linkHandler; // @synthesize linkHandler=_linkHandler;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(retain, nonatomic) IGStyledString *styledString; // @synthesize styledString=_styledString;
@property(nonatomic) _Bool usePaddedTapDetection; // @synthesize usePaddedTapDetection=_usePaddedTapDetection;
- (long long)tapIndexForTapAtPoint:(struct CGPoint)arg1 size:(struct CGSize)arg2 inString:(id)arg3;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateWidth:(double)arg1;
- (id)urlAtPoint:(struct CGPoint)arg1;

@end
