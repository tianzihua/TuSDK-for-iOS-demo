//
//  TuSDKAOValid.h
//  TuSDK
//
//  Created by Clear Hu on 14/12/15.
//  Copyright (c) 2014年 Lasque. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 *  SDK用户验证
 */
@interface TuSDKAOValid : NSObject

/**
 *  SDK用户验证
 *
 *  @return SDK用户验证
 */
+ (instancetype) shared;

/**
 *  是否通过开发者账号验证
 */
@property (nonatomic, readonly, getter=isValid) BOOL isValid;

/**
 *  开发者级别
 */
@property (nonatomic, readonly, getter=level) NSInteger level;

/**
 *  验证开发者ID
 *
 *  @param key 开发者ID
 *
 *  @return 是否通过验证
 */
- (BOOL)sdkValidWithKey:(NSString *)key;

/**
 *  验证开发者ID
 *
 *  @return 是否通过验证
 */
- (BOOL)sdkValid;

/**
 *  是否允许该级别
 *
 *  @return 级别
 */
- (BOOL)allowLevel:(NSUInteger)level;

/**
 *  图片最大允许处理的边长
 *
 *  @return 边长
 */
- (CGFloat)maxImageSide;

/**
 *  允许最多使用贴纸数量
 *
 *  @return 最多使用贴纸数量
 */
- (NSUInteger)maxStickers;
@end