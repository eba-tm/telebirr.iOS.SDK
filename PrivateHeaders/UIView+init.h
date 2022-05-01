//
//  UIView+init.h
//  HWTV
//
//  Created by gengjie on 2016/10/26.
//  Copyright © 2016年 yijie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (init)
/**
 *  快速创建的类方法
 *
 */
+ (instancetype)hw_viewFromXib;

/**
 添加view动画
 
 @param period 动画时间
 */
- (void)addAnimation:(CFTimeInterval)period;
@end
