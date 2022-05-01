//
//  HWProgressHUD.h
//  HWTV
//
//  Created by zhu on 2016/11/23.
//  Copyright © 2016年 yijie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MBProgressHUD.h"


static NSString *const kLoadingMessage = @"加载中...";
static CGFloat const   kShowTime  = 2.0f;


@interface HWProgressHUD : MBProgressHUD
@property (nonatomic, strong) NSString *title;

@property (nonatomic, assign) BOOL isShowGloomy;

#pragma mark - HWProgressHUD 自定义加载视图,当加载开始后，不想加载 可点击 view 取消当前加载的操作

#pragma mark - MBProgressHUD 加载方式 ，点击不可取消加载的方式
/**
 采用MBProgressHUD的刷新方式

 @param fatherView fatherView
 */
+ (instancetype)showMBProgressHUD:(UIView *)fatherView ;


+ (instancetype)showLoadingViewHUD:(UIView *)view userInteractionEnable:(BOOL)ishide;


/**
 采用MBProgressHUD的刷新方式

 @param fatherView fatherView
 */
+ (void)removeMBProgressHUD:(UIView *)fatherView;




@end
