
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ResultListener.h"


@interface OAuthManager : NSObject

//免密登录
+(void) login :(NSString*)apiKey rsaKey:(NSString*) rsaKey cotroller:(UIViewController*)uiController listener:(resultListener) listener timeout:(double)timeout;
//获取用户信息
+(void) user:(NSString*)apiKey rsaKey:(NSString*) rsaKey accessToken:(NSString *) accessToken listener:(resultListener) listener;
//修改UI
+(void) customUIWithParams:(NSDictionary *)customUIParams customViews:(void(^)(UIView                                                                              *customAreaView))customViews;
//自定义跳转
+(void)setLoginSuccessPage:(UIViewController *)uiController;

//获取AccessCode
+(void) getAccessCode :(NSString*)apiKey rsaKey:(NSString*) rsaKey listener:(resultListener) listener ;
//认证手机号
+(void) oauth:(NSString*)apiKey rsaKey:(NSString*) rsaKey mobile:(NSString *) mobile accessCode:(NSString*)accessCode listener:(resultListener) listener;


/**
 *  是否使用测试环境
 *
 *  @param isDebug true／false
 */
+ (void) setDebug:(Boolean) isDebug ;

+ (void) isLog:(Boolean) isLog;
@end
