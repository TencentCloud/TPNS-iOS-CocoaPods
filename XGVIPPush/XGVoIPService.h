//
//  XGVoIPService.h
//  XG-SDK
//
//  Created by boblv on 2022/3/4.
//  Copyright © 2022 TEG of Tencent. All rights reserved.
//

#import <Foundation/Foundation.h>

/// VoIP通知内容类
@interface XGVoIPService : NSObject
/// 向TPNS服务器提交Token
/// @param voipToken 系统返回的VoIP Token
+ (void)registerVoIPToken:(nonnull NSData *)voipToken;

/// 处理收到的VoIP的消息，用于统计VoIP下发情况
/// @param remoteInfo VoIP消息内容
+ (void)handleVoIPNotification:(nonnull NSDictionary *)remoteInfo;

@end
