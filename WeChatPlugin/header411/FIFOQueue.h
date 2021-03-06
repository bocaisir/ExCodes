//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSRecursiveLock;

@interface FIFOQueue : NSObject
{
    NSMutableArray *m_itemsList;
    NSRecursiveLock *m_oLock;
}

- (void).cxx_destruct;
- (void)removeObject:(id)arg1;
- (BOOL)isInQueue:(id)arg1;
- (BOOL)isEmpty;
- (void)cleanup;
- (BOOL)pop;
- (id)getTop;
- (BOOL)push:(id)arg1;
- (id)init;

@end

