//
//  UIButton+YOClickBlock.h
//  ToolsDemo
//
//  Created by YOrange on 2019/4/9.
//  Copyright © 2019 YOrange All rights reserved.
//

#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
typedef void(^YO_BtnEventClickBlock)(void);
@interface UIButton (YOClickBlock)

@property (copy, nonatomic) YO_BtnEventClickBlock yo_btnEventClickBlock;

-(void)yo_addControlEvent:(UIControlEvents)controlEvents  withHandler:(void (^)(void))block;

///默认为TouchUpInside事件
-(void)yo_TouchUpInSideHandler:(void (^)(void))block;


@end

NS_ASSUME_NONNULL_END
