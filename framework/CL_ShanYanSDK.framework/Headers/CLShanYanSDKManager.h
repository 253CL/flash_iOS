//
//  CLShanYanSDKManager.h
//  CL_ShanYanSDK
//
//  Created by wanglijun on 2018/10/29.
//  Copyright © 2018 wanglijun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "CLCompleteResult.h"
#import "CLUIConfigure.h"

NS_ASSUME_NONNULL_BEGIN
@interface CLShanYanSDKManager : NSObject
/**
 预初始化 Block方式
 @param appId 闪验后台申请的appId
 @param appKey 闪验后台申请的appKey
 @param timeOut 超时时间，单位s，传大于0有效，传小于等于0使用默认，默认5s
 @param complete 预初始化回调block 注：(对于预初始化失败的，之后仍可以直接调一键登录接口，SDK内部会再次尝试初始化。当用户收到此回调为失败时，之后可以自行决定是否要调用闪验一键登录，可以通过+(CLCompleteResult*)clSDKInitStutas方法获取当前预初始化状态）
 */
+(void)initWithAppId:(NSString *)appId
              AppKey:(NSString *)appKey
             timeOut:(NSTimeInterval)timeOut
            complete:(nullable CLComplete)complete;


/**
 预取号
 --初始化方法内部会自动执行一次预取号，一般情况下外部可无需调用
 --建议在即将执行一键登录的地方的前60s调用此方法，比如调一键登录的vc的viewdidload中，当初始化的预取号失败的情况下，此调用将有助于提高闪验拉起授权页的速度和成功率
 --不建议频繁的多次调用和在拉起授权页后调用
 */
+(void)preGetPhonenumber:(nullable CLComplete)complete;

/**
 一键登录
 @param clUIConfigure 闪验授权页参数配置
 @param timeOut 超时时间，单位s，传大于0有效，传小于等于0使用默认，默认5s
 @param complete 回调block
 */
+(void)quickAuthLoginWithConfigure:(CLUIConfigure *)clUIConfigure
                           timeOut:(NSTimeInterval)timeOut
                          complete:(nonnull CLComplete)complete;

/**
 一键登录 区分拉起授权页之前和之后的回调

 @param clUIConfigure 闪验授权页参数配置
 @param timeOut 超时时间，单位s，传大于0有效，传小于等于0使用默认，默认5s
 @param shanyanAuthPageListener 拉起授权页的回调
 @param complete 回调block
 */
+(void)quickAuthLoginWithConfigure:(CLUIConfigure *)clUIConfigure
                           timeOut:(NSTimeInterval)timeOut
           shanyanAuthPageListener:(CLComplete)shanyanAuthPageListener
                          complete:(CLComplete)complete;
@end

NS_ASSUME_NONNULL_END
