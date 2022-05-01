//
//  UIImage+WhiteLabel.h
//  DHOTT
//
//  Copyright (c) 2015 Huawei Software Technologies Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
@interface UIImage (WhiteLabel)

/**
 get image with name key for whitelabel

 @param name key
 @param isCache if need cache
 @return UIImage instance
 */
+ (instancetype)imageWithName:(NSString *)name isCache:(BOOL)isCache;

/**
 get image with name key for whitelabel

 @param name key
 @return UIImage instance
 */
+ (instancetype)imageWithName:(NSString *)name;

/**
 get image with template name

 @param templateName key
 @return UIImage instance
 */
+ (instancetype)imageWithTemplateName:(NSString *)templateName;
NS_ASSUME_NONNULL_END
@end
