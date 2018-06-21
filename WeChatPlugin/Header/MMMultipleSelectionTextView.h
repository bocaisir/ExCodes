//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextView.h"

#import "MMFirstResponderProtocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MMMultipleSelectionTextView : NSTextView <MMFirstResponderProtocol>
{
    CDUnknownBlockType _gotMisdirectedKeyDownCallback;
}

@property(copy, nonatomic) CDUnknownBlockType gotMisdirectedKeyDownCallback; // @synthesize gotMisdirectedKeyDownCallback=_gotMisdirectedKeyDownCallback;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)canBecomeKeyView;
- (void)willResignFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
