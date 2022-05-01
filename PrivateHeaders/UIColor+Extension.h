//
//  UIColor+Extension.h
//  驴宝宝
//
//  Created by 无头骑士 GJ on 15/8/8.
//  Copyright (c) 2015年 无头骑士 GJ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Extension)
+ (UIColor *)HWColorWithHexString:(NSString *)color alpha:(CGFloat)alpha;
+ (UIColor *)HWColorWithHexString:(NSString *)color;


+ (UIColor *)colorWithHexString:(NSString *)color;

//从十六进制字符串获取颜色，
//color:支持@“#123456”、 @“0X123456”、 @“123456”三种格式
+ (UIColor *)colorWithHexString:(NSString *)color alpha:(CGFloat)alpha;

/**
 *  @brief  根据颜色生成纯色图片
 *
 *  @param color 颜色
 *
 *  @return 纯色图片
 */
+ (UIImage *)imageWithColor:(UIColor *)color;


    //新添加处理颜色的方法
+ (UIColor *)colorWithHex:(NSString *)string;

+ (UIColor *)colorWithHexColor:(NSString *)color;

/*
 view 是要设置渐变字体的控件   bgVIew是view的父视图  colors是渐变的组成颜色  startPoint是渐变开始点 endPoint结束点
 */
+ (void)TextGradientview:(UIView *)view bgVIew:(UIView *)bgVIew gradientColors:(NSArray *)colors;
@end
