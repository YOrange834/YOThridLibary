//
//  Const.h
//  YOThridLibary
//
//  Created by HOrange on 2022/2/11.
//

/*原则
    能不用宏的尽量不要用宏，大量使用宏导致编译时间加长。
    其他字符串可以写成静态常量
 命名规则：
    所有字母大写，用_链接
 */
#import "UIColor+HexColor.h"

///适配
//获取屏幕的高度
#define SCREEN_HEIGHT       [[UIScreen mainScreen] bounds].size.height
//获取屏幕的宽度
#define SCREEN_WIDTH        [[UIScreen mainScreen] bounds].size.width

//iPhoneX / iPhoneXS
#define  ISIPHONEX_XS     (SCREEN_WIDTH == 375.f && SCREEN_HEIGHT == 812.f ? YES : NO)

//iPhoneXR / iPhoneXSMax
#define  ISIPHONEXR_XSMax    (SCREEN_WIDTH == 414.f && SCREEN_HEIGHT == 896.f ? YES : NO)

//异性全面屏
#define   ISFULLSCREEN    (ISIPHONEX_XS || ISIPHONEXR_XSMax)


/**
 
 但是从ios14开始有刘海屏的iPhone状态栏高度不一定是44了。如：
 iPhoneXR,iPhone11 状态栏高度为48，
 iPhone X，iPhone 11 Pro，iPhone 11 Pro Max，iPhone 12 mini，状态栏高度44，
 iPhone 12，iPhone 12 Pro，iPhone 12 Pro Max，状态栏高度为47.

 iPhone 13 mini状态栏高度为50，

 iPhone 13，iPhone 13 Pro，iPhone 13 Pro Max，状态栏高度为47.
 
 */

/// 状态栏高度
#define STATUS_HEIGHT \
({CGFloat statusBarHeight = 0.0;\
if (@available(iOS 13.0, *)) {\
statusBarHeight = [UIApplication sharedApplication].windows.firstObject.windowScene.statusBarManager.statusBarFrame.size.height;\
} else { \
statusBarHeight = [UIApplication sharedApplication].statusBarFrame.size.height;\
}\
(statusBarHeight);\
})


/// 导航栏高度
#define  NAV_HEIGHT  44.f

/// 头部的高度，状态栏 + 导航栏
#define HEAD_HEIGHT (STATUS_HEIGHT + NAV_HEIGHT)

/// tabbar 高度
#define  TABBAR_HEIGHT        (ISFULLSCREEN ? (49.f+34.f) : 49.f)


///判断是否是iPhone X 类型的屏幕
#define IPHONE_X_TYPE       (((int)((SCREEN_HEIGHT/SCREEN_WIDTH)*100) == 216)?YES:NO)

#define IPHONE_X_TYPE_Horizontal       (((int)((SCREEN_WIDTH/SCREEN_HEIGHT)*100) == 216)?YES:NO)


///底部距离安全区的距离
#define SAFE_BOTTIM_HEIGHT  ((IPHONE_X_TYPE) ? 34 : 0)


#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_IPAD [UIDevice currentDevice].userInterfaceIdiom == UIUserInterfaceIdiomPad


#define KSCREEN_SIZE_ADAPT(x) ((x)/375.0f*[UIScreen mainScreen].bounds.size.width)

///颜色
#define HEXCOLOR(hexString) [UIColor colorWithHEXCOLOR:hexString]
#define hexColor(hexString) [UIColor colorWithHEXCOLOR:hexString]

//随机色
#define  XYRANDOM_COLOR [UIColor colorWithRed:(arc4random_uniform(256))/255.0 green:(arc4random_uniform(256))/255.0 blue:(arc4random_uniform(256))/255.0 alpha:1]

///版本号
#define Verson [NSBundle mainBundle].infoDictionary[@"CFBundleShortVersionString"]


///系统keyWindow
#define KKEYWINDOW [UIApplication sharedApplication].keyWindow
