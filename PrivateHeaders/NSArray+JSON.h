//
//  NSArray+JSON.h
//  Education
//
//  Created by 肖夕东 on 2018/8/25.
//  Copyright © 2018年 baidu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (JSON)

/**
 *  转换成JSON串字符串（没有可读性）
 *
 *  @return JSON字符串
 */
- (NSString *)toJSONString;

/**
 *  转换成JSON串字符串（有可读性）
 *
 *  @return JSON字符串
 */
- (NSString *)toReadableJSONString;

/**
 *  转换成JSON数据
 *
 *  @return JSON数据
 */
- (NSData *)toJSONData;

@end
