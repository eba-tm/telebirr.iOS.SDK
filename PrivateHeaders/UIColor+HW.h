//
//  UIColor+HW.h
//  HWExercises
//
//  Created by sxmaps_w on 2017/5/22.
//  Copyright © 2017年 wqb. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (HW)

//16进制转化RGB
+ (UIColor *)colorWithHexString:(NSString *)string;

//随机色
+ (UIColor *)randomColor;

@end
