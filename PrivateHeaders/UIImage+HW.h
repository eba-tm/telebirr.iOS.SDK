//
//  UIImage+HW.h
//  HWExercises
//
//  Created by sxmaps_w on 2017/5/22.
//  Copyright © 2017年 wqb. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (HW)

//根据颜色返回图片
+ (UIImage *)imageWithColor:(UIColor *)color;

//获取网络图片
+ (UIImage *)imageWithUrlString:(NSString *)urlString;

@end
