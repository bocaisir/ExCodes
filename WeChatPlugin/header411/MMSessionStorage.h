//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WCTDatabase, WCTTable;

@interface MMSessionStorage : NSObject
{
    WCTDatabase *m_db;
    WCTTable *m_table;
    NSString *m_nsDBFilePath;
}

+ (void)deleteSessionDB;
- (void).cxx_destruct;
- (void)onRepairDB;
- (void)deleteUnusedRowIDFile;
- (void)deleteSessionInfo:(id)arg1;
- (void)saveSessionInfo:(id)arg1;
- (void)saveSessionInfos:(id)arg1;
- (id)loadAllSessionInfo;
- (void)configDB:(BOOL)arg1;
- (id)initWithSaveToDisk:(BOOL)arg1;
- (id)init;

@end
