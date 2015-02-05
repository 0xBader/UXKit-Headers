/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString, NSView, UXBarButtonItem, UXLabel;

@interface UXNavigationItem : NSObject
{
    NSArray *_leftBarButtonItems;
    NSArray *_rightBarButtonItems;
    UXLabel *_internalTitleView;
    NSString *_title;
    BOOL _hidesBackButton;
    BOOL _hidesAlternateTitleView;
    BOOL _leftItemsSupplementBackButton;
    UXBarButtonItem *_backBarButtonItem;
    NSView *_titleView;
    NSString *_prompt;
    NSMutableArray *_childItems;
}

@property(retain) NSMutableArray *childItems; // @synthesize childItems=_childItems;
@property(nonatomic) BOOL leftItemsSupplementBackButton; // @synthesize leftItemsSupplementBackButton=_leftItemsSupplementBackButton;
@property(retain, nonatomic) NSArray *rightBarButtonItems; // @synthesize rightBarButtonItems=_rightBarButtonItems;
@property(nonatomic) BOOL hidesAlternateTitleView; // @synthesize hidesAlternateTitleView=_hidesAlternateTitleView;
@property(nonatomic) BOOL hidesBackButton; // @synthesize hidesBackButton=_hidesBackButton;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(retain, nonatomic) NSView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UXBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;
- (void).cxx_destruct;
- (void)_removeAllChildItems;
- (void)removeChildItem:(id)arg1;
- (void)addChildItem:(id)arg1;
@property(retain, nonatomic) UXBarButtonItem *rightBarButtonItem;
@property(retain, nonatomic) NSArray *leftBarButtonItems;
@property(retain, nonatomic) UXBarButtonItem *leftBarButtonItem;
- (void)_updateInternalTitleView;
@property(retain, nonatomic) NSString *title;
- (id)_rightBarButtonItems:(BOOL)arg1;
- (id)_leftBarButtonItems:(BOOL)arg1;
@property(readonly, nonatomic) UXLabel *internalTitleView;
@property(retain, nonatomic) NSArray *trailingBarButtonItems;
- (void)setTrailingBarButtonItems:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) NSArray *leadingBarButtonItems;
- (void)setLeadingBarButtonItems:(id)arg1 animated:(BOOL)arg2;
- (void)setRightBarButtonItems:(id)arg1 animated:(BOOL)arg2;
- (void)setRightBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftBarButtonItems:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithTitle:(id)arg1;

@end

