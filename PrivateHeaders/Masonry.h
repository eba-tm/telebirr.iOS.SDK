//
//  Masonry.h
//  Masonry
//
//  Created by Jonas Budelmann on 20/07/13.
//  Copyright (c) 2013 cloudling. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for Masonry.
FOUNDATION_EXPORT double MasonryVersionNumber;

//! Project version string for Masonry.
FOUNDATION_EXPORT const unsigned char MasonryVersionString[];

// 屏幕的宽度
#define KWhiteColor [UIColor whiteColor]
#define KBackgroundColor [UIColor colorWithHexString:@"#f0f0f0"]
#define KLineColor [UIColor colorWithHexString:@"#e5e5e5"]
#define kMainColor [UIColor colorWithHexString:@"#2f9cd4"]
#define FamilyblueColor  [UIColor colorWithRed:18.0/255 green:183.0/255 blue:245.0/255 alpha:1.0]
#define FamilyLightBslueColor  [UIColor colorWithRed:78/255.0 green:199/255.0 blue:255/255.0 alpha:0.7]

#define FamilyLightBlackColor  [UIColor colorWithRed:38/255.0 green:38/255.0 blue:38/255.0 alpha:1.0]

#define FamilyLightGrayColor  [UIColor colorWithRed:153/255.0 green:153/255.0 blue:153/255.0 alpha:1.0]
#define HWScreenWidth  [UIScreen mainScreen].bounds.size.width
#define HWScreenHeight [UIScreen mainScreen].bounds.size.height
#define HWScreenBounds [UIScreen mainScreen].bounds
#define HWScreenW (HWScreenWidth>HWScreenHeight?HWScreenHeight:HWScreenWidth)

#define iPhoneSE  ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhone8  ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhone8plus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) : NO)


// iPhone XS 即后续升级系列手机
#define HWIsiPhoneX ((IS_iPhone_X == YES || IS_iPhone_XS == YES || IS_iPhone_XS_MAX == YES || IS_iPhone_XR == YES) ? YES : NO)

// iPhone XS 即后续升级系列手机
#define IS_iPhone_X ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !IS_iPad : NO)


// iPhone XS 即后续升级系列手机
#define IS_iPhone_XS ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !IS_iPad : NO)

// iPhone XS MAX系列手机
#define IS_iPhone_XS_MAX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) && !IS_iPad : NO)

// iPhone XR 系列手机
#define IS_iPhone_XR (([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) && !IS_iPad : NO) || ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1624), [[UIScreen mainScreen] currentMode].size) && !IS_iPad : NO))

//是否是ipad
#define IS_iPad ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)



#define HWNavigationBarHeight (HWIsiPhoneX ? 88.f:64.f)

#define HWHomeNavigationBarHeight (HWIsiPhoneX ? 88.f:67.f)

#define HWNONavigationBarHeight (HWIsiPhoneX ? 20:0)

#define HWNavigationCenterY (HWIsiPhoneX ? 20.f:10.f)

#define HWStatusBarMargin (HWIsiPhoneX ? 44.f:20.f)

#define HWTabBarHeight (HWIsiPhoneX ? 86.f:52.f)

#define HWPlayerHeight (HWScreenWidth * (9 / 16))

#define SD_Gray_BgColor  [UIColor colorWithRed:240/255.0 green:241/255.0 blue:243/255.0 alpha:1.0]

#define SD_White_Color [UIColor whiteColor]

//主题色
#define HWThemeColor [UIColor colorWithRed: 236/255.0 green: 236/255.0 blue: 236/255.0 alpha: 1.0]
#define SD_Blue_COLOR [UIColor colorWithHexString:@"#297ce3"]
#define SD_Blue_COLOR_Thin      [UIColor colorWithRed:6.0/255.0   green:147.0/255.0 blue:251.0/255.0 alpha:1.0]

#define SD_Green_COLOR      [UIColor colorWithRed:16/255.0 green:163/255.0 blue:43/255.0 alpha:0.9]

#define SD_Red_COLOR      [UIColor colorWithRed:255/255.0 green:17/255.0 blue:17/255.0 alpha:0.9]

#define HWColor(r, g, b) [UIColor colorWithRed: (r)/255.0 green: (g)/255.0 blue: (b)/255.0 alpha: 1.0]
#define HWColorAlpha(r, g, b, a) [UIColor colorWithRed: (r)/255.0 green: (g)/255.0 blue: (b)/255.0 alpha: (a)]
// 获取随机色
#define HWRandomColor [UIColor colorWithRed: arc4random()%256/256.0 green: arc4random()%256/256.0 blue: arc4random()%256/256.0 alpha: 1.0]

#define HWRandomColorWithAlpha(ALPHA) [UIColor colorWithRed: arc4random()%256/256.0 green: arc4random()%256/256.0 blue: arc4random()%256/256.0 alpha:(ALPHA)]

// tableView背景颜色
#define HWTableViewBackgroundColor [UIColor colorWithRed: 20/255.0 green: 20/255.0 blue: 20/255.0 alpha: 1.0];

#define WINDOW        [[UIApplication sharedApplication].delegate window]

// 代码执行时间
#define TICK   NSDate *startTime = [NSDate date];
#define TOCK   HWLog(@"Time: %f", -[startTime timeIntervalSinceNow])

// 选中的颜色
#define HWSelectedColor [UIColor colorWithHexString:@"#008AFF"]
// self.view背景色
#define HWBgColor [UIColor colorWithRed: 20/255.0 green: 20/255.0 blue: 20/255.0 alpha: 1.0]

#define HWNormalColor [UIColor colorWithRed:255/255.0 green:255/255.0 blue:255/255.0 alpha:0.3]

#define HWHighlightColor  [UIColor colorWithRed:255/255.0 green:255/255.0 blue:255/255.0 alpha:1]


//输入框限制
#define INPUT_MAX_PASSWORD_LENGTH 12
#define INPUT_MAX_ACCOUNT_LENGTH  11
#define INPUT_ACCOUNT_CHAR @"0123456789"
#define INPUT_VALID_PIN_CHAR @"ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789abcdefghijklmnopqrstuvwxyz"

//登陆通知字段
#define NOTIFICATIONNAME @"locationViewController"
#define LOCATION_CONTROLLER @"controllers"
#define LOCATION @"location"

#define LOGINCONTROLLERNAME @"loginController"

#define BACKGROUNDLOGINSUCCESS @"background_login_success"

#define HWLoginSuccessNotification @"HWLoginSuccessNotification"
#define HWLoginOutNotification @"HWLoginOutNotification"

#define LoginSuccessNotification @"LoginSuccessNotification"
#define LoginGuestToUserNotification @"LoginGuestToUserNotification"

/** 心跳数据 */
#define HWOnLineHeartbeatRsp @"HWOnLineHeartbeatRsp"
/** 心跳刷新通知 */
#define HWOnLineHeartbeatRspNotification @"HWOnLineHeartbeatRspNotification"

//账号是会员账号通知字段
#define HWUserOrderNOtification @"HWUserOrderNOtification"

//登录账号 是否使用 M
#define Login_Account_M  1

//设备上限字段
#define DeviceReachedSystemLimitRetCode @"157022007"
//#define DeviceReachedSystemLimitRetCode_1 @"157022007"
//#define DeviceReachedSystemLimitRetCode_2 @"110020001"


/** caas挂断电话的通知 */
#define HWCaasHangupNotification @"HWCaasHangupNotification"

#define HWPlayerProgrammePlayFinishNotification @"HWPlayerProgrammePlayFinishNotification"

#define HWPlayerProgrammePlayFinishPlayKey @"HWPlayerProgrammePlayFinishPlayKey"

/** 发送关闭伴随屏的通知 */
#define HWSuspendedPlayerCloseNofitication  @"HWSuspendedPlayerCloseNofitication"
/** 换肤通知 */
#define ChangeSkinNotification @"ChangeSkinNotification"

/** 心跳请求信息的key */
#define HWHeartbeatRequestDataKey  @"HWHeartbeatRequestDataKey"

// Caas 日志输出、环境切换，0：不输出日志、福建环境，1：输出日志、测试环境，release 版本需要改成 0
#define Caas_Log_Debug      0
// 是否是易视腾环境
#define YST_Debug 1

//#define GuestAccount @"15950494548"
#define GuestAccount @"13888888888"


//APP后台约定固定字段格式
#define APPID @"10001"
#define APPKEY @"APPClient@Key000"
#define APPMOBILEPREFIX @"125506"

#define APPURL @"https://fjbmvapp.hvs.fj.chinamobile.com/appRegister"
#define APPVER_ADURL @"https://fjbmvapp.hvs.fj.chinamobile.com/appUpgrade"

#define OTT_FUNC_START() CFTimeInterval time_start = CFAbsoluteTimeGetCurrent()

#define OTT_FUNC_END() NSLog(@"[composite].[%@].[%s] E-time:[%f]", NSStringFromClass([self class]),__FUNCTION__,(CFAbsoluteTimeGetCurrent() - time_start))

#define GUEST_ID @"GUEST_20161117"  // The key for guest login Search history stored locally

#define  RemoteSwitchOn  @"isSwitchOn"

#define  notiIsSwitchOn  @"notiIsSwitchOn"

#define notiShowDetailIsSwitchOn @"notiShowDetailIsSwitchOn"

#define  WLANSwitchOn  @"WLANSwitchOn"

#define ForcedChangeThemeColor  @"forcedChangeThemeColor"

//机型
#define DEVICEMODEL [[UIDevice currentDevice] model]
//系统版本
#define SYSTEMVERSION [[UIDevice currentDevice] systemVersion]
//app 版本
#define APPVERSION  [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]



#import "MASUtilities.h"
#import "View+MASAdditions.h"
#import "View+MASShorthandAdditions.h"
#import "ViewController+MASAdditions.h"
#import "NSArray+MASAdditions.h"
#import "NSArray+MASShorthandAdditions.h"
#import "MASConstraint.h"
#import "MASCompositeConstraint.h"
#import "MASViewAttribute.h"
#import "MASViewConstraint.h"
#import "MASConstraintMaker.h"
#import "MASLayoutConstraint.h"
#import "NSLayoutConstraint+MASDebugAdditions.h"
