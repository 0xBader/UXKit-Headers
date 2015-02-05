/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol UXViewControllerTransitionCoordinatorContext <NSObject>
- (id)containerView;
- (id)viewControllerForKey:(id)arg1;
- (long long)completionCurve;
- (double)completionVelocity;
- (double)percentComplete;
- (double)transitionDuration;
- (BOOL)isCancelled;
- (BOOL)isInteractive;
- (BOOL)initiallyInteractive;
- (long long)presentationStyle;
- (BOOL)isAnimated;
@end
