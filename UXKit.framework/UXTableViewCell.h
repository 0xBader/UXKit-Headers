/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UXKit/UXCollectionViewCell.h>

@class NSColor, NSLayoutConstraint, NSMutableArray, UXLabel, UXView, _UXButton;

@interface UXTableViewCell : UXCollectionViewCell
{
    long long _style;
    _UXButton *_internalAccessoryView;
    UXView *_internalHighlightedBackgroundView;
    UXView *_defaultSelectedBackgroundView;
    UXView *__lineView;
    UXView *_upperSpace;
    UXView *_lowerSpace;
    NSLayoutConstraint *_lineHeightConstraint;
    BOOL _highlighted;
    BOOL __highlightingForContext;
    UXView *_backgroundView;
    UXView *_selectedBackgroundView;
    UXLabel *_textLabel;
    UXLabel *_detailTextLabel;
    long long _accessoryType;
    UXView *_accessoryView;
    NSColor *_highlightColor;
    long long _selectionStyle;
    long long _indentationLevel;
    double _indentationWidth;
    long long __separatorStyle;
    double __separatorHeight;
    NSColor *__separatorColor;
    NSMutableArray *__addedConstraints;
    struct NSEdgeInsets _separatorInset;
}

@property(retain, nonatomic) NSMutableArray *_addedConstraints; // @synthesize _addedConstraints=__addedConstraints;
@property(readonly, nonatomic) UXView *internalHighlightedBackgroundView; // @synthesize internalHighlightedBackgroundView=_internalHighlightedBackgroundView;
@property(retain, nonatomic, setter=_setSeparatorColor:) NSColor *_separatorColor; // @synthesize _separatorColor=__separatorColor;
@property(nonatomic, setter=_setSeparatorHeight:) double _separatorHeight; // @synthesize _separatorHeight=__separatorHeight;
@property(nonatomic, setter=_setSeparatorStyle:) long long _separatorStyle; // @synthesize _separatorStyle=__separatorStyle;
@property(nonatomic, setter=_setHighlightingForContext:) BOOL _highlightingForContext; // @synthesize _highlightingForContext=__highlightingForContext;
@property(nonatomic) struct NSEdgeInsets separatorInset; // @synthesize separatorInset=_separatorInset;
@property(nonatomic) double indentationWidth; // @synthesize indentationWidth=_indentationWidth;
@property(nonatomic) long long indentationLevel; // @synthesize indentationLevel=_indentationLevel;
@property(nonatomic) long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) NSColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) UXView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(retain, nonatomic) UXLabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(retain, nonatomic) UXLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UXView *selectedBackgroundView; // @synthesize selectedBackgroundView=_selectedBackgroundView;
@property(retain, nonatomic) UXView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (unsigned long long)_detailTextAlignment;
- (void)_configureInternalAccessoryViewForType:(long long)arg1;
- (void)_updateTextColor;
@property(readonly, nonatomic) UXView *lowerSpace;
@property(readonly, nonatomic) UXView *upperSpace;
@property(readonly, nonatomic) UXView *defaultSelectedBackgroundView;
@property(readonly, nonatomic) _UXButton *internalAccessoryView;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1;
- (void)updateConstraints;
- (void)viewDidMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

