//
//  ResourcePathForWhite.h
//  Gadgets
//
//  Copyright © 2016年 huawei. All rights reserved.
//

#import "GadgetsEnv.h"

#ifndef ResourcePathForWhite_h
#define ResourcePathForWhite_h

#define OTTResourceEnglishErrorMsgXMLName @"ErroCodeMessage_en"
#define OTTResourceOtherErrorMsgXMLName @"ErroCodeMessage_zh"

#define OTTResourceEnglishLanguageJSONName [NSString stringWithFormat:@"string_%@",[GadgetsEnv getLanguageArray].firstObject]
#define OTTResourceOtherLanguageJSONName [NSString stringWithFormat:@"string_%@",[GadgetsEnv getLanguageArray].lastObject]

#define OTTResourceEnglishErrorMsgJSONName [NSString stringWithFormat:@"message_%@",[GadgetsEnv getLanguageArray].firstObject]
#define OTTResourceOtherErrorMsgJSONName [NSString stringWithFormat:@"message_%@",[GadgetsEnv getLanguageArray].lastObject]

//#define OTTResourceOtherErrorMsgJSONName @"message_zh"
#define OTTResourceLangugageSuffix @".xml"
#define OTTResourceMessageSuffix @".json"
#define OTTResourceColorFileName @"color.json"
#define OTTResourceDirectoryPath [NSString stringWithFormat:@"%@/OTTResource", NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES).firstObject]
#define OTTResourceImagePath [NSString stringWithFormat:@"%@/OTTResource/image/iOS", NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES).firstObject]
#define OTTResourceStringPath [NSString stringWithFormat:@"%@/OTTResource/string", NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES).firstObject]
#define OTTResourceMessagePath [NSString stringWithFormat:@"%@/OTTResource/message", NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES).firstObject]
#define OTTResourceColorPath [NSString stringWithFormat:@"%@/OTTResource/color/color.json", NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES).firstObject]


#endif /* ResourcePathForWhite_h */
