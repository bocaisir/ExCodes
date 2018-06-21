//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PathUtility : NSObject
{
}

+ (BOOL)setDoNotBackupForPath:(id)arg1;
+ (id)getSysDocumentPath;
+ (id)getSysCachePath;
+ (id)getSysLibraryPath;
+ (id)GetSysDownloadsPath;
+ (id)HashUserNameForPath:(id)arg1;
+ (id)GetRootPathOfTrash;
+ (id)GetRandomPathOfTrash;
+ (id)GetTmpPath;
+ (id)GetDocFixRootPath;
+ (id)GetLibraryCacheFixRootPath;
+ (id)GetDocPath;
+ (id)GetLogFolder;
+ (id)GetLibraryCachePath;
+ (id)GetBrandSessionHolderCachePath;
+ (id)GetSessionFilePathWithMessage:(id)arg1;
+ (id)GetAllMsgFilePathWithMessage:(id)arg1;
+ (void)ClearChatSyncFileWithMessage:(id)arg1;
+ (void)ClearChatSyncFolder;
+ (id)GetChatSyncUnzipPathWithMessage:(id)arg1;
+ (id)GetChatSyncFileFullPathWithMessage:(id)arg1;
+ (id)GetChatSyncFileBasePathWithMessage:(id)arg1;
+ (id)GetChatSyncBasePath;
+ (id)getMsgFileDirWithUserName:(id)arg1;
+ (id)getMsgAppOpenDataDirWithUserName:(id)arg1;
+ (id)getMsgVideoPathWithMessage:(id)arg1;
+ (id)getMsgVideoPathWithUserName:(id)arg1 localId:(unsigned int)arg2;
+ (id)getMsgVideoDirWithUserName:(id)arg1;
+ (id)getMsgSilkAudioPath:(id)arg1 localId:(unsigned int)arg2;
+ (id)getMsgAMRAudioPath:(id)arg1 localId:(unsigned int)arg2;
+ (id)getMsgAudioDir:(id)arg1;
+ (id)getMsgTmpHDImgPath:(id)arg1 localId:(unsigned int)arg2;
+ (id)getMsgTmpImgThumbPathWithMessage:(id)arg1;
+ (id)getMsgTmpImgPath:(id)arg1 localId:(unsigned int)arg2;
+ (id)getMsgHDImgPathWithMessage:(id)arg1;
+ (id)getMsgImgThumbPath:(id)arg1 imgURLString:(id)arg2;
+ (id)getMsgImgThumbPathWithMessage:(id)arg1;
+ (id)getMsgImgPathWithMessage:(id)arg1;
+ (id)getMsgImgDir:(id)arg1;
+ (id)getMsgTempDirOfUser:(id)arg1;
+ (id)getMsgTempDir;
+ (id)getFTSMsgDBPath;
+ (id)getMsgDBPath:(id)arg1;
+ (id)getMessageRootDir;
+ (id)GetSessionStorageFullFilePath:(id)arg1;
+ (id)GetSessionStorageFilePath:(id)arg1;
+ (id)GetSessionDBRecoverPath;
+ (id)GetSessionDBPath;
+ (id)GetSessionStorageDir;
+ (id)getWCContactExtendDataPath:(id)arg1;
+ (id)getWCContactDBPathNew;
+ (id)getWCContactDBPath;
+ (id)getWCContactRootPath;
+ (id)getContactAutoUpdateDataPath;
+ (id)oaDBPath;
+ (id)oaRootDir;
+ (id)GetCdnRootPath;
+ (id)GetAccountKeyValueDBPath;
+ (id)GetAccountKeyValueDBPathOfUser:(id)arg1;
+ (id)GetAccountFriendRequestDataPath;
+ (id)GetAccountUserInfoPath;
+ (id)GetAccountSettingDbPathOfUser:(id)arg1;
+ (id)GetAccountSettingDbPath;
+ (id)GetAccountSettingExtPath;
+ (id)GetAccountSettingPath;
+ (id)GetAccountStoragePathOfUser:(id)arg1;
+ (id)GetAccountStoragePath;
+ (id)GetCurUserCachePath;
+ (id)GetCurUserDocumentPath;
+ (id)GetUserCachePathWithUserName:(id)arg1;
+ (id)GetUserDocumentPathWithUserName:(id)arg1;
+ (id)getAbtestCachePath;
+ (id)getAbtestRootPath;
+ (id)getKvConfigDBPath;
+ (id)getKvConfigRootPath;
+ (id)GetOpLogDBPath;
+ (id)GetSyncBufferPath;
+ (id)getSyncRootDir;
+ (id)GetEmojiPanelConfigDir;
+ (id)GetNewEmojiConfigDir;
+ (id)stickerStoreDataCachePath;
+ (id)emoticonPackageThumbPath:(id)arg1;
+ (id)emoticonThumbPath:(id)arg1;
+ (id)emoticonPath:(id)arg1;
+ (id)downloadPathForEmoticonPackage:(id)arg1;
+ (id)emoticonsDBPath;
+ (id)emoticonsBasePath;
+ (id)GetAllowSaveEmoticonDataPath;
+ (id)GetFavEmoticonDataListPath;
+ (id)GetPathOfEmoticonDownloadQueueData;
+ (id)packageThumbsBasePath;
+ (id)BasePathOfEmoticonFile;
+ (id)BasePathOfDownloadTemp;
+ (id)GetPathOfTempEmoticon:(id)arg1;
+ (void)CreateEmoticonBasePaths;
+ (id)cachedStatusDataPath;
+ (id)cachedStatusDataFolder;
+ (id)GetFileStateSyncDBPath;
+ (id)getGroupExtendDataPath:(id)arg1;
+ (id)getGroupDBPath;
+ (id)getGroupDataDir;
+ (id)webPageItemImageHttpDownloadFileName:(id)arg1;
+ (id)webPageItemImageHttpDownloadPath:(id)arg1;
+ (id)favoritesDisplayOptimizedThumbnailsCachePath;
+ (id)favoritesDataPathWithFavItemData:(id)arg1;
+ (id)favoritesDataFolder;
+ (id)favoritesCDNDownloadedThumbnailPathWithFavItemData:(id)arg1;
+ (id)favoritesCDNDownloadedThumbnailFolder;
+ (id)favoritesTempFolder;
+ (id)favoritesUICacheFolder;
+ (id)favoritesSettingPath;
+ (id)favoritesSyncBufferPath;
+ (id)favoritesDBPath;
+ (id)favoritesRootDir;

@end
