/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UXKit/UXView.h>

#import "NSAccessibilityGroup.h"

@class NSBox, NSCursor, NSLayoutConstraint, NSString, _UXContainerView;

@interface _UXSourceSplitView : UXView <NSAccessibilityGroup>
{
    NSLayoutConstraint *_separatorRightConstraint;
    NSLayoutConstraint *_masterViewWidthConstraint;
    BOOL _collapsed;
    BOOL _resizing;
    _UXContainerView *_masterView;
    _UXContainerView *_detailView;
    NSBox *_separator;
    double _minimumMasterWidth;
    double _maximumMasterWidth;
    id <_UXSourceSplitViewDelegate> _delegate;
}

@property(nonatomic) __weak id <_UXSourceSplitViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL resizing; // @synthesize resizing=_resizing;
@property(nonatomic) BOOL collapsed; // @synthesize collapsed=_collapsed;
@property(nonatomic) double maximumMasterWidth; // @synthesize maximumMasterWidth=_maximumMasterWidth;
@property(nonatomic) double minimumMasterWidth; // @synthesize minimumMasterWidth=_minimumMasterWidth;
@property(readonly, nonatomic) NSBox *separator; // @synthesize separator=_separator;
@property(readonly, nonatomic) _UXContainerView *detailView; // @synthesize detailView=_detailView;
@property(readonly, nonatomic) _UXContainerView *masterView; // @synthesize masterView=_masterView;
- (void).cxx_destruct;
- (id)accessibilityRole;
- (id)accessibilityChildren;
- (id)accessibilitySplitters;
- (void)cursorUpdate:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)resetCursorRects;
- (id)hitTest:(struct CGPoint)arg1;
- (void)_endSeparatorLiveResize;
- (void)_startSeparatorLiveResize;
- (void)_resizeToWidth:(double)arg1;
@property(readonly, nonatomic) NSCursor *separatorCursor;
- (void)setCollapsed:(BOOL)arg1 animated:(BOOL)arg2 completion:(id)arg3;
@property(nonatomic) double masterWidth;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

