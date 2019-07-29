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
/**导航栏 背景透明 BOOL eg.@(YES)*/
@property (nonatomic,strong)NSNumber * clNavigationBackgroundClear;
/**导航栏标题*/
@property (nonatomic,strong)NSAttributedString * clNavigationAttributesTitleText;

/**导航栏右侧自定义按钮*/
@property (nonatomic,strong)UIBarButtonItem * clNavigationRightControl;
/**导航栏左侧自定义按钮*/
@property (nonatomic,strong)UIBarButtonItem * clNavigationLeftControl;

// 返回按钮
/**导航栏左侧返回按钮图片*/
@property (nonatomic,strong)UIImage   * clNavigationBackBtnImage;
/**导航栏自带返回按钮隐藏，默认显示 BOOL eg.@(YES)*/
@property (nonatomic,strong)NSNumber  * clNavigationBackBtnHidden;
/**************新增******************/
/**返回按钮图片缩进 btn.imageInsets = UIEdgeInsetsMake(0, 0, 20, 20)*/
@property (nonatomic,strong)NSValue * clNavBackBtnImageInsets;
/**自带返回(关闭)按钮位置 默认NO 居左,设置为YES居右显示*/
@property (nonatomic,strong)NSNumber * clNavBackBtnAlimentRight;

/*translucent 此属性已失效*/
//@property (nonatomic,strong)NSNumber * cl_navigation_translucent;

/**导航栏分割线 是否隐藏
 * set backgroundImage=UIImage.new && shadowImage=UIImage.new
 * BOOL, default is NO
 * eg.@(YES)
 */
@property (nonatomic,strong)NSNumber * clNavigationBottomLineHidden;
/**导航栏 文字颜色*/
@property (nonatomic,strong)UIColor  * clNavigationTintColor;
/**导航栏 背景色 default is white*/
@property (nonatomic,strong)UIColor  * clNavigationBarTintColor;
/**导航栏 背景图片*/
@property (nonatomic,strong)UIImage  * clNavigationBackgroundImage;
/**导航栏 配合背景图片设置，用来控制在不同状态下导航栏的显示(横竖屏是否显示) UIBarMetrics eg.@(UIBarMetricsCompact)*/
@property (nonatomic,strong)NSNumber * clNavigationBarMetrics;
/**导航栏 导航栏底部分割线（图片）*/
@property (nonatomic,strong)UIImage  * clNavigationShadowImage;

/**状态栏隐藏 此属性已失效*/
//@property (nonatomic,strong)NSNumber * cl_statusBar_hidden;
/**状态栏样式 此属性已失效*/
//@property (nonatomic,strong)NSNumber * cl_statusBar_Style;

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

/**手机号显示控件*/
/**手机号颜色*/
@property (nonatomic,strong)UIColor  * clPhoneNumberColor;
/**手机号字体*/
@property (nonatomic,strong)UIFont   * clPhoneNumberFont;
/**手机号对齐方式 NSTextAlignment eg.@(NSTextAlignmentCenter)*/
@property (nonatomic,strong)NSNumber * clPhoneNumberTextAlignment;

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
/**按钮背景高亮图片*/
@property (nonatomic,strong)UIImage  * clLoginBtnHightLightBgImage;
/**按钮边框颜色*/
@property (nonatomic,strong)UIColor  * clLoginBtnBorderColor;
/**按钮圆角 CGFloat eg.@(5)*/
@property (nonatomic,strong)NSNumber * clLoginBtnCornerRadius;
/**按钮边框 CGFloat eg.@(2.0)*/
@property (nonatomic,strong)NSNumber * clLoginBtnBorderWidth;

/*隐私条款Privacy
 注： 运营商隐私条款 不得隐藏
 用户条款不限制
 **/
/**隐私条款名称颜色：@[基础文字颜色UIColor*,条款颜色UIColor*] eg.@[[UIColor lightGrayColor],[UIColor greenColor]]*/
@property (nonatomic,strong) NSArray<UIColor*> *clAppPrivacyColor;
/**隐私条款文字字体*/
@property (nonatomic,strong)UIFont  * clAppPrivacyTextFont;
/**隐私条款文字对齐方式 NSTextAlignment eg.@(NSTextAlignmentCenter)*/
@property (nonatomic,strong)NSNumber * clAppPrivacyTextAlignment;
/**运营商隐私条款书名号 默认NO 不显示 BOOL eg.@(YES)*/
@property (nonatomic,strong)NSNumber * clAppPrivacyPunctuationMarks;
/**多行时行距 CGFloat eg.@(2.0)*/
@property (nonatomic,strong)NSNumber* clAppPrivacyLineSpacing;
/**是否需要sizeToFit,设置后与宽高约束的冲突请自行考虑 BOOL eg.@(YES)*/
@property (nonatomic,strong)NSNumber* clAppPrivacyNeedSizeToFit;
/**隐私条款--APP名称简写 默认取CFBundledisplayname 设置描述文本四后此属性无效*/
@property (nonatomic,copy) NSString  * clAppPrivacyAbbreviatedName;
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
/*
 隐私协议文本拼接: DesTextFirst+运营商条款+DesTextSecond+隐私条款一+DesTextThird+隐私条款二+DesTextFourth
 **/
/**描述文本一 default:"同意"*/
@property (nonatomic,copy)NSString *clAppPrivacyNormalDesTextFirst;
/**描述文本二 default:"和"*/
@property (nonatomic,copy)NSString *clAppPrivacyNormalDesTextSecond;
/**描述文本三 default:"、"*/
@property (nonatomic,copy)NSString *clAppPrivacyNormalDesTextThird;
/**描述文本四 default: "并授权AppName使用认证服务"*/
@property (nonatomic,copy)NSString *clAppPrivacyNormalDesTextFourth;

/**用户隐私协议WEB页面导航栏标题 默认显示用户条款名称*/
@property (nonatomic,strong)NSAttributedString * clAppPrivacyWebAttributesTitle;
/**运营商隐私协议WEB页面导航栏标题 默认显示运营商条款名称*/
@property (nonatomic,strong)NSAttributedString * clAppPrivacyWebNormalAttributesTitle;
/**隐私协议WEB页面导航返回按钮图片*/
@property (nonatomic,strong)UIImage * clAppPrivacyWebBackBtnImage;


/*SLOGAN
 注： 运营商品牌标签("中国**提供认证服务")，不得隐藏
 **/
/**slogan文字字体*/
@property (nonatomic,strong) UIFont   * clSloganTextFont;
/**slogan文字颜色*/
@property (nonatomic,strong) UIColor  * clSloganTextColor;
/**slogan文字对齐方式 NSTextAlignment eg.@(NSTextAlignmentCenter)*/
@property (nonatomic,strong) NSNumber * clSlogaTextAlignment;


/*CheckBox
 *协议勾选框，默认选中且在协议前显示
 *可在sdk_oauth.bundle中替换checkBox_unSelected、checkBox_selected图片
 *也可以通过属性设置选中和未选择图片
 **/
/**协议勾选框（默认显示,放置在协议之前）BOOL eg.@(YES)*/
@property (nonatomic,strong) NSNumber *clCheckBoxHidden;
/**协议勾选框默认值（默认不选中）BOOL eg.@(YES)*/
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

/**横竖屏*/
/*是否支持自动旋转 BOOL*/
@property (nonatomic,strong) NSNumber * shouldAutorotate;
/*支持方向 UIInterfaceOrientationMask
 - 如果设置只支持竖屏，只需设置clOrientationLayOutPortrait竖屏布局对象
 - 如果设置只支持横屏，只需设置clOrientationLayOutLandscape横屏布局对象
 - 横竖屏均支持，需同时设置clOrientationLayOutPortrait和clOrientationLayOutLandscape
 */
@property (nonatomic,strong) NSNumber * supportedInterfaceOrientations;
/*默认方向 UIInterfaceOrientation*/
@property (nonatomic,strong) NSNumber * preferredInterfaceOrientationForPresentation;

/**以窗口方式显示授权页
 */
/**以窗口方式显示 BOOL, default is NO */
@property (nonatomic,strong) NSNumber * clAuthTypeUseWindow;
/**窗口圆角 float*/
@property (nonatomic,strong) NSNumber * clAuthWindowCornerRadius;

/**clAuthWindowModalTransitionStyle系统自带的弹出方式 仅支持以下三种
 UIModalTransitionStyleCoverVertical 底部弹出
 UIModalTransitionStyleCrossDissolve 淡入
 UIModalTransitionStyleFlipHorizontal 翻转显示
 */
@property (nonatomic,strong) NSNumber * clAuthWindowModalTransitionStyle;

/**弹窗的MaskLayer，用于自定义窗口形状*/
@property (nonatomic,strong) CALayer * clAuthWindowMaskLayer;


//竖屏布局配置对象 -->创建一个布局对象，设置好控件约束属性值，再设置到此属性中
/**竖屏：UIInterfaceOrientationPortrait|UIInterfaceOrientationPortraitUpsideDown
 *eg.   CLUIConfigure * baseUIConfigure = [CLUIConfigure new];
 *      CLOrientationLayOut * clOrientationLayOutPortrait = [CLOrientationLayOut new];
 *      clOrientationLayOutPortrait.clLayoutPhoneCenterY = @(0);
 *      clOrientationLayOutPortrait.clLayoutPhoneLeft = @(50*screenScale);
 *      ...
 *      baseUIConfigure.clOrientationLayOutPortrait = clOrientationLayOutPortrait;
 */
@property (nonatomic,strong) CLOrientationLayOut * clOrientationLayOutPortrait;

//横屏布局配置对象 -->创建一个布局对象，设置好控件约束属性值，再设置到此属性中
/**横屏：UIInterfaceOrientationLandscapeLeft|UIInterfaceOrientationLandscapeRight
 *eg.   CLUIConfigure * baseUIConfigure = [CLUIConfigure new];
 *      CLOrientationLayOut * clOrientationLayOutLandscape = [CLOrientationLayOut new];
 *      clOrientationLayOutLandscape.clLayoutPhoneCenterY = @(0);
 *      clOrientationLayOutLandscape.clLayoutPhoneLeft = @(50*screenScale);
 *      ...
 *      baseUIConfigure.clOrientationLayOutLandscape = clOrientationLayOutLandscape;
 */
@property (nonatomic,strong) CLOrientationLayOut * clOrientationLayOutLandscape;


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

/**窗口模式*/
/**窗口中心：CGPoint X Y*/
@property (nonatomic,strong) NSValue * clAuthWindowOrientationCenter;
/**窗口左上角：frame.origin：CGPoint X Y*/
@property (nonatomic,strong) NSValue * clAuthWindowOrientationOrigin;
/**窗口大小：宽 float */
@property (nonatomic,strong) NSNumber * clAuthWindowOrientationWidth;
/**窗口大小：高 float */
@property (nonatomic,strong) NSNumber * clAuthWindowOrientationHeight;

/**默认布局配置*/
+ (CLOrientationLayOut *)clDefaultOrientationLayOut;

@end

NS_ASSUME_NONNULL_END
