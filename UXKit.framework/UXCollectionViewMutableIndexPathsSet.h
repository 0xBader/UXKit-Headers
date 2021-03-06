/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UXKit/UXCollectionViewIndexPathsSet.h>

@interface UXCollectionViewMutableIndexPathsSet : UXCollectionViewIndexPathsSet
{
}

- (void)adjustForDeletionOfIndexPath:(id)arg1;
- (void)adjustForDeletionOfItems:(id)arg1 inSection:(unsigned long long)arg2;
- (void)adjustForInsertionOfIndexPath:(id)arg1;
- (void)adjustForInsertionOfItems:(id)arg1 inSection:(unsigned long long)arg2;
- (void)adjustForDeletionOfSections:(id)arg1;
- (void)adjustForDeletionOfSection:(unsigned long long)arg1;
- (void)_adjustForDeletionOfSection:(unsigned long long)arg1;
- (void)adjustForInsertionOfSections:(id)arg1;
- (void)adjustForInsertionOfSection:(unsigned long long)arg1;
- (void)_adjustForInsertionOfSection:(unsigned long long)arg1;
- (void)intersectIndexPathsSet:(id)arg1;
- (void)removeAllIndexPaths;
- (void)removeIndexPathsSet:(id)arg1;
- (void)removeIndexPaths:(id)arg1;
- (void)removeIndexPath:(id)arg1;
- (void)addSection:(long long)arg1 itemsInRange:(struct _NSRange)arg2;
- (void)addIndexPathsSet:(id)arg1;
- (void)addIndexPaths:(id)arg1;
- (void)addIndexPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

