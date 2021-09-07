//
//  XGInAppMessageManager.h
//  XGInAppMessage
//
//  Created by rockzuo on 2020/8/17.
//  Copyright © 2020 Tencent. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/// XGInAppMessageManager事件代理
@protocol XGInAppMessageActionDelegate <NSObject>

@optional
/// 通过下发的自定义参数去做响应
/// @param actionDic 自定义事件字符串标识
- (void)onClickWithCustomAction:(nullable NSDictionary *)actionDic;

@end

/// 消息管理类
@interface XGInAppMessageManager : NSObject

/// 开发者是否允许展示标识, 默认展示，如果您在某些场景不想展示应用内消息可将其置为YES
@property (assign, nonatomic) BOOL refuseMessage;

/// 设置消息展示的window
@property (strong, nonatomic, nullable) UIWindow *targetWindow;

/// 按钮事件响应代理
@property (weak, nonatomic, nullable) id<XGInAppMessageActionDelegate> actionDelegate;

/// 设置消息轮询时间间隔，最小值为10s，此方法需要在单例初始化之前调用
+ (void)setMessageTimerInterval:(NSTimeInterval)interval;

/// 单例方法
+ (nonnull instancetype)defaultManager;

/// 展示自定义消息
/// @param messageInfo 应用内消息结构
- (void)presentCustomMessage:(nullable NSDictionary *)messageInfo;

/// 关闭消息视图
- (void)dismissPopWindow;

@end
