//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSArray, NSLock, NoteContext;
@protocol OS_dispatch_group;

@interface AccountUtilities : NSObject
{
    NSArray *_accountIDsEnabledForNotes;
    NoteContext *_noteContext;
    ACAccountStore *_accountStore;
    NSObject<OS_dispatch_group> *_backgroundDispatchGroup;
    NSLock *_updateAccountInfosLock;
}

+ (id)sharedAccountUtilities;
@property(retain) NSLock *updateAccountInfosLock; // @synthesize updateAccountInfosLock=_updateAccountInfosLock;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *backgroundDispatchGroup; // @synthesize backgroundDispatchGroup=_backgroundDispatchGroup;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
// - (void).cxx_destruct;
- (void)updateAccountInfos;
- (id)localAccountDisplayName;
- (BOOL)localNotesExist;
- (id)defaultStoreSyncIdWithDesiredSyncId:(id)arg1;
- (id)accountIDsEnabledForNotes;
- (id)accountsEnabledForNotes;
- (id)freshContext;
- (void)startKeepingAccountInfosUpToDate;
- (void)dealloc;
- (id)init;
- (void)_accountStoreDidChange:(id)arg1;

@end

