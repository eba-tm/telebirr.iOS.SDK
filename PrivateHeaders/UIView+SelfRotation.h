//
//  UIView+SelfRotation.h
//  DHOTT
//
//  Copyright © 2015 Huawei Software Technologies Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Spin)

/**
 Add a spin animation to receiver.

 @param period Period of spin animation.
 */
- (void)selfRotate:(CFTimeInterval)period;

/**
 End spin animation.
 */
- (void)endRotation;

@end
