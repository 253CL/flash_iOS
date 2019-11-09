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
@class CLOrientationLayOut;
/*
 注： 授权页一键登录按钮、运营商品牌标签、运营商条款必须显示，不得隐藏，否则取号能力可能被运营商关闭
 **/

//授权页UI配置

@interface CLUIConfigure : NSObject

//要拉起授权页的vc [必填项] (注：SDK不持有接入方VC)
@property (nonatomic,weak)UIViewController * viewController;

/**
 *外部手动管理关闭界面
 *BOOL,default is NO
 *eg.@(YES)
 */
@property (nonatomic,strong)NSNumber * manualDismiss;

/**授权页-背景图片*/
@property (nonatomic,strong) UIImage *clBackgroundImg;

//导航栏
/**导航栏 是否隐藏 BOOL default is NO, 设置优先级高于clNavigationBackgroundClear eg.@(NO)*/
@property (nonatomic,strong)NSNumber * clNavigationBarHidden;
@property (nonatomic,strong)NSNumber * cl_navigation_navigationBarHidden;
/**导航栏 背景透明 BOOL eg.@(YES)*/
@property (nonatomic,strong)NSNumber * clNavigationBackgroundClear;
@property (nonatomic,strong)NSNumber * cl_navigation_backgroundClear;
/**导航栏标题*/
@property (nonatomic,strong)NSAttributedString * clNavigationAttributesTitleText;
@property (nonatomic,strong)NSAttributedString * cl_navigation_attributesTitleText;
/**导航栏右侧自定义按钮*/
@property (nonatomic,strong)UIBarButtonItem * clNavigationRightControl;
@property (nonatomic,strong)UIBarButtonItem * cl_navigation_rightControl;
/**导航栏左侧自定义按钮*/
@property (nonatomic,strong)UIBarButtonItem * clNavigationLeftControl;
@property (nonatomic,strong)UIBarButtonItem * cl_navigation_leftControl;
/**导航栏左侧返回按钮图片*/
@property (nonatomic,strong)UIImage   * clNavigationBackBtnImage;
@property (nonatomic,strong)UIImage   * cl_navigation_backBtnImage;
/**导航栏左侧自定义按钮隐藏设置，默认显示 BOOL eg.@(YES)*/
@property (nonatomic,strong)NSNumber  * clNavigationBackBtnHidden;
@property (nonatomic,strong)NSNumber  * cl_navigation_backBtnHidden;

/*translucent 此属性已失效*/
@property (nonatomic,strong)NSNumber * cl_navigation_translucent;

/**导航栏分割线 是否隐藏 default is NO, BOOL eg.@(YES) */
@property (nonatomic,strong)NSNumber * clNavigationBottomLineHidden;
@property (nonatomic,strong)NSNumber * cl_navigation_bottomLineHidden;
/**导航栏 文字颜色*/
@property (nonatomic,strong)UIColor  * clNavigationTintColor;
@property (nonatomic,strong)UIColor  * cl_navigation_tintColor;
/**导航栏 背景色 default is white*/
@property (nonatomic,strong)UIColor  * clNavigationBarTintColor;
@property (nonatomic,strong)UIColor  * cl_navigation_barTintColor;
/**导航栏 背景图片*/
@property (nonatomic,strong)UIImage  * clNavigationBackgroundImage;
@property (nonatomic,strong)UIImage  * cl_navigation_backgroundImage;
/**导航栏 配合背景图片设置，用来控制在不同状态下导航栏的显示(横竖屏是否显示) UIBarMetrics eg.@(UIBarMetricsCompact)*/
@property (nonatomic,strong)NSNumber * clNavigationBarMetrics;
@property (nonatomic,strong)NSNumber * cl_navigation_barMetrics;
/**导航栏 导航栏底部分割线（图片）*/
@property (nonatomic,strong)UIImage  * clNavigationShadowImage;
@property (nonatomic,strong)UIImage  * cl_navigation_shadowImage;

/**状态栏隐藏 此属性已失效*/
@property (nonatomic,strong)NSNumber * cl_statusBar_hidden;
/**状态栏样式 此属性已失效*/
@property (nonatomic,strong)NSNumber * cl_statusBar_Style;

/**
 *NavigationBar.barStyle：默认UIBarStyleBlack
 *Info.plist: View controller-based status bar appearance = YES
 *导航栏隐藏时：
 *状态栏黑白由 statusBarStyle 决定：
 *UIStatusBarStyleLightContent：状态栏显示 黑
 *UIStatusBarStyleLightContent：状态栏显示 白
 *导航栏显示时：
 *状态栏黑白由 navigation_barStyle 决定
 *UIBarStyleDefault：状态栏显示 黑
 *UIBarStyleBlack：状态栏显示 白
 *
 *eg. @(UIBarStyleBlack)
 */
@property (nonatomic,strong)NSNumber * clNavigationBarStyle;

//LOGO图片
/**LOGO图片*/
@property (nonatomic,strong)UIImage  * clLogoImage;
/**LOGO圆角 CGFloat eg.@(2.0)*/
@property (nonatomic,strong)NSNumber * clLogoCornerRadius;
/**LOGO显隐 BOOL eg.@(NO)*/
@property (nonatomic,strong)NSNumber * clLogoHiden;

/**LOGO布局：如果通过CLOrientationLayOut方式设置布局，以下属性不生效*/
/**LOGO高度*/
@property (nonatomic,strong)NSNumber * clLogoHeight DEPRECATED_MSG_ATTRIBUTE("will deprecated from 2.2.1,use CLOrientationLayOut instead");
/**LOGO宽度*/
@property (nonatomic,strong)NSNumber * clLogoWidth DEPRECATED_MSG_ATTRIBUTE("will deprecated from 2.2.1 ,use CLOrientationLayOut instead");
/**LOGO偏移量*/
@property (nonatomic,strong)NSNumber * clLogoOffsetY DEPRECATED_MSG_ATTRIBUTE("will deprecated from 2.2.1 ,use CLOrientationLayOut instead");
/**LOGO水平偏移量*/
@property (nonatomic,strong)NSNumber * clLogoOffsetX DEPRECATED_MSG_ATTRIBUTE("will deprecated from 2.2.1 ,use CLOrientationLayOut instead");

/**手机号显示控件*/
/**手机号颜色*/
@property (nonatomic,strong)UIColor  * clPhoneNumberColor;
/**手机号字体*/
@property (nonatomic,strong)UIFont   * clPhoneNumberFont;
/**手机号对齐方式 NSTextAlignment eg.@(NSTextAlignmentCenter)*/
@property (nonatomic,strong)NSNumber * clPhoneNumberTextAlignment;

/**手机号布局：如果通过CLOrientationLayOut方式设置布局，以下属性不生效*/
/**手机号Y偏移量*/
@property (nonatomic,strong)NSNumber * clPhoneNumberOffsetY DEPRECATED_MSG_ATTRIBUTE("will deprecated from 2.2.1,use CLOrientationLayOut instead");
/**手机号X偏移量*/
@property (nonatomic,strong)NSNumber * clPhoneNumberOffsetX DEPRECATED_MSG_ATTRIBUTE("will deprecated from 2.2.1,use CLOrientationLayOut instead");
/**手机号高度*/
@property (nonatomic,strong)NSNumber * clPhoneNumberHeight DEPRECATED_MSG_ATTRIBUTE("will deprecated from 2.2.1,use CLOrientationLayOut instead");
/**手机号宽度*/
@property (nonatomic,strong)NSNumber * clPhoneNumberWidth DEPRECATED_MSG_ATTRIBUTE("will deprecated from 2.2.1,use CLOrientationLayOut instead");


/*一键登录按钮 控件
 注： 一键登录授权按钮 不得隐藏
 **/
/**按钮文字*/
@property (nonatomic,copy)NSString   * clLoginBtnText;
/**按钮文字颜色*/
@property (nonatomic,strong)UIColor  * clLoginBtnTextColor;
/**按钮背景颜色*/
@property (nonatomic,strong)UIColor  * clLoginBtnBgColor;
/**按钮文字字体*/
@property (nonatomic,strong)UIFont   * clLoginBtnTextFont;
/**按钮背景图片*/
@property (nonatomic,strong)UIImage  * clLoginBtnNormalBgImage;
/**按钮边框颜色*/
@property (nonatomic,strong)UIColor  * clLoginBtnBorderColor;
/**按钮偏圆角 CGFloat eg.@(5)*/
@property (nonatomic,strong)NSNumber * clLoginBtnCornerRadius;
/**按钮偏边框 CGFloat eg.@(2.0)*/
@property (nonatomic,strong)NSNumber * clLoginBtnBorderWidth;

/**一键登录按钮布局：如果通过CLOrientationLayOut方式设置布局，以下属性不生效*/
/**按钮Y偏移量*/
@property (nonatomic,strong)NSNumber * clLoginBtnOffsetY DEPRECATED_MSG_ATTRIBUTE("will deprecated from 2.2.1,use CLOrientationLayOut instead");
/**按钮偏X移量*/
@property (nonatomic,strong)NSNumber * clLoginBtnOffsetX DEPRECATED_MSG_ATTRIBUTE("will deprecated from 2.2.1,use CLOrientationLayOut instead");
/**按钮width*/
@property (nonatomic,strong)NSNumber * clLoginBtnWidth DEPRECATED_MSG_ATTRIBUTE("will deprecated from 2.2.1,use CLOrientationLayOut instead");
/**按钮height*/
@property (nonatomic,strong)NSNumber * clLoginBtnHeight DEPRECATED_MSG_ATTRIBUTE("will deprecated from 2.2.1,use CLOrientationLayOut instead");

/*隐私条款Privacy
 注： 运营商隐私条款 不得隐藏
 用户条款不限制
 **/
/**隐私条款名称颜色：@[基础文字颜色UIColor*,条款颜色UIColor*] eg.@[[UIColor lightGrayColor],[UIColor greenColor]]*/
@property (nonatomic,strong) NSArray<UIColor*> *clAppPrivacyColor;
/**隐私条款文字字体*/
@property (nonatomic,strong)UIFont  * clAppPrivacyTextFont;
/**隐私条款--APP名称简写 默认取CFBundledisplayname*/
@property (nonatomic,copy) NSString  * clAppPrivacyAbbreviatedName;
/**隐私条款文字对齐方式 NSTextAlignment eg.@(NSTextAlignmentCenter)*/
@property (nonatomic,strong)NSNumber * clAppPrivacyTextAlignment;
/**运营商隐私条款书名号 默认NO 不显示 BOOL eg.@(YES)*/
@property (nonatomic,strong)NSNumber * clAppPrivacyPunctuationMarks;
/*
 *隐私条款Y一:需同时设置Name和UrlString eg.@[@"条款一名称",条款一URL]
 *@[NSSting,NSURL];
 */
@property (nonatomic,strong)NSArray * clAppPrivacyFirst;
/*
 *隐私条款二:需同时设置Name和UrlString eg.@[@"条款一名称",条款一URL]
 *@[NSSting,NSURL];
 */
@property (nonatomic,strong)NSArray * clAppPrivacySecond;
/**隐私协议WEB页面导航栏标题 NSAttributedString*/
@property (nonatomic,strong)NSAttributedString * clAppPrivacyWebAttributesTitle;
/**隐私协议WEB页面导航返回按钮图片*/
@property (nonatomic,strong)UIImage * clAppPrivacyWebBackBtnImage;
/**多行时行距 CGFloat eg.@(2.0)*/
@property (nonatomic,strong)NSNumber* clAppPrivacyLineSpacing;
/**是否需要sizeToFit,设置后与宽高约束的冲突请自行考虑 BOOL eg.@(YES)*/
@property (nonatomic,strong)NSNumber* clAppPrivacyNeedSizeToFit;

/**隐私条款布局：如果通过CLOrientationLayOut方式设置布局，以下属性不生效*/
/**隐私条款Y偏移量(注:此属性为条款顶部与屏幕底部的距离)*/
@property (nonatomic,strong)NSNumber* clAppPrivacyOffsetY DEPRECATED_MSG_ATTRIBUTE("will deprecated from 2.2.1,use CLOrientationLayOut instead");

/*SLOGAN
 注： 运营商品牌标签("中国**提供认证服务")，不得隐藏
 **/
/**slogan文字字体*/
@property (nonatomic,strong) UIFont   * clSloganTextFont;
/**slogan文字颜色*/
@property (nonatomic,strong) UIColor  * clSloganTextColor;
/**slogan文字对齐方式 NSTextAlignment eg.@(NSTextAlignmentCenter)*/
@property (nonatomic,strong) NSNumber * clSlogaTextAlignment;

/**slogan文字布局：如果通过CLOrientationLayOut方式设置布局，以下属性不生效*/
/**sloganX偏移量*/
@property (nonatomic,strong) NSNumber * clSloganOffsetX DEPRECATED_MSG_ATTRIBUTE("will deprecated from 2.2.1,use CLOrientationLayOut instead");
/**sloganY偏移量*/
@property (nonatomic,strong) NSNumber * clSloganOffsetY DEPRECATED_MSG_ATTRIBUTE("will deprecated from 2.2.1,use CLOrientationLayOut instead");
/**slogan width*/
@property (nonatomic,strong) NSNumber * clSloganWidth DEPRECATED_MSG_ATTRIBUTE("will deprecated from 2.2.1,use CLOrientationLayOut instead");
/**slogan height*/
@property (nonatomic,strong) NSNumber * clSloganHeight DEPRECATED_MSG_ATTRIBUTE("will deprecated from 2.2.1,use CLOrientationLayOut instead");


/*CheckBox
 *协议勾选框，默认选中且在协议前显示
 *可在sdk_oauth.bundle中替换checkBox_unSelected、checkBox_selected图片
 *也可以通过属性设置选中和未选择图片
 **/
/**协议勾选框（默认显示,放置在协议之前）BOOL eg.@(YES)*/
@property (nonatomic,strong) NSNumber *clCheckBoxHidden;
/**协议勾选框默认值（默认选中）BOOL eg.@(YES)*/
@property (nonatomic,strong) NSNumber *clCheckBoxValue;
/**协议勾选框 尺寸 NSValue->CGSize eg.[NSValue valueWithCGSize:CGSizeMake(25, 25)]*/
@property (nonatomic,strong) NSValue *clCheckBoxSize;
/**协议勾选框 UIButton.image图片缩进 UIEdgeInset eg.[NSValue valueWithUIEdgeInsets:UIEdgeInsetsMake(2, 2, 2, 2)]*/
@property (nonatomic,strong) NSValue *clCheckBoxImageEdgeInsets;
/**协议勾选框 设置CheckBox顶部与隐私协议控件顶部对齐 YES或大于0生效 eg.@(YES)*/
@property (nonatomic,strong) NSNumber *clCheckBoxVerticalAlignmentToAppPrivacyTop;
/**协议勾选框 设置CheckBox顶部与隐私协议控件竖向中心对齐 YES或大于0生效 eg.@(YES)*/
@property (nonatomic,strong) NSNumber *clCheckBoxVerticalAlignmentToAppPrivacyCenterY;
/**协议勾选框 非选中状态图片*/
@property (nonatomic,strong) UIImage  *clCheckBoxUncheckedImage;
/**协议勾选框 选中状态图片*/
@property (nonatomic,strong) UIImage  *clCheckBoxCheckedImage;

/*Loading*/
/**Loading 大小 CGSize eg.[NSValue valueWithCGSize:CGSizeMake(50, 50)]*/
@property (nonatomic,strong) NSValue *clLoadingSize;
/**Loading 圆角 float eg.@(5) */
@property (nonatomic,strong) NSNumber *clLoadingCornerRadius;
/**Loading 背景色 UIColor eg.[UIColor colorWithRed:0.8 green:0.5 blue:0.8 alpha:0.8]; */
@property (nonatomic,strong) UIColor *clLoadingBackgroundColor;
/**UIActivityIndicatorViewStyle eg.@(UIActivityIndicatorViewStyleWhiteLarge)*/
@property (nonatomic,strong) NSNumber *clLoadingIndicatorStyle;
/**Loading Indicator渲染色 UIColor eg.[UIColor greenColor]; */
@property (nonatomic,strong) UIColor *clLoadingTintColor;
/**授权页自定义Loading
 - containerView为loading的全屏蒙版view
 - 请自行在containerView添加自定义loading
 - 设置block后，上述loading属性将无效
 */
@property (nonatomic,copy)void(^loadingView)(UIView * containerView);

//添加自定义控件
/**可设置背景色及添加控件*/
@property (nonatomic,copy)void(^customAreaView)(UIView * customAreaView);



/**clAuthWindowModalTransitionStyle系统自带的弹出方式 仅支持以下三种
 UIModalTransitionStyleCoverVertical 底部弹出
 UIModalTransitionStyleCrossDissolve 淡入
 UIModalTransitionStyleFlipHorizontal 翻转显示
 */
@property (nonatomic,strong) NSNumber * clAuthWindowModalTransitionStyle;

/* UIModalPresentationStyle
 * 若使用窗口模式，请设置为UIModalPresentationOverFullScreen 或不设置
 * iOS13强制全屏，请设置为UIModalPresentationFullScreen
 * UIModalPresentationAutomatic API_AVAILABLE(ios(13.0)) = -2
 * eg. @(UIModalPresentationOverFullScreen)
 */
@property (nonatomic,strong) NSNumber * clAuthWindowModalPresentationStyle;

//竖屏布局配置对象 -->创建一个布局对象，设置好控件约束属性值，再设置到此属性中
/**竖屏：UIInterfaceOrientationPortrait|UIInterfaceOrientationPortraitUpsideDown
 *由于运营商限制不同，外部自动旋转条件满足时，电信联通页面自动旋转，均使用此约束；移动强制竖屏
 *eg.   CLUIConfigure * baseUIConfigure = [CLUIConfigure new];
 *      CLOrientationLayOut * clOrientationLayOutPortrait = [CLOrientationLayOut new];
 *      clOrientationLayOutPortrait.clLayoutPhoneCenterY = @(0);
 *      clOrientationLayOutPortrait.clLayoutPhoneLeft = @(50*screenScale);
 *      ...
 *      baseUIConfigure.clOrientationLayOutPortrait = clOrientationLayOutPortrait;
 */
@property (nonatomic,strong) CLOrientationLayOut * clOrientationLayOutPortrait;


/**默认界面配置*/
+ (CLUIConfigure *)clDefaultUIConfigure;
@end

/**横竖屏布局配置对象
 配置页面布局相关属性
 */
@interface CLOrientationLayOut : NSObject
/**LOGO图片*/
// 约束均相对vc.view
@property (nonatomic,strong)NSNumber * clLayoutLogoLeft;
@property (nonatomic,strong)NSNumber * clLayoutLogoTop;
@property (nonatomic,strong)NSNumber * clLayoutLogoRight;
@property (nonatomic,strong)NSNumber * clLayoutLogoBottom;
@property (nonatomic,strong)NSNumber * clLayoutLogoWidth;
@property (nonatomic,strong)NSNumber * clLayoutLogoHeight;
@property (nonatomic,strong)NSNumber * clLayoutLogoCenterX;
@property (nonatomic,strong)NSNumber * clLayoutLogoCenterY;

/**手机号显示控件*/
//layout 约束均相对vc.view
@property (nonatomic,strong)NSNumber * clLayoutPhoneLeft;
@property (nonatomic,strong)NSNumber * clLayoutPhoneTop;
@property (nonatomic,strong)NSNumber * clLayoutPhoneRight;
@property (nonatomic,strong)NSNumber * clLayoutPhoneBottom;
@property (nonatomic,strong)NSNumber * clLayoutPhoneWidth;
@property (nonatomic,strong)NSNumber * clLayoutPhoneHeight;
@property (nonatomic,strong)NSNumber * clLayoutPhoneCenterX;
@property (nonatomic,strong)NSNumber * clLayoutPhoneCenterY;

/*一键登录按钮 控件
 注： 一键登录授权按钮 不得隐藏
 **/
//layout 约束均相对vc.view
@property (nonatomic,strong)NSNumber * clLayoutLoginBtnLeft;
@property (nonatomic,strong)NSNumber * clLayoutLoginBtnTop;
@property (nonatomic,strong)NSNumber * clLayoutLoginBtnRight;
@property (nonatomic,strong)NSNumber * clLayoutLoginBtnBottom;
@property (nonatomic,strong)NSNumber * clLayoutLoginBtnWidth;
@property (nonatomic,strong)NSNumber * clLayoutLoginBtnHeight;
@property (nonatomic,strong)NSNumber * clLayoutLoginBtnCenterX;
@property (nonatomic,strong)NSNumber * clLayoutLoginBtnCenterY;

/*隐私条款Privacy
 注： 运营商隐私条款 不得隐藏， 用户条款不限制
 **/
//layout 约束均相对vc.view
@property (nonatomic,strong)NSNumber * clLayoutAppPrivacyLeft;
@property (nonatomic,strong)NSNumber * clLayoutAppPrivacyTop;
@property (nonatomic,strong)NSNumber * clLayoutAppPrivacyRight;
@property (nonatomic,strong)NSNumber * clLayoutAppPrivacyBottom;
@property (nonatomic,strong)NSNumber * clLayoutAppPrivacyWidth;
@property (nonatomic,strong)NSNumber * clLayoutAppPrivacyHeight;
@property (nonatomic,strong)NSNumber * clLayoutAppPrivacyCenterX;
@property (nonatomic,strong)NSNumber * clLayoutAppPrivacyCenterY;

/*Slogan 运营商品牌标签："认证服务由中国移动/联通/电信提供" label
 注： 运营商品牌标签，不得隐藏
 **/
//layout 约束均相对vc.view
@property (nonatomic,strong)NSNumber * clLayoutSloganLeft;
@property (nonatomic,strong)NSNumber * clLayoutSloganTop;
@property (nonatomic,strong)NSNumber * clLayoutSloganRight;
@property (nonatomic,strong)NSNumber * clLayoutSloganBottom;
@property (nonatomic,strong)NSNumber * clLayoutSloganWidth;
@property (nonatomic,strong)NSNumber * clLayoutSloganHeight;
@property (nonatomic,strong)NSNumber * clLayoutSloganCenterX;
@property (nonatomic,strong)NSNumber * clLayoutSloganCenterY;


///**窗口模式*/
///**窗口中心：CGPoint X Y*/
//@property (nonatomic,strong) NSValue * clAuthWindowOrientationCenter;
///**窗口frame.origin：CGPoint X Y*/
//@property (nonatomic,strong) NSValue * clAuthWindowOrientationOrigin;
///**窗口大小：宽 float */
//@property (nonatomic,strong) NSNumber * clAuthWindowOrientationWidth;
///**窗口大小：高 float */
//@property (nonatomic,strong) NSNumber * clAuthWindowOrientationHeight;

/**默认布局配置*/
+ (CLOrientationLayOut *)clDefaultOrientationLayOut;

@end

NS_ASSUME_NONNULL_END
