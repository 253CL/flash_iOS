//
//  UniAuthHelper.h
//  account_verify_sdk_core
//
//  Created by zhuof on 2018/3/8.
//  Copyright © 2018年 xiaowo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UniResultListener.h"
#import <UIKit/UIKit.h>

@interface UniAuthHelper : NSObject

+(UniAuthHelper *) getInstance;

-(void) login :(NSString*) appId appSecret:(NSString*) appSecret timeout:(double)timeout uiController:(UIViewController*)uiController listener:(UniResultListener) listener;

-(void)customUIWithParams:(NSDictionary *)customUIParams customViews:(void(^)(UIView                                                                              *customAreaView))customViews;


-(void)setLoginSuccessPage:(UIViewController *)uiController;

@end
