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

@protocol CLShanYanSDKManagerDelegate <NSObject>
@optional
/**
 * 授权页面协议点击回调
 * @param privacyName 协议名称
 * @param index       协议位置--0:运营商协议--1:用户协议一--2:用户协议二
 * @param telecom     当前运营商类型
*/
-(void)clShanYanSDKManagerWebPrivacyClicked:(NSString *_Nonnull)privacyName privacyIndex:(NSInteger)index currentTelecom:(NSString *_Nullable)telecom;

/**
 * 授权页面将要显示的回调
 * ViewDidLoad After
 * @param telecom     当前运营商类型
 */
-(void)clShanYanSDKManagerAuthPageAfterViewDidLoad:(UIView *_Nonnull)authPageView currentTelecom:(NSString *_Nullable)telecom;

@end

NS_ASSUME_NONNULL_BEGIN
@interface CLShanYanSDKManager : NSObject


/// 设置点击协议代理
/// @param delegate 代理
+ (void)setCLShanYanSDKManagerDelegate:(id<CLShanYanSDKManagerDelegate>)delegate;

/**
 初始化
 @param appId 闪验后台申请的appId
 @param complete 预初始化回调block 
 */
+(void)initWithAppId:(NSString *)appId complete:(nullable CLComplete)complete;
+(void)initWithAppId:(NSString *)appId
              AppKey:(NSString *)appKey
            complete:(nullable CLComplete)complete DEPRECATED_MSG_ATTRIBUTE("Method deprecated. Use `initWithAppId:complete:`");

///**
// 设置初始化超时 单位:s
// 大于0有效
// 建议4s左右，默认4s
// */
//+ (void)setInitTimeOut:(NSTimeInterval)initTimeOut;

/**
 设置预取号超时 单位:s
 大于0有效
 建议4s左右，默认4s
 */
+ (void)setPreGetPhonenumberTimeOut:(NSTimeInterval)preGetPhoneTimeOut;

/**
 * 预取号
 * 此调用将有助于提高闪验拉起授权页的速度和成功率
 * 建议在一键登录前提前调用此方法，比如调一键登录的vc的viewdidload中、初始化成功的回调中
 * 不建议在拉起授权页后调用
 * 回调中如需UI操作，建议自行切到主线程
 */
+(void)preGetPhonenumber:(nullable CLComplete)complete;

/**
 * 一键登录
 @param clUIConfigure 闪验授权页参数配置
 @param complete 回调block
 * 回调中如需UI操作，建议自行切到主线程
 */
+(void)quickAuthLoginWithConfigure:(CLUIConfigure *)clUIConfigure
                          complete:(nonnull CLComplete)complete;


/**
 一键登录 区分拉起授权页之前和之后的回调
 
 @param clUIConfigure 闪验授权页参数配置
 @param openLoginAuthListener 拉起授权页监听：拉起授权页面成功或失败的回调，拉起成功或失败均触发。当拉起失败时，oneKeyLoginListener不会触发。此回调的内部触发时机是viewDidAppear
                    
 @param oneKeyLoginListener 一键登录监听：拉起授权页成功后的后续操作回调，包括点击SDK内置的(非外部自定义)取消登录按钮，以及点击本机号码一键登录的回调。点击授权页自定义按钮不触发此回调
 
 * 回调中如需UI操作，建议自行切到主线程
 */
+(void)quickAuthLoginWithConfigure:(CLUIConfigure *)clUIConfigure
           openLoginAuthListener:(CLComplete)openLoginAuthListener
                          oneKeyLoginListener:(CLComplete)oneKeyLoginListener;


/**
 关闭授权页
 注：若授权页未拉起，此方法调用无效果，complete不触发。内部实现为调用系统方法dismissViewcontroller:Complete。
 @param flag dismissViewcontroller`Animated, default is YES.
 @param completion dismissViewcontroller`completion
 */
+(void)finishAuthControllerCompletion:(void(^_Nullable)(void))completion;
+(void)finishAuthControllerAnimated:(BOOL)flag Completion:(void(^_Nullable)(void))completion;


/**************本机认证功能***************/
/**
 本机号码校验

 @param complete 校验回调
 */
+ (void)mobileCheckWithLocalPhoneNumberComplete:(CLComplete)complete;

/**************本机认证功能***************/


/**
 模式控制台日志输出控制（默认关闭）
 @param enable 开关参数
 */
+ (void)printConsoleEnable:(BOOL)enable;


/**
 禁止日志上报(默认开启)
 ****此接口需要在初始化之前调用,否则配置不生效****
 @param forbidden YES:禁止上报 NO:允许上报
 */
+ (void)forbiddenFullLogReport:(BOOL)forbidden;

/**
 * 当前SDK版本号
 */
+ (NSString *)clShanYanSDKVersion;

+(void)sdkInit:(NSString *)appId complete:(nullable CLComplete)complete;

@end

NS_ASSUME_NONNULL_END
