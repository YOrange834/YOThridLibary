//
//  UIColor+HEXCOLOR.m
//  TransparentPublicWelfare
//
//  Created by HOragne
//  
//

#import "UIColor+HexColor.h"
 
@implementation UIColor (HEXCOLOR)

+ (UIColor *)colorWithHEXCOLOR:(NSString *)HEXCOLOR{
    //去除空格，回车，换行符
    NSString *cString = [[HEXCOLOR stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]] uppercaseString];
    
    //去除@“＃”
    if ([cString hasPrefix:@"#"]) cString = [cString substringFromIndex:1];
    
    //校验是否是16进制数据
    if ([cString length] != 6) return [UIColor blackColor];
    
    NSRange range;
    range.location = 0;
    range.length = 2;
    NSString *rString = [cString substringWithRange:range];
    range.location = 2;
    NSString *gString = [cString substringWithRange:range];
    range.location = 4;
    NSString *bString = [cString substringWithRange:range];
    
    //获取RGB
    unsigned int r, g, b;
    [[NSScanner scannerWithString:rString] scanHexInt:&r];
    [[NSScanner scannerWithString:gString] scanHexInt:&g];
    [[NSScanner scannerWithString:bString] scanHexInt:&b];
    
    return [UIColor colorWithRed:((float) r / 255.0f)
                           green:((float) g / 255.0f)
                            blue:((float) b / 255.0f)
                           alpha:1.0f];
}

+ (UIColor *)colorWithHEXCOLOR:(NSString *)HEXCOLOR alpha:(float)alpha{
    //去除空格，回车，换行符
    NSString *cString = [[HEXCOLOR stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]] uppercaseString];
    
    //去除@“＃”
    if ([cString hasPrefix:@"#"]) cString = [cString substringFromIndex:1];
    
    //校验是否是16进制数据
    if ([cString length] != 6) return [UIColor blackColor];
    
    NSRange range;
    range.location = 0;
    range.length = 2;
    NSString *rString = [cString substringWithRange:range];
    range.location = 2;
    NSString *gString = [cString substringWithRange:range];
    range.location = 4;
    NSString *bString = [cString substringWithRange:range];
    
    //获取RGB
    unsigned int r, g, b;
    [[NSScanner scannerWithString:rString] scanHexInt:&r];
    [[NSScanner scannerWithString:gString] scanHexInt:&g];
    [[NSScanner scannerWithString:bString] scanHexInt:&b];
    
    return [UIColor colorWithRed:((float) r / 255.0f)
                           green:((float) g / 255.0f)
                            blue:((float) b / 255.0f)
                           alpha:alpha];
}

@end
