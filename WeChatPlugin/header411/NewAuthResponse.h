//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, BuiltinIPList, CDNDnsInfo, HostList, NSData, NSString, NetworkControl, PluginKeyList, SKBuiltinBuffer_t, SKBuiltinString_t, ShowStyleKey;

@interface NewAuthResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasUin:1;
    unsigned int hasUserName:1;
    unsigned int hasNickName:1;
    unsigned int hasBindUin:1;
    unsigned int hasBindEmail:1;
    unsigned int hasBindMobile:1;
    unsigned int hasStatus:1;
    unsigned int hasSessionKey:1;
    unsigned int hasImgSid:1;
    unsigned int hasImgBuf:1;
    unsigned int hasOfficialUserName:1;
    unsigned int hasOfficialNickName:1;
    unsigned int hasQqmicroBlogUserName:1;
    unsigned int hasQqmicroBlogStatus:1;
    unsigned int hasNewVersion:1;
    unsigned int hasTicket:1;
    unsigned int hasPushMailStatus:1;
    unsigned int hasSendCardBitFlag:1;
    unsigned int hasPushMailSettingTicket:1;
    unsigned int hasBuiltinIplist:1;
    unsigned int hasFsurl:1;
    unsigned int hasNetworkControl:1;
    unsigned int hasPluginFlag:1;
    unsigned int hasAlias:1;
    unsigned int hasRegType:1;
    unsigned int hasAuthKey:1;
    unsigned int hasSid:1;
    unsigned int hasPluginKeyList:1;
    unsigned int hasImgEncryptKey:1;
    unsigned int hasA2Key:1;
    unsigned int hasKsid:1;
    unsigned int hasProfileFlag:1;
    unsigned int hasPassword:1;
    unsigned int hasTimeStamp:1;
    unsigned int hasIsAutoReg:1;
    unsigned int hasKickResponse:1;
    unsigned int hasApplyBetaUrl:1;
    unsigned int hasDeviceInfoXml:1;
    unsigned int hasSoftConfigXml:1;
    unsigned int hasNewHostList:1;
    unsigned int hasAuthTicket:1;
    unsigned int hasSafeDevice:1;
    unsigned int hasObsoleteItem1:1;
    unsigned int hasNeedSetEmailPwd:1;
    unsigned int hasHintMsg:1;
    unsigned int hasAutoAuthTicket:1;
    unsigned int hasDnsInfo:1;
    unsigned int hasNextAuthType:1;
    unsigned int hasWtloginRspBuff:1;
    unsigned int hasShowStyle:1;
    unsigned int hasCliDbencryptKey:1;
    unsigned int hasCliDbencryptInfo:1;
    unsigned int hasFlag:1;
    unsigned int hasSnsDnsInfo:1;
    unsigned int hasAppDnsInfo:1;
    unsigned int hasVerifySignature:1;
    unsigned int hasVerifyBuff:1;
    unsigned int uin;
    unsigned int bindUin;
    unsigned int status;
    unsigned int qqmicroBlogStatus;
    unsigned int newVersion;
    unsigned int pushMailStatus;
    unsigned int sendCardBitFlag;
    unsigned int pluginFlag;
    unsigned int regType;
    unsigned int profileFlag;
    unsigned int timeStamp;
    unsigned int isAutoReg;
    unsigned int safeDevice;
    unsigned int obsoleteItem1;
    unsigned int needSetEmailPwd;
    unsigned int nextAuthType;
    unsigned int flag;
    BaseResponse *baseResponse;
    SKBuiltinString_t *userName;
    SKBuiltinString_t *nickName;
    SKBuiltinString_t *bindEmail;
    SKBuiltinString_t *bindMobile;
    NSData *sessionKey;
    SKBuiltinString_t *imgSid;
    SKBuiltinBuffer_t *imgBuf;
    SKBuiltinString_t *officialUserName;
    SKBuiltinString_t *officialNickName;
    SKBuiltinString_t *qqmicroBlogUserName;
    NSString *ticket;
    NSString *pushMailSettingTicket;
    BuiltinIPList *builtinIplist;
    NSString *fsurl;
    NetworkControl *networkControl;
    NSString *alias;
    NSString *authKey;
    NSString *sid;
    PluginKeyList *pluginKeyList;
    SKBuiltinString_t *imgEncryptKey;
    SKBuiltinBuffer_t *a2Key;
    SKBuiltinBuffer_t *ksid;
    NSString *password;
    NSString *kickResponse;
    NSString *applyBetaUrl;
    NSString *deviceInfoXml;
    NSString *softConfigXml;
    HostList *newHostList;
    NSString *authTicket;
    NSString *hintMsg;
    NSString *autoAuthTicket;
    CDNDnsInfo *dnsInfo;
    SKBuiltinBuffer_t *wtloginRspBuff;
    ShowStyleKey *showStyle;
    SKBuiltinBuffer_t *cliDbencryptKey;
    SKBuiltinBuffer_t *cliDbencryptInfo;
    CDNDnsInfo *snsDnsInfo;
    CDNDnsInfo *appDnsInfo;
    NSString *verifySignature;
    SKBuiltinBuffer_t *verifyBuff;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetVerifyBuff:) SKBuiltinBuffer_t *verifyBuff; // @synthesize verifyBuff;
@property(readonly, nonatomic) BOOL hasVerifyBuff; // @synthesize hasVerifyBuff;
@property(retain, nonatomic, setter=SetVerifySignature:) NSString *verifySignature; // @synthesize verifySignature;
@property(readonly, nonatomic) BOOL hasVerifySignature; // @synthesize hasVerifySignature;
@property(retain, nonatomic, setter=SetAppDnsInfo:) CDNDnsInfo *appDnsInfo; // @synthesize appDnsInfo;
@property(readonly, nonatomic) BOOL hasAppDnsInfo; // @synthesize hasAppDnsInfo;
@property(retain, nonatomic, setter=SetSnsDnsInfo:) CDNDnsInfo *snsDnsInfo; // @synthesize snsDnsInfo;
@property(readonly, nonatomic) BOOL hasSnsDnsInfo; // @synthesize hasSnsDnsInfo;
@property(nonatomic, setter=SetFlag:) unsigned int flag; // @synthesize flag;
@property(readonly, nonatomic) BOOL hasFlag; // @synthesize hasFlag;
@property(retain, nonatomic, setter=SetCliDbencryptInfo:) SKBuiltinBuffer_t *cliDbencryptInfo; // @synthesize cliDbencryptInfo;
@property(readonly, nonatomic) BOOL hasCliDbencryptInfo; // @synthesize hasCliDbencryptInfo;
@property(retain, nonatomic, setter=SetCliDbencryptKey:) SKBuiltinBuffer_t *cliDbencryptKey; // @synthesize cliDbencryptKey;
@property(readonly, nonatomic) BOOL hasCliDbencryptKey; // @synthesize hasCliDbencryptKey;
@property(retain, nonatomic, setter=SetShowStyle:) ShowStyleKey *showStyle; // @synthesize showStyle;
@property(readonly, nonatomic) BOOL hasShowStyle; // @synthesize hasShowStyle;
@property(retain, nonatomic, setter=SetWtloginRspBuff:) SKBuiltinBuffer_t *wtloginRspBuff; // @synthesize wtloginRspBuff;
@property(readonly, nonatomic) BOOL hasWtloginRspBuff; // @synthesize hasWtloginRspBuff;
@property(nonatomic, setter=SetNextAuthType:) unsigned int nextAuthType; // @synthesize nextAuthType;
@property(readonly, nonatomic) BOOL hasNextAuthType; // @synthesize hasNextAuthType;
@property(retain, nonatomic, setter=SetDnsInfo:) CDNDnsInfo *dnsInfo; // @synthesize dnsInfo;
@property(readonly, nonatomic) BOOL hasDnsInfo; // @synthesize hasDnsInfo;
@property(retain, nonatomic, setter=SetAutoAuthTicket:) NSString *autoAuthTicket; // @synthesize autoAuthTicket;
@property(readonly, nonatomic) BOOL hasAutoAuthTicket; // @synthesize hasAutoAuthTicket;
@property(retain, nonatomic, setter=SetHintMsg:) NSString *hintMsg; // @synthesize hintMsg;
@property(readonly, nonatomic) BOOL hasHintMsg; // @synthesize hasHintMsg;
@property(nonatomic, setter=SetNeedSetEmailPwd:) unsigned int needSetEmailPwd; // @synthesize needSetEmailPwd;
@property(readonly, nonatomic) BOOL hasNeedSetEmailPwd; // @synthesize hasNeedSetEmailPwd;
@property(nonatomic, setter=SetObsoleteItem1:) unsigned int obsoleteItem1; // @synthesize obsoleteItem1;
@property(readonly, nonatomic) BOOL hasObsoleteItem1; // @synthesize hasObsoleteItem1;
@property(nonatomic, setter=SetSafeDevice:) unsigned int safeDevice; // @synthesize safeDevice;
@property(readonly, nonatomic) BOOL hasSafeDevice; // @synthesize hasSafeDevice;
@property(retain, nonatomic, setter=SetAuthTicket:) NSString *authTicket; // @synthesize authTicket;
@property(readonly, nonatomic) BOOL hasAuthTicket; // @synthesize hasAuthTicket;
@property(retain, nonatomic, setter=SetNewHostList:) HostList *newHostList; // @synthesize newHostList;
@property(readonly, nonatomic) BOOL hasNewHostList; // @synthesize hasNewHostList;
@property(retain, nonatomic, setter=SetSoftConfigXml:) NSString *softConfigXml; // @synthesize softConfigXml;
@property(readonly, nonatomic) BOOL hasSoftConfigXml; // @synthesize hasSoftConfigXml;
@property(retain, nonatomic, setter=SetDeviceInfoXml:) NSString *deviceInfoXml; // @synthesize deviceInfoXml;
@property(readonly, nonatomic) BOOL hasDeviceInfoXml; // @synthesize hasDeviceInfoXml;
@property(retain, nonatomic, setter=SetApplyBetaUrl:) NSString *applyBetaUrl; // @synthesize applyBetaUrl;
@property(readonly, nonatomic) BOOL hasApplyBetaUrl; // @synthesize hasApplyBetaUrl;
@property(retain, nonatomic, setter=SetKickResponse:) NSString *kickResponse; // @synthesize kickResponse;
@property(readonly, nonatomic) BOOL hasKickResponse; // @synthesize hasKickResponse;
@property(nonatomic, setter=SetIsAutoReg:) unsigned int isAutoReg; // @synthesize isAutoReg;
@property(readonly, nonatomic) BOOL hasIsAutoReg; // @synthesize hasIsAutoReg;
@property(nonatomic, setter=SetTimeStamp:) unsigned int timeStamp; // @synthesize timeStamp;
@property(readonly, nonatomic) BOOL hasTimeStamp; // @synthesize hasTimeStamp;
@property(retain, nonatomic, setter=SetPassword:) NSString *password; // @synthesize password;
@property(readonly, nonatomic) BOOL hasPassword; // @synthesize hasPassword;
@property(nonatomic, setter=SetProfileFlag:) unsigned int profileFlag; // @synthesize profileFlag;
@property(readonly, nonatomic) BOOL hasProfileFlag; // @synthesize hasProfileFlag;
@property(retain, nonatomic, setter=SetKsid:) SKBuiltinBuffer_t *ksid; // @synthesize ksid;
@property(readonly, nonatomic) BOOL hasKsid; // @synthesize hasKsid;
@property(retain, nonatomic, setter=SetA2Key:) SKBuiltinBuffer_t *a2Key; // @synthesize a2Key;
@property(readonly, nonatomic) BOOL hasA2Key; // @synthesize hasA2Key;
@property(retain, nonatomic, setter=SetImgEncryptKey:) SKBuiltinString_t *imgEncryptKey; // @synthesize imgEncryptKey;
@property(readonly, nonatomic) BOOL hasImgEncryptKey; // @synthesize hasImgEncryptKey;
@property(retain, nonatomic, setter=SetPluginKeyList:) PluginKeyList *pluginKeyList; // @synthesize pluginKeyList;
@property(readonly, nonatomic) BOOL hasPluginKeyList; // @synthesize hasPluginKeyList;
@property(retain, nonatomic, setter=SetSid:) NSString *sid; // @synthesize sid;
@property(readonly, nonatomic) BOOL hasSid; // @synthesize hasSid;
@property(retain, nonatomic, setter=SetAuthKey:) NSString *authKey; // @synthesize authKey;
@property(readonly, nonatomic) BOOL hasAuthKey; // @synthesize hasAuthKey;
@property(nonatomic, setter=SetRegType:) unsigned int regType; // @synthesize regType;
@property(readonly, nonatomic) BOOL hasRegType; // @synthesize hasRegType;
@property(retain, nonatomic, setter=SetAlias:) NSString *alias; // @synthesize alias;
@property(readonly, nonatomic) BOOL hasAlias; // @synthesize hasAlias;
@property(nonatomic, setter=SetPluginFlag:) unsigned int pluginFlag; // @synthesize pluginFlag;
@property(readonly, nonatomic) BOOL hasPluginFlag; // @synthesize hasPluginFlag;
@property(retain, nonatomic, setter=SetNetworkControl:) NetworkControl *networkControl; // @synthesize networkControl;
@property(readonly, nonatomic) BOOL hasNetworkControl; // @synthesize hasNetworkControl;
@property(retain, nonatomic, setter=SetFsurl:) NSString *fsurl; // @synthesize fsurl;
@property(readonly, nonatomic) BOOL hasFsurl; // @synthesize hasFsurl;
@property(retain, nonatomic, setter=SetBuiltinIplist:) BuiltinIPList *builtinIplist; // @synthesize builtinIplist;
@property(readonly, nonatomic) BOOL hasBuiltinIplist; // @synthesize hasBuiltinIplist;
@property(retain, nonatomic, setter=SetPushMailSettingTicket:) NSString *pushMailSettingTicket; // @synthesize pushMailSettingTicket;
@property(readonly, nonatomic) BOOL hasPushMailSettingTicket; // @synthesize hasPushMailSettingTicket;
@property(nonatomic, setter=SetSendCardBitFlag:) unsigned int sendCardBitFlag; // @synthesize sendCardBitFlag;
@property(readonly, nonatomic) BOOL hasSendCardBitFlag; // @synthesize hasSendCardBitFlag;
@property(nonatomic, setter=SetPushMailStatus:) unsigned int pushMailStatus; // @synthesize pushMailStatus;
@property(readonly, nonatomic) BOOL hasPushMailStatus; // @synthesize hasPushMailStatus;
@property(retain, nonatomic, setter=SetTicket:) NSString *ticket; // @synthesize ticket;
@property(readonly, nonatomic) BOOL hasTicket; // @synthesize hasTicket;
@property(nonatomic, setter=SetNewVersion:) unsigned int newVersion; // @synthesize newVersion;
@property(readonly, nonatomic) BOOL hasNewVersion; // @synthesize hasNewVersion;
@property(nonatomic, setter=SetQqmicroBlogStatus:) unsigned int qqmicroBlogStatus; // @synthesize qqmicroBlogStatus;
@property(readonly, nonatomic) BOOL hasQqmicroBlogStatus; // @synthesize hasQqmicroBlogStatus;
@property(retain, nonatomic, setter=SetQqmicroBlogUserName:) SKBuiltinString_t *qqmicroBlogUserName; // @synthesize qqmicroBlogUserName;
@property(readonly, nonatomic) BOOL hasQqmicroBlogUserName; // @synthesize hasQqmicroBlogUserName;
@property(retain, nonatomic, setter=SetOfficialNickName:) SKBuiltinString_t *officialNickName; // @synthesize officialNickName;
@property(readonly, nonatomic) BOOL hasOfficialNickName; // @synthesize hasOfficialNickName;
@property(retain, nonatomic, setter=SetOfficialUserName:) SKBuiltinString_t *officialUserName; // @synthesize officialUserName;
@property(readonly, nonatomic) BOOL hasOfficialUserName; // @synthesize hasOfficialUserName;
@property(retain, nonatomic, setter=SetImgBuf:) SKBuiltinBuffer_t *imgBuf; // @synthesize imgBuf;
@property(readonly, nonatomic) BOOL hasImgBuf; // @synthesize hasImgBuf;
@property(retain, nonatomic, setter=SetImgSid:) SKBuiltinString_t *imgSid; // @synthesize imgSid;
@property(readonly, nonatomic) BOOL hasImgSid; // @synthesize hasImgSid;
@property(retain, nonatomic, setter=SetSessionKey:) NSData *sessionKey; // @synthesize sessionKey;
@property(readonly, nonatomic) BOOL hasSessionKey; // @synthesize hasSessionKey;
@property(nonatomic, setter=SetStatus:) unsigned int status; // @synthesize status;
@property(readonly, nonatomic) BOOL hasStatus; // @synthesize hasStatus;
@property(retain, nonatomic, setter=SetBindMobile:) SKBuiltinString_t *bindMobile; // @synthesize bindMobile;
@property(readonly, nonatomic) BOOL hasBindMobile; // @synthesize hasBindMobile;
@property(retain, nonatomic, setter=SetBindEmail:) SKBuiltinString_t *bindEmail; // @synthesize bindEmail;
@property(readonly, nonatomic) BOOL hasBindEmail; // @synthesize hasBindEmail;
@property(nonatomic, setter=SetBindUin:) unsigned int bindUin; // @synthesize bindUin;
@property(readonly, nonatomic) BOOL hasBindUin; // @synthesize hasBindUin;
@property(retain, nonatomic, setter=SetNickName:) SKBuiltinString_t *nickName; // @synthesize nickName;
@property(readonly, nonatomic) BOOL hasNickName; // @synthesize hasNickName;
@property(retain, nonatomic, setter=SetUserName:) SKBuiltinString_t *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
@property(nonatomic, setter=SetUin:) unsigned int uin; // @synthesize uin;
@property(readonly, nonatomic) BOOL hasUin; // @synthesize hasUin;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
