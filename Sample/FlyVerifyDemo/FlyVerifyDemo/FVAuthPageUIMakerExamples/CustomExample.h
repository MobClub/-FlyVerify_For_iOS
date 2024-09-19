//
//  SVVerifyAuthPageMakerExample.h
//  FlyVerifyDemo
//
//  Created by fly on 2020/11/27.
//  Copyright © 2020 fly. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <FlyVerify/FVSDKHyVerify.h>
@interface CustomExample : NSObject <FVSDKVerifyDelegate>

- (instancetype)initWithTarget:(id)target;

//隐私协议设置示例
+(void)setPrivacySettingExample:(FVSDKHyUIConfigure *)uiConfigure;

//自定义UI
-(void)setupAuthPageCustomStyle:(UIViewController *)authVC userInfo:(FVSDKHyProtocolUserInfo *)userInfo;

//(可选)设置横竖屏旋转
-(void)authPageViewWillTransition:(UIViewController *)authVC toSize:(CGSize)size withTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)coordinator userInfo:(FVSDKHyProtocolUserInfo *)userInfo;

@end
