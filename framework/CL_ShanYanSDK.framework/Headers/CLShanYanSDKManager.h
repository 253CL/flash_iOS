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
 预初始化 Block方式
 @param appId 闪验后台申请的appId
 @param appKey 闪验后台申请的appKey
 @param complete 预初始化回调block 
 */
+(void)initWithAppId:(NSString *)appId
              AppKey:(NSString *)appKey
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
 @param complete 回调block
 */
+(void)quickAuthLoginWithConfigure:(CLUIConfigure *)clUIConfigure
                          complete:(nonnull CLComplete)complete;


/**
 一键登录 区分拉起授权页之前和之后的回调
 
 @param clUIConfigure 闪验授权页参数配置
 @param openLoginAuthListener 拉起授权页监听
 @param oneKeyLoginListener 一键登录监听
 */
+(void)quickAuthLoginWithConfigure:(CLUIConfigure *)clUIConfigure
           openLoginAuthListener:(CLComplete)openLoginAuthListener
                          oneKeyLoginListener:(CLComplete)oneKeyLoginListener;


/**
 关闭授权页
 注：若授权页未拉起，此方法调用无效果，complete不触发
 @param flag dismissViewcontroller`Animated, default is YES.
 @param completion dismissViewcontroller`completion
 */
+(void)finishAuthControllerCompletion:(void(^_Nullable)(void))completion;
+(void)finishAuthControllerAnimated:(BOOL)flag Completion:(void(^_Nullable)(void))completion;

/**
 模式控制台日志输出控制（默认关闭）
 @param enable 开关参数
 */
+ (void)printConsoleEnable:(BOOL)enable;

@end

NS_ASSUME_NONNULL_END
