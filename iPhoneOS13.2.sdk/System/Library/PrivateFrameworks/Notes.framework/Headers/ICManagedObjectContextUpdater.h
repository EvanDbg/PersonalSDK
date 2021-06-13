//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICSelectorDelayer, NSDate, NSManagedObjectContext, NSPersistentHistoryToken, NSPersistentStore;
@protocol ICManagedObjectContextUpdaterDelegate, OS_dispatch_queue;

@interface ICManagedObjectContextUpdater : NSObject
{
    BOOL _listening;
    NSPersistentStore *_store;
    NSManagedObjectContext *_context;
    id <ICManagedObjectContextUpdaterDelegate> _delegate;
    NSPersistentHistoryToken *_previousHistoryToken;
    NSDate *_previousHistoryDate;
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _numberOfCoalescedNotifications;
    ICSelectorDelayer *_delayer;
}

+ (id)contextSaveNotificationFromPersistentHistoryResult:(id)arg1 ignoringContextName:(id)arg2 fromTransactionAuthor:(id)arg3 latestToken:(id )arg4 latestTimestamp:(id )arg5;
@property(retain, nonatomic) ICSelectorDelayer *delayer; // @synthesize delayer=_delayer;
@property(nonatomic) NSUInteger numberOfCoalescedNotifications; // @synthesize numberOfCoalescedNotifications=_numberOfCoalescedNotifications;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic, getter=isListening) BOOL listening; // @synthesize listening=_listening;
@property(retain, nonatomic) NSDate *previousHistoryDate; // @synthesize previousHistoryDate=_previousHistoryDate;
@property(retain, nonatomic) NSPersistentHistoryToken *previousHistoryToken; // @synthesize previousHistoryToken=_previousHistoryToken;
@property(nonatomic) __weak id <ICManagedObjectContextUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSManagedObjectContext *context; // @synthesize context=_context;
@property(nonatomic) __weak NSPersistentStore *store; // @synthesize store=_store;
// - (void).cxx_destruct;
- (void)processObejctsInChangeDictionary:(id)arg1;
- (void)fetchChangeHistory;
- (void)handlePersistentStoreRemoteChangeNotification:(id)arg1;
- (void)requestUpdate;
- (void)stopListeningForRemoteContextDidChangeNotifications;
- (void)startListeningForRemoteContextDidChangeNotifications;
- (id)persistentStoreCoordinator;
- (void)dealloc;
- (id)initWithStore:(id)arg1 context:(id)arg2;
- (id)init;

@end

