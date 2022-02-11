//
//  UIView+Common.h
//  Coding_iOS
//
//  Created by HOragne
//
//
#pragma mark 阴影 xib用 代码需导入头文件

#import <UIKit/UIKit.h>

@interface UIView (Common)
@property (nonatomic) IBInspectable UIColor *borderColor;
@property (nonatomic) IBInspectable CGFloat borderWidth;
@property (nonatomic) IBInspectable CGFloat cornerRadius;
@property (nonatomic) IBInspectable BOOL masksToBounds;

///阴影
@property (nonatomic) IBInspectable UIColor *shadowColor;
@property (nonatomic) IBInspectable CGFloat shadowRadius;
@property (nonatomic) IBInspectable CGSize shadowOffset;
@property (nonatomic) IBInspectable float shadowOpacity;


@end

