//
//  UniAuthHelper.h
//  account_verify_sdk_core
//
//  Created by zhuof on 2018/3/8.
//  Copyright © 2018年 xiaowo. All rights reserved.
//  4.1.3IR01B0320 优化token获取流程。 减少交互。 使用者自行缓存accessCode（具备有效期）。
//  4.3.0IR01B0615 socket通讯优化（GCD方案）
//  4.4.0IR01B0715 1. 预取号流程修改 2.增加读取idfa的功能 3.降低打点频率。

#import <Foundation/Foundation.h>

typedef void (^UniResultListener)(NSDictionary *data);

@interface UniAuthHelper : NSObject

+(UniAuthHelper *) getInstance;

/*
 sdk初始化，每个app只能执行一次初始化调用。
 注意：某些使用者尝试在同一个app中使用多个appid初始化sdk，这可能导致未知隐患发生。
 */
-(void) initWithAppId:(NSString*) appId appSecret:(NSString*) appSecret;

/*
 预取号接口。
  timeout：超时时间，单位秒。
  listener：回调接口
 成功调用有以下前提：
 1. 需要保证手机终端有联通sim卡，并且保证联通数据网络是开启状态。如果没有联通数据网络，将返回“获取鉴权信息失败”
 2. 手机本地时间正确
 3. 如果手机数据网络开启，但是预取号失败，可以尝试手动飞行模式开关一下，尝试让数据网络恢复正常。
 
 预取号获得的accessCode具有效期，请在有效期内使用accesscode换取用户信息。
 */
-(void) getAccessCode:(double)timeout listener:(UniResultListener) listener;

-(void) mobileAuth:(double)timeout listener:(UniResultListener) listener;

-(void) printConsoleEnable:(BOOL)enable;

-(NSString*) getSdkVersion;

@end
