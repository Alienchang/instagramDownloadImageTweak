//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@interface RCTUITextView : UITextView
{
    _Bool _jsRequestingFirstResponder;
    _Bool _textWasPasted;
}

- (_Bool)canBecomeFirstResponder;
- (void)didMoveToWindow;
- (void)paste:(id)arg1;
- (void)reactDidMakeFirstResponder;
- (void)reactWillMakeFirstResponder;
@property(nonatomic) _Bool textWasPasted; // @synthesize textWasPasted=_textWasPasted;

@end
