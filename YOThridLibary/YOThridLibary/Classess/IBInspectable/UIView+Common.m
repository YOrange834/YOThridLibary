//
//  UIView+Common.m
//  Coding_iOS
//
//  Created by HOragne
//
//

#import "UIView+Common.h"
#import <objc/runtime.h>


@implementation UIView (Common)

@dynamic borderColor,borderWidth,cornerRadius, masksToBounds, shadowColor, shadowRadius, shadowOffset,shadowOpacity;

-(void)setBorderColor:(UIColor *)borderColor{
    [self.layer setBorderColor:borderColor.CGColor];
}

-(void)setBorderWidth:(CGFloat)borderWidth{
    [self.layer setBorderWidth:borderWidth];
}

-(void)setCornerRadius:(CGFloat)cornerRadius{
    [self.layer setCornerRadius:cornerRadius];
}

- (void)setMasksToBounds:(BOOL)masksToBounds{
    [self.layer setMasksToBounds:masksToBounds];
}

- (void)setShadowOpacity:(float)shadowOpacity{
    [self.layer setShadowOpacity:shadowOpacity];
}

- (void)setShadowRadius:(CGFloat)shadowRadius{
    [self.layer setShadowRadius:shadowRadius];
}
- (void)setShadowColor:(UIColor *)shadowColor{
    [self.layer setShadowColor:shadowColor.CGColor];
}
- (void)setShadowOffset:(CGSize)shadowOffset{
    [self.layer setShadowOffset:shadowOffset];
}


@end

