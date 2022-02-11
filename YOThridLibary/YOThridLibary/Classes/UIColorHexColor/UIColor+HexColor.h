//
//  UIColor+HEXCOLOR.h
//  TransparentPublicWelfare
//
//  Created by HOragne
//  
//

#import <UIKit/UIKit.h>
 
@interface UIColor (HEXCOLOR)
///16进制转颜色
+ (UIColor *)colorWithHEXCOLOR:(NSString *)HEXCOLOR;
///16进制转颜色 带透明度
+ (UIColor *)colorWithHEXCOLOR:(NSString *)HEXCOLOR alpha:(float)alpha;
@end
