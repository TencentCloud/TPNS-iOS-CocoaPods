//
//  XGFreeInteraction.h
//  和信鸽免费版的交互，方便免费版用户迁移到腾讯云TPNS
//
//  Created by xiang on 2020/2/26.
//  Copyright © 2020 XG of Tencent. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XGForFreeVersion : NSObject

//免费集群accessId,在反注册设备时会用到，防止两边同时推送出现重复
@property uint32_t freeAccessId;

+ (instancetype)defaultForFreeVersion;

@end
