/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSView.h"

@interface NSView (Compatibility)
- (void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2;
- (float)contentCompressionResistancePriorityForAxis:(long long)arg1;
- (void)setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2;
- (float)contentHuggingPriorityForAxis:(long long)arg1;
@property(nonatomic) double alpha;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutIfNeeded;
- (void)layoutSubviews;
- (void)setNeedsUpdateConstraints;
- (void)updateConstraintsIfNeeded;
- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (void)didMoveToWindow;

// Remaining properties
@property(readonly, nonatomic, getter=isHidden) BOOL hidden;
@end

