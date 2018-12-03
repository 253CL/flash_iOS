//
//  EAccountSDK.h
//  EAccountSDKNetwork
//
//  Created by thy on 2018/6/23.
//  Copyright © 2018年 21CN. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 声明一个block
 @param resultDic 网络返回的data的解析结果
 */
typedef   void (^successHandler) ( NSDictionary * _Nonnull resultDic);

/**
 声明一个block
 @param error 网络返回的错误或者其它错误
 */
typedef   void (^failureHandler) (NSError * _Nonnull error);

NS_ASSUME_NONNULL_BEGIN

@interface EAccountSDK : NSObject

/**
 初始化SDK
 @param appKey 接入方在账号平台领取的appKey
 @param appSecrect 接入方在账号平台领取的appSecrect
 */
+ (void)initWithSelfKey:(NSString *)appKey
              appSecret:(NSString *)appSecrect;


/**
 默认为正式环境的bundleID,需要使用测试环境的bundleID（企业证书重签名），请添加这个方法，在发布APP的时候请确保没有使用该方法。
 */

+(void)setTestBundleId;

/**
 *@description 预取号
  @param apiTimeoutInterval 接口超时时间，传0或者小于0的数，则默认为3s
*/

+ (void)getMobileCodeWithTimeout:(NSTimeInterval)apiTimeoutInterval
           completion:(nonnull successHandler)completion
              failure:(nonnull failureHandler)fail;

/**
 *@description 校验
 @param apiTimeoutInterval 接口超时时间，传0或者小于0的数，则默认为3s
 */

+ (void)getVerificationCodeWithTimeout:(NSTimeInterval)apiTimeoutInterval
                      completion:(nonnull successHandler)completion
                         failure:(nonnull failureHandler)fail;

/**
 *@description 网络认证
 *@param accessCode 预取号获取d的accessCode
 */
+ (void)gatewayAuthWithAccessCode:(NSString*)accessCode
                  withTimeoutInterval:(NSTimeInterval)apiTimeoutInterval
           completion:(nonnull successHandler)completion
              failure:(nonnull failureHandler)fail;


@end

NS_ASSUME_NONNULL_END
