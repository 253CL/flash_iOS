//
//  CLCTCCUIConfigure.h
//  CL_ShanYanSDK
//
//  Created by wanglijun on 2018/10/30.
//  Copyright © 2018 wanglijun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/*
 注： 授权页一键登录按钮、运营商品牌标签、运营商条款必须显示，不得隐藏，否则取号能力可能被运营商关闭
 **/

//授权页UI配置
/**授权页面的各个控件的Y轴默认值都是以375*667屏幕为基准
*/
@interface CLUIConfigure : NSObject

//要拉起授权页的vc [必填项] (注：SDK不持有接入方VC)
@property (nonatomic,weak)UIViewController * viewController;
/**授权页-背景图片*/
@property (nonatomic,strong) UIImage *clBackgroundImg;
/**
 外部手动管理关闭界面
 default is NO
 */
@property (nonatomic,strong)NSNumber * manualDismiss;

//导航栏
/**导航栏 是否隐藏 default is NO, 设置优先级高于cl_navigation_backgroundClear*/
@property (nonatomic,strong)NSNumber * cl_navigation_navigationBarHidden;
/**导航栏 背景透明*/
@property (nonatomic,strong)NSNumber * cl_navigation_backgroundClear;
/**导航栏标题*/
@property (nonatomic,strong)NSAttributedString * cl_navigation_attributesTitleText;
/**导航栏右侧自定义按钮*/
@property (nonatomic,strong)UIBarButtonItem * cl_navigation_rightControl;
/**导航栏左侧自定义按钮*/
@property (nonatomic,strong)UIBarButtonItem * cl_navigation_leftControl;
/**导航栏左侧返回按钮图片*/
@property (nonatomic,strong)UIImage   * cl_navigation_backBtnImage;
/**导航栏左侧自定义按钮隐藏设置，默认显示*/
@property (nonatomic,strong)NSNumber  * cl_navigation_backBtnHidden;

@property (nonatomic,strong)NSNumber * cl_navigation_translucent;
/**导航栏分割线 是否隐藏 default is YES*/
@property (nonatomic,strong)NSNumber * cl_navigation_bottomLineHidden;
/**导航栏 文字颜色*/
@property (nonatomic,strong)UIColor  * cl_navigation_tintColor;
/**导航栏 背景色 default is white*/
@property (nonatomic,strong)UIColor  * cl_navigation_barTintColor;
/**导航栏 背景图片*/
@property (nonatomic,strong)UIImage  * cl_navigation_backgroundImage;
/**导航栏 配合背景图片设置，用来控制在不同状态下导航栏的显示(横竖屏是否显示)*/
@property (nonatomic,strong)NSNumber * cl_navigation_barMetrics;
/**导航栏 导航栏底部分割线（图片）*/
@property (nonatomic,strong)UIImage  * cl_navigation_shadowImage;
/**状态栏隐藏 default is NO*/
@property (nonatomic,strong)NSNumber * cl_statusBar_hidden;
/**状态栏 状态栏文字颜色
 *默认的黑色 UIStatusBarStyleDefault
 *白色 UIStatusBarStyleLightContent*/
@property (nonatomic,strong)NSNumber * cl_statusBar_Style;


/**
 *NavigationBar.barStyle：默认UIBarStyleBlack,配合cl_statusBar_Style使用
 *Info.plist: View controller-based status bar appearance = YES
 *导航栏隐藏时：
 *状态栏黑白由 statusBar_Style 决定：
 *UIStatusBarStyleLightContent：状态栏显示 黑
 *UIStatusBarStyleLightContent：状态栏显示 白
 *导航栏显示时：
 *状态栏黑白由 navigation_barStyle 决定
 *UIBarStyleDefault：状态栏显示 黑
 *UIBarStyleBlack：状态栏显示 白
 */
@property (nonatomic,strong)NSNumber * cl_navigation_barStyle;



//LOGO图片
/**LOGO图片*/
@property (nonatomic,strong)UIImage  * clLogoImage;
/**LOGO高度*/
@property (nonatomic,strong)NSNumber * clLogoHeight;
/**LOGO宽度*/
@property (nonatomic,strong)NSNumber * clLogoWidth;
/**LOGO偏移量*/
@property (nonatomic,strong)NSNumber * clLogoOffsetY;
/**LOGO水平偏移量*/
@property (nonatomic,strong)NSNumber * clLogoOffsetX;
/**LOGO圆角*/
@property (nonatomic,strong)NSNumber * clLogoCornerRadius;
/**LOGO显隐*/
@property (nonatomic,strong)NSNumber * clLogoHiden;


//手机号显示控件
/**手机号颜色*/
@property (nonatomic,strong)UIColor  * clPhoneNumberColor;
/**手机号字体*/
@property (nonatomic,strong)UIFont   * clPhoneNumberFont;
/**手机号Y偏移量*/
@property (nonatomic,strong)NSNumber * clPhoneNumberOffsetY;
/**手机号X偏移量*/
@property (nonatomic,strong)NSNumber * clPhoneNumberOffsetX;
/**手机号高度*/
@property (nonatomic,strong)NSNumber * clPhoneNumberHeight;
/**手机号宽度*/
@property (nonatomic,strong)NSNumber * clPhoneNumberWidth;



/*一键登录按钮 控件
 注： 一键登录授权按钮 不得隐藏
 **/
/**按钮文字*/
@property (nonatomic,copy)NSString   * clLoginBtnText;
/**按钮文字颜色*/
@property (nonatomic,strong)UIColor  * clLoginBtnTextColor;
/**按钮背景颜色 - 图片设置优先级高于背景色*/
@property (nonatomic,strong)UIColor  * clLoginBtnBgColor;
/**按钮文字字体*/
@property (nonatomic,strong)UIFont   * clLoginBtnTextFont;
/**按钮背景图片*/
@property (nonatomic,strong)UIImage  * clLoginBtnNormalBgImage;
/**按钮Y偏移量*/
@property (nonatomic,strong)NSNumber * clLoginBtnOffsetY;
/**按钮偏X移量*/
@property (nonatomic,strong)NSNumber * clLoginBtnOffsetX;
/**按钮width*/
@property (nonatomic,strong)NSNumber * clLoginBtnWidth;
/**按钮height*/
@property (nonatomic,strong)NSNumber * clLoginBtnHeight;
/**按钮边框width*/
@property (nonatomic,strong)NSNumber * clLoginBtnBorderWidth;
/**按钮边框颜色*/
@property (nonatomic,strong)UIColor  * clLoginBtnBorderColor;
/**按钮偏圆角*/
@property (nonatomic,strong)NSNumber * clLoginBtnCornerRadius;


/*隐私条款Privacy
 注： 运营商隐私条款 不得隐藏
 用户条款不限制
 **/
/**隐私条款名称颜色：@[基础文字颜色,条款颜色]*/
@property (nonatomic,strong) NSArray<UIColor*> *clAppPrivacyColor;
/**隐私条款Y偏移量(注:此属性为条款顶部与屏幕底部的距离)*/
@property (nonatomic,strong)NSNumber* clAppPrivacyOffsetY;
/**隐私条款文字字体*/
@property (nonatomic,strong)UIFont  * clAppPrivacyTextFont;
/**隐私条款文字对齐方式*/
@property (nonatomic,strong)NSNumber* clAppPrivacyTextAlignment;
/**隐私条款一:需同时设置Name和UrlString,格式为@[@"条款一名称":@"条款一URL"]*/
@property (nonatomic,strong)NSArray<NSString*> * clAppPrivacyFirst;
/**隐私条款二:需同时设置Name和UrlString,格式为@[@"条款一名称":@"条款一URL"]*/
@property (nonatomic,strong)NSArray<NSString*> * clAppPrivacySecond;
/**隐私协议WEB页面导航栏标题*/
@property (nonatomic,strong)NSAttributedString * clAppPrivacyWebAttributesTitle;
/**隐私协议WEB页面导航返回按钮图片*/
@property (nonatomic,strong)UIImage * clAppPrivacyWebBackBtnImage;


/*SLOGAN
 注： 运营商品牌标签，不得隐藏
 **/
/**sloganX偏移量*/
@property (nonatomic,strong) NSNumber * clSloganOffsetX;
/**sloganY偏移量*/
@property (nonatomic,strong) NSNumber * clSloganOffsetY;
/**slogan width*/
@property (nonatomic,strong) NSNumber * clSloganWidth;
/**slogan height*/
@property (nonatomic,strong) NSNumber * clSloganHeight;
/**slogan文字字体*/
@property (nonatomic,strong) UIFont   * clSloganTextFont;
/**slogan文字颜色*/
@property (nonatomic,strong) UIColor  * clSloganTextColor;
/**slogan文字对齐方式*/
@property (nonatomic,strong) NSNumber * clSlogaTextAlignment;


/*CHECKBOX
 *协议勾选框，默认选中且在协议前显示
 *在sdk_oauth.bundle中替换checkBox_unSelected、checkBox_selected图片即可
 *默认在在sdk_oauth.bundle中删除了该图片，需用户自定义。
 **/
/**协议勾选框（默认显示,放置在协议之前）*/
@property (nonatomic,strong) NSNumber *clCheckBoxHidden;
/**协议勾选框默认值（默认不选中）*/
@property (nonatomic,strong) NSNumber *clCheckBoxValue;
/**协议勾选框 尺寸 默认15*15*/
@property (nonatomic,assign) CGSize    clCheckBoxSize;
/**协议勾选框 非选中状态图片*/
@property (nonatomic,strong) UIImage  *clCheckBoxUncheckedImage;
/**协议勾选框 选中状态图片*/
@property (nonatomic,strong) UIImage  *clCheckBoxCheckedImage;


//添加自定义控件
/**导航栏以下的页面,可设置背景色及添加控件*/
@property (nonatomic,copy)void(^customAreaView)(UIView * customAreaView);

/**默认界面配置*/
+ (CLUIConfigure *)clDefaultUIConfigure;

@end



NS_ASSUME_NONNULL_END
