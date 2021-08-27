//
//  TPNSInAppMessageManager.h
//  TPNSInAppMessage
//
//  Created by rockzuo on 2020/8/17.
//  Copyright © 2020 Tencent. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TPNSInAppMessageActionProtocol.h"

/// 消息管理类
@interface TPNSInAppMessageManager : NSObject

/// 开发者是否允许展示标识, 默认展示，如果您在某些场景不想展示应用内消息可将其置为YES
@property (assign, nonatomic) BOOL refuseMessage;

/// 设置消息展示的window
@property (strong, nonatomic, nullable) UIWindow *targetWindow;

/// 按钮事件响应代理
@property (weak, nonatomic, nullable) id<TPNSInAppMessageActionDelegate> actionDelegate;

/// 设置消息轮询时间间隔，最小值为10s，此方法需要在单例初始化之前调用
+ (void)setMessageTimerInterval:(NSTimeInterval)interval;

+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)init NS_UNAVAILABLE;

/// 单例方法
+ (nonnull instancetype)sharedManager;

/// 展示自定义消息
/// @param messageInfo 应用内消息结构
- (void)presentCustomMessage:(nullable NSDictionary *)messageInfo;

/// 关闭消息视图
- (void)dismissPopWindow;

@end
