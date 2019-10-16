//
//  ZOAuthManager 能力接入管理者-提供加解密方法
//  OAuthSDKApp
//
//  Created by zhangQY on 2019/5/13.
//  Copyright © 2019 com.zzx.sdk.ios.test. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, ZO_CellularProvider)
{
    zo_noSIMCard,//没有SIM卡
    zo_isChinaUnicom,//中国联通
    zo_isChinaMobile,//中国移动
    zo_isChinaTeleCom,//中国电信
    zo_isOtherProvider,//其他
};
@interface ZOAuthManager : NSObject

/**
 *  是否使用测试环境
 *
 *  @param isDebug true／false
 */
+ (void) setDebug:(Boolean) isDebug ;

//获取当前的运营商类型；(注意在双卡手机上的使用)
+(ZO_CellularProvider)getCellularProvider;

//IOS12.1以上有效；判读手机里是否有两张SIM卡
+ (BOOL)hasDoubleSIMCard:(void(^)(BOOL ifHas,NSDictionary * dic))block;

@end
