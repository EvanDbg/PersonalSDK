//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (LockingAdditions)
+ (void)mf_clearLocks;
- (id)mf_exclusiveLocks;
- (id)mf_lockOrdering;
- (id)mf_strictLockOrdering;
- (BOOL)_mf_ntsIsLocked;
- (void)mf_unlock;
- (BOOL)mf_tryLockWithPriority;
- (void)mf_lockWithPriority;
- (BOOL)mf_tryLock;
- (void)mf_lock;
- (void)_mf_checkToAllowLock:(id)arg1;
- (void)_mf_checkToAllowExclusiveLocksWithLock:(id)arg1;
- (void)_mf_checkToAllowStrictProgressionWithLock:(id)arg1;
- (void)_mf_checkToAllowOrderingWithLock:(id)arg1;
- (void)_mf_dumpLockCallStacks:(NSUInteger)arg1 ordering:(id)arg2;
- (id)_mf_lockOrderingForType:(int)arg1;
@end
