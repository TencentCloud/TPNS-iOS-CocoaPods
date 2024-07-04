//
//  XGPushPrivate.h
//  TPNS-SDK
//
//  Created by uwei on 2019/1/23.
//  Copyright © 2019 TPNS of Tencent. All rights reserved.
//

#ifndef XGPushPrivate_h
#define XGPushPrivate_h

#import "XGPush.h"

typedef NS_ENUM(NSUInteger, XGPushAccountNetworkType) {
    XGPushAccountNetworkTypeUNKNOWN = 0,
    XGPushAccountNetworkTypeHTTP,  /// 仅使用短链
    XGPushAccountNetworkTypeMQTT,  /// 仅使用长链
    XGPushAccountNetworkTypeAUTO  /// 自动，先使用长链，长链失败后使用一次短链
};

@interface XGPush (XGPushPrivate)

/**
 配置TPNS的二级域名

 @param domainName 二级域名
 @note 默认广州集群，例如tpns.sgp.tencent.com代表新加坡集群, tpns.hk.tencent.com代表香港集群，等等。
 */
- (void)configureClusterDomainName:(NSString *)domainName;

/**
 配置TPNS的通知状态上报，失败后重试次数

 @param times 重试次数
 @note 默认3次，配置越大，尝试的次数越多。
 */
- (void)configureMonitorNotificationStatusRetryTimes:(int)times;

/**
 配置账号绑定请求方式

 @param type 请求方式
 @note 默认使用长链，如需更换策略请在注册方法startXG之前调用。
 */
- (void)configureAccountNetworkType:(XGPushAccountNetworkType)type;

/**
 业务侧调用自定义请求后，将响应结果回传给SDK

 @param responseInfo 业务侧请求TPNS后台响应结果
 */
typedef void (^XGPushCustomRegisterResponseHandler)(NSDictionary *responseInfo);

/**
 自定义注册配置后，SDK内部通知业务侧请求注册

 @param customRequestDic 注册请求参数，如果为空表示SDK内部处理，无需请求
 @note 由于网络监测，频率限制等因素customRequestDic返回可能为nil，此时业务侧无需请求，交由SDK处理
 */
typedef void (^XGPushCustomRegisterRequestHandler)(NSDictionary *customRequestDic);

/**
 自定义注册配置接口

 @param completionHandler 业务侧调用配置自定义注册接口后，SDK内部初始化后，回传给业务侧去调用注册
 @return XGPushCustomRegisterResponseHandler 业务侧请求TPNS后台有结果后，需调用此句柄将结果registerInfo回传给我们
 @note 此接口需在初始化接口startXG之前调用。
 */
- (XGPushCustomRegisterResponseHandler)configureCustomRegisterWithCompletionHandler:(XGPushCustomRegisterRequestHandler)completionHandler;

#pragma mark - ********以下接口，不再使用********

/**
 配置基础功能的网络相关

 @param host url地址
 @param port 端口号
 */
- (void)configureHost:(NSString *)host port:(NSInteger)port __deprecated_msg("You should use configureClusterDomainName instead");
/**
 配置日志上报网络相关

 @param host url地址
 @param port 端口号
 */
- (void)configureStatReportHost:(NSString *)host port:(NSInteger)port __deprecated_msg("You should use configureClusterDomainName instead");

@end

#endif /* XGPushPrivate_h */
