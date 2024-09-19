//
//  SmallWindowExample.h
//  FlyVerifyDemo
//
//  Created by fly on 2020/11/27.
//  Copyright © 2020 fly. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <FlyVerify/FVSDKHyVerify.h>

//窗口样式的授权页示例
@interface SmallWindowExample : NSObject<FVSDKVerifyDelegate>

- (instancetype)initWithTarget:(id)target;

//自定义UI
-(void)setupAuthPageCustomStyle:(UIViewController *)authVC userInfo:(FVSDKHyProtocolUserInfo *)userInfo;

@end
