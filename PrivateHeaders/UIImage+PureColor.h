//
//  UIImage+PureColor.h
//  DHOTT
//
//  Copyright © 2015 Huawei Software Technologies Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (PureColor)

/**
 imageForPureColor

 @param color color
 @return return UIImage
 */
+ (UIImage * _Nullable)imageForPureColor:(UIColor * _Nullable)color;

/**
 imageForPureColor:

 @param color color of image
 @param size size of image
 @return return UIImage
 */
+ (UIImage * _Nullable)imageForPureColor:(UIColor * _Nullable)color withSize:(CGSize)size;

/**
 imageForPureColorCircle

 @param color color of image
 @param radius radius of image
 @return return UIImage
 */
+ (UIImage * _Nullable)imageForPureColorCircle:(UIColor * _Nullable)color withRadius:(CGFloat)radius;

@end
