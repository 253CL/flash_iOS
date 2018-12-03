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

//电信配置
@interface CLCTCCUIConfigure : NSObject

//viewController/navigationController至少传一个
//要拉起授权页的导航,（如果为空则使用viewController present方式弹出授权页）
@property (nonatomic,weak)UINavigationController * navigationController;
//要拉起授权页的vc,（如果为空则使用navigationController push方式弹出授权页）
@property (nonatomic,weak)UIViewController * viewController;

/*----------------------------------------授权页面(以下参数可选)-----------------------------------*/

@property (nonatomic,strong)UIColor * bkColor;//页面背景色
@property (nonatomic,copy)NSString * ctcctitle;//导航栏标题
@property (nonatomic,strong)UIColor * NavTitleColor;//导航栏标题颜色
@property (nonatomic,assign)CGFloat NavTitleFont;//导航栏标题文字大小
@property (nonatomic,copy)NSString *  NavtitleType;//导航栏标题字体
@property (nonatomic,strong)UIColor *  NavBKColor;//导航栏背景颜色

@property (nonatomic,assign)CGFloat logoImageWidth;//logo的宽
@property (nonatomic,assign)CGFloat logoImageHeigh;//logo的高
@property (nonatomic,assign)CGFloat logoImageOffsetX;//logo的左右偏移量
@property (nonatomic,assign)CGFloat logoImageOffsetY;//logo的上下偏移量
@property (nonatomic,assign)BOOL logoHiden;//logo的显隐
@property (nonatomic,assign)CGFloat leftImageOffsetX;//logo声明的左右偏移量
@property (nonatomic,assign)CGFloat leftImageOffsetY;//logo声明的上下偏移量
@property (nonatomic,assign)CGFloat declaractionOffsetX;//文字声明的左右偏移量
@property (nonatomic,assign)CGFloat declaractionOffsetY;//文字声明的上下偏移量
@property (nonatomic,assign)CGFloat phoneViewWidth;//文本框的宽
@property (nonatomic,assign)CGFloat phoneViewHeigh;//文本框的高
@property (nonatomic,assign)CGFloat phoneViewOffsetX;//文本框的左右偏移量
@property (nonatomic,assign)CGFloat phoneViewOffsetY;//文本框的上下偏移量
@property (nonatomic,strong)UIColor * phoneViewBK;//文本框的背景颜色
@property (nonatomic,copy)NSString * phoneNum;//显示特定手机号
@property (nonatomic,strong)UIColor * phoneNumColor;//手机号颜色
@property (nonatomic,assign)CGFloat phoneNumFont;//手机号字体大小
@property (nonatomic,assign)BOOL changeNumBtnHiden;//其他号码的显隐
@property (nonatomic,strong)UIColor * changeNumBtnColor;//其他号码字体颜色
@property (nonatomic,assign)CGFloat changeNumFont;//其他号码字体大小
@property (nonatomic,assign)CGFloat loginBtnWidth;//免密登录按钮的宽

@property (nonatomic,assign)CGFloat loginBtnHeigh;//免密登录按钮的高
@property (nonatomic,assign)CGFloat loginBtnOffsetX;//免密登录按钮的左右偏移量
@property (nonatomic,assign)CGFloat loginBtnOffsetY;//免密登录按钮的上下偏移量
@property (nonatomic,strong)UIColor * loginBtnColor;//免密登录按钮字体颜色
@property (nonatomic,strong)UIColor * loginBtnBKColor;//免密登录按钮背景颜色

/**
 * The array of CGColorRef objects defining the color of each gradient
 * stop. Defaults to nil. Animatable.
 *eg. colors = @[(id)[UIColor redColor].CGColor, (id)[UIColor whiteColor].CGColor, (id)[UIColor blueColor].CGColor];
 */
@property (nonatomic,strong)NSArray * loginBtnBgColors;//一键登录按钮渐变色

@property (nonatomic,assign)CGFloat loginBtnFont;//免密登录按钮字体大小
@property (nonatomic,assign)CGFloat otherLoginWayBtnOffsetX;//其他方式登录按钮左右偏移量
@property (nonatomic,assign)CGFloat otherLoginWayBtnOffsetY;//其他方式登录按钮上下偏移量
@property (nonatomic,strong)UIColor * otherLoginWayBtnTextColor;//其他方式登录按钮文字颜色
@property (nonatomic,strong)UIColor * otherLoginWayBtnBgColor;//其他方式登录按钮背景颜色
@property (nonatomic,assign)BOOL otherLoginWayBtnHidden;//其他方式登录按钮是否隐藏
@property (nonatomic,assign)CGFloat protocolOffsetX;//底部协议的左右偏移量
@property (nonatomic,assign)CGFloat protocolOffsetY;//底部协议的上下偏移量

@end



//移动配置
@interface CLCMCCUIConfigure : NSObject

//调一键登录的vc,必传
@property (nonatomic,weak)UIViewController * viewController;

/*----------------------------------------授权页面(以下参数可选)-----------------------------------*/

//MARK:导航栏*************

/**导航栏颜色*/
@property (nonatomic,strong) UIColor *navColor;
/**状态栏着色样式*/
@property (nonatomic,assign) UIBarStyle barStyle;
/**导航栏标题*/
@property (nonatomic,strong) NSAttributedString *navText;
/**导航返回图标*/
@property (nonatomic,strong) UIImage *navReturnImg;
/**导航栏右侧自定义控件*/
@property (nonatomic,strong) UIBarButtonItem *navControl;

//MARK:图片设置************

/**LOGO图片*/
@property (nonatomic,strong) UIImage *logoImg;
/**LOGO图片宽度*/
@property (nonatomic,assign) CGFloat logoWidth;
/**LOGO图片高度*/
@property (nonatomic,assign) CGFloat logoHeight;
/**LOGO图片偏移量*/
@property (nonatomic,assign) CGFloat logoOffsetY;
/**LOGO图片隐藏*/
@property (nonatomic,assign) BOOL logoHidden;

//MARK:登录按钮************

/**登录按钮文本*/
@property (nonatomic,strong) NSString *logBtnText;
/**登录按钮Y偏移量*/
@property (nonatomic,assign) CGFloat logBtnOffsetY;
/**登录按钮文本颜色*/
@property (nonatomic,strong) UIColor *logBtnTextColor;
/**登录按钮背景颜色*/
@property (nonatomic,strong) UIColor *logBtnColor;

//MARK:号码框设置************

/**显示旧版号码栏样式*/
@property (nonatomic,assign) BOOL oldStyle;
/**手机号码字体颜色*/
@property (nonatomic,strong) UIColor *numberColor;
/**隐藏切换账号按钮*/
@property (nonatomic,assign) BOOL swithAccHidden;
/**切换账号字体颜色*/
@property (nonatomic,strong) UIColor *swithAccTextColor;
/**号码栏Y偏移量*/
@property (nonatomic,assign) CGFloat numFieldOffsetY;

//MARK:隐私条款************

/**复选框未选中时图片*/
@property (nonatomic,strong) UIImage *uncheckedImg;
/**复选框选中时图片*/
@property (nonatomic,strong) UIImage *checkedImg;
/**隐私条款名称（含书名号）*/
@property (nonatomic,strong) NSString *appPrivacy;
/**隐私条款名称颜色（含书名号）*/
@property (nonatomic,strong) UIColor *appPrivacyColor;
/**隐私栏文字颜色（不包含条款）*/
@property (nonatomic,strong) UIColor *privacyTextColor;
/**隐私条款链接*/
@property (nonatomic,strong) NSString *appPrivacyURL;
/**隐私条款Y偏移量*/
@property (nonatomic,assign) CGFloat privacyOffsetY;

//MARK:底部标识Title************

/**slogan偏移量Y*/
@property (nonatomic,assign) CGFloat sloganOffsetY;
/**slogan文字颜色*/
@property (nonatomic,strong) UIColor *sloganTextColor;

///*----------------------------------------短信页面-----------------------------------*/
///**短验页面导航栏标题*/
//@property (nonatomic,strong) NSAttributedString *SMSNavText;
///**登录按钮文本内容*/
//@property (nonatomic,strong) NSString *SMSLogBtnText;
///**登录按钮文本颜色*/
//@property (nonatomic,strong) UIColor *SMSLogBtnTextColor;
///**登录按钮颜色*/
//@property (nonatomic,strong) UIColor *SMSLogBtnColor;

@property (nonatomic,copy)void (^cmccCustomAreaView)(UIView *customAreaView);

@end


//联通配置
@interface CLCUCCUIConfigure : NSObject

//调一键登录的vc,必传
@property (nonatomic,weak)UIViewController * viewController;
//登录成功后的跳转页,可选
@property (nonatomic,strong)UIViewController * loginSuccessPage;


/*----------------------------------------授权页面(以下参数可选)-----------------------------------*/
@property (nonatomic,strong)UIImage * UAPageNavLeftLogo;//设置导航栏返回图标
@property (nonatomic,strong)UIColor * UAPageNavBackgroundColor;//设置导航栏背景色
@property (nonatomic,copy)NSString * UAPageNavTitle;//设置导航栏标题文字内容
@property (nonatomic,strong)NSNumber * UAPageNavHelpHidden;//设置帮助按钮显示或隐藏，YES隐藏，NO显示
@property (nonatomic,strong)NSNumber * UAPageNavLineHidden;//设置导航栏头部横线显示或隐藏，YES隐藏，NO显示
@property (nonatomic,strong)UIImage *  UAPageContentLogo;//设置logo图片，默认为联通logo
@property (nonatomic,strong)UIColor * UAPageContentLoginButtonBGColor;//设置登录按钮的底色
@property (nonatomic,strong)UIImage * UAPageContentLoginButtonBGImage;//设置登录按钮背景图（如果同时设置按钮底色，底色将覆盖背景图）
@property (nonatomic,strong)NSNumber * UAPageContentLoginButtonCornerRadius;//设置登录按钮圆角（根据按钮高度调整圆角）
@property (nonatomic,strong)UIFont * UAPageContentLoginButtonTitleFont;//设置登录按钮字体和大小
@property (nonatomic,strong)UIColor * UAPageContentLoginButtonTitleColor;//设置登录按钮字体颜色
@property (nonatomic,copy)NSString * UAPageContentLoginButtonTitle;//设置登录按钮文字
@property (nonatomic,strong)NSNumber * UAPageLoadingBackgroundWidth;//设置Loading背景宽度
@property (nonatomic,strong)NSNumber * UAPageLoadingBackgroundHeight;//设置Loading背景高度
@property (nonatomic,strong)UIColor * UAPageLoadingBackgroundColor;//设置Loading背景颜色
@property (nonatomic,strong)NSNumber * UAPageLoadingBackgroundRadius;//设置Loading背景圆角
@property (nonatomic,copy)NSString * UAPageLoadingTitle;//设置Loading提示文字内容
@property (nonatomic,strong)UIColor * UAPageLoadingTitleColor;//设置Loading提示文字颜色
@property (nonatomic,strong)UIFont * UAPageLoadingTitleFont;//设置Loading提示文字大小
@property (nonatomic,strong)NSNumber * UAPageLoadingTitleHeight;//设置Loading提示文字高度
@property (nonatomic,strong)NSMutableArray * UAPageLoadingResArray;//设置Loading动画帧图片数组（必须为UIImage对象
@property (nonatomic,strong)NSNumber * UAPageLoadingResDuration;//设置Loading动画一次完整效果的持续时间
@property (nonatomic,strong)NSNumber * UAPageLoadingResWidth;//设置Loading动画宽度
@property (nonatomic,strong)NSNumber * UAPageLoadingResHeight;//设置Loading动画高度

@property (nonatomic,copy)void (^cuccCustomAreaView)(UIView *customAreaView);

@end

NS_ASSUME_NONNULL_END
