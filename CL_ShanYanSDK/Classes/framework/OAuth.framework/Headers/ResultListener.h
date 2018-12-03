//
//  ResultListener.h
//  OAuthSDKApp
//
//  Created by zhangQY on 2018/8/31.
//  Copyright © 2018年 com.zzx.sdk.ios.test. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface ResultListener : NSObject
typedef void (^resultListener)(NSDictionary *data);
@end
