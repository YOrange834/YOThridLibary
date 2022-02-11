//
//  UIButton+YOClickBlock.m
//  ToolsDemo
//
//  Created by YOrange on 2019/4/9.
//  Copyright © 2019 YOrange All rights reserved.
//

#import "UIButton+YOClickBlock.h"
#import <objc/runtime.h>

@implementation UIButton (YOClickBlock)

static void *yo_btnEventBlockKey = &yo_btnEventBlockKey;


//-----添加属性
-(YO_BtnEventClickBlock)yo_btnEventClickBlock{
    return objc_getAssociatedObject(self, &yo_btnEventBlockKey);
}

-(void)setYo_btnEventClickBlock:(YO_BtnEventClickBlock)yo_btnEventClickBlock{
    objc_setAssociatedObject(self, &yo_btnEventBlockKey, yo_btnEventClickBlock, OBJC_ASSOCIATION_COPY);
}

-(void)yo_addControlEvent:(UIControlEvents)controlEvents  withHandler:(void (^)(void))block{
    self.yo_btnEventClickBlock = block;
    [self addTarget:self action:@selector(yo_btnClick) forControlEvents:controlEvents];
}

-(void)yo_TouchUpInSideHandler:(void (^)(void))block{
    [self yo_addControlEvent:(UIControlEventTouchUpInside) withHandler:block];
}


-(void)yo_btnClick{
    if (self.yo_btnEventClickBlock) {
        self.yo_btnEventClickBlock();
    }
}

@end
