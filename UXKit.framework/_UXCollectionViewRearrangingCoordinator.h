/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSDraggingDestination.h"
#import "NSDraggingSource.h"
#import "NSGestureRecognizerDelegate.h"
#import "UXCollectionViewLayoutProxyDelegate.h"

@class NSArray, NSGestureRecognizer, NSString, UXCollectionView, UXCollectionViewLayout, _UXCollectionViewLayoutProxy;

@interface _UXCollectionViewRearrangingCoordinator : NSObject <UXCollectionViewLayoutProxyDelegate, NSGestureRecognizerDelegate, NSDraggingSource, NSDraggingDestination>
{
    struct {
        unsigned int dataSourceImplementsCanMoveItemsAtIndexPaths:1;
        unsigned int dataSourceImplementsShouldExchangeItemsAtIndexPathsWithProposedIndexPaths:1;
        unsigned int dataSourceImplementsMoveItemsAtIndexPathsToIndexPath:1;
        unsigned int dataSourceImplementsExchangeItemsAtIndexPathsWithIndexPaths:1;
        unsigned int delegateImplementsShouldBeginDraggingSessionWithClickedItemAtIndexPath:1;
        unsigned int delegateImplementsImageForDraggedItemAtIndexPath:1;
        unsigned int delegateImplementsDraggingItemForIndexPathProposedDraggingItem:1;
        unsigned int delegateImplementsShouldUseFilePromisesForDraggingItemsAtIndexPaths:1;
        unsigned int delegateImplementsDraggedTypesForIndexPaths:1;
        unsigned int delegateImplementsPreferredDraggingFormation:1;
        unsigned int delegateImplementsCreatedDraggingSessionForItemsAtIndexPaths:1;
        unsigned int delegateImplementsDraggingSessionSourceOperationMaskForDraggingContext;
        unsigned int delegateImplementsDraggingSessionWillBeginAtPoint:1;
        unsigned int delegateImplementsDraggingSessionMovedToPoint:1;
        unsigned int delegateImplementsDraggingSessionEndedAtPointDragOperation:1;
        unsigned int delegateImplementsPrepareForDragOperation:1;
        unsigned int delegateImplementsPerformDragOperation:1;
        unsigned int delegateImplementsDraggingEntered:1;
        unsigned int delegateImplementsDraggingUpdated:1;
        unsigned int delegateImplementsDraggingExited:1;
        unsigned int delegateImplementsDraggingEnded:1;
    } _collectionViewFlags;
    NSArray *_initialIndexPaths;
    NSArray *_targetIndexPaths;
    NSArray *_movedIndexPaths;
    NSArray *_exchangedIndexPaths;
    struct CGPoint _screenPoint;
    BOOL _initialIndexPathsAreContiguous;
    NSGestureRecognizer *_gestureRecognizer;
    double _dragStartTime;
    double _collectionViewReloadLastCallTime;
    BOOL _updatesLayoutOnDrag;
    BOOL _autoscrolling;
    unsigned long long _sequenceNumber;
    BOOL _isRearranging;
    BOOL _enabled;
    BOOL _allowDragOutsideCells;
    BOOL _continuouslyUpdateInsideCells;
    BOOL _usePileForSingleItem;
    BOOL _allowAutoscroll;
    BOOL _shouldExchange;
    UXCollectionView *_collectionView;
    long long _initiationMode;
    double _rearrangingInitialDelay;
    double _rearrangingPreviewDelay;
    struct _NSRange _initialIndexRange;
    struct _NSRange _targetIndexRange;
    struct _NSRange _movedIndexRange;
    struct _NSRange _exchangedIndexRange;
}

@property(nonatomic) BOOL shouldExchange; // @synthesize shouldExchange=_shouldExchange;
@property(nonatomic) struct _NSRange exchangedIndexRange; // @synthesize exchangedIndexRange=_exchangedIndexRange;
@property(nonatomic) struct _NSRange movedIndexRange; // @synthesize movedIndexRange=_movedIndexRange;
@property(nonatomic) struct _NSRange targetIndexRange; // @synthesize targetIndexRange=_targetIndexRange;
@property(nonatomic) struct _NSRange initialIndexRange; // @synthesize initialIndexRange=_initialIndexRange;
@property(nonatomic) double rearrangingPreviewDelay; // @synthesize rearrangingPreviewDelay=_rearrangingPreviewDelay;
@property(nonatomic) double rearrangingInitialDelay; // @synthesize rearrangingInitialDelay=_rearrangingInitialDelay;
@property(nonatomic) BOOL allowAutoscroll; // @synthesize allowAutoscroll=_allowAutoscroll;
@property(nonatomic) BOOL usePileForSingleItem; // @synthesize usePileForSingleItem=_usePileForSingleItem;
@property(nonatomic) BOOL continuouslyUpdateInsideCells; // @synthesize continuouslyUpdateInsideCells=_continuouslyUpdateInsideCells;
@property(nonatomic) BOOL allowDragOutsideCells; // @synthesize allowDragOutsideCells=_allowDragOutsideCells;
@property(nonatomic) long long initiationMode; // @synthesize initiationMode=_initiationMode;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) BOOL isRearranging; // @synthesize isRearranging=_isRearranging;
@property(readonly, nonatomic) UXCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)_shouldHandleExternalDrop:(id)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;
- (void)draggingSession:(id)arg1 willBeginAtPoint:(struct CGPoint)arg2;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)_autoscrollWithWindowLocation:(struct CGPoint)arg1;
- (void)_moveItemsAtIndexPaths:(id)arg1 toIndexPaths:(id)arg2;
- (void)_beginDraggingSessionForIndexPaths:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)resetDragGestureRecogizer;
- (void)_finishRearrangingForLocation:(struct CGPoint)arg1 shouldComplete:(BOOL)arg2;
- (void)_reloadCollectionViewWithAnimation;
- (void)_updateRearrangingStateForLocation:(id)arg1;
- (void)_beginRearrangingItemsWithIndexPaths:(id)arg1;
- (BOOL)_allowRearranging;
- (void)_gestureRecognized:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)createGestureRecognizer;
- (void)removeGestureRecognizer;
@property(readonly, nonatomic) id <UXCollectionViewDelegate_Rearranging> delegate;
@property(readonly, nonatomic) id <UXCollectionViewDataSource_Rearranging> dataSource;
@property(readonly, nonatomic) _UXCollectionViewLayoutProxy *layoutProxy;
@property(readonly, nonatomic) UXCollectionViewLayout *collectionViewLayout;
- (void)reloadLayout;
- (void)dealloc;
- (id)initWithCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

