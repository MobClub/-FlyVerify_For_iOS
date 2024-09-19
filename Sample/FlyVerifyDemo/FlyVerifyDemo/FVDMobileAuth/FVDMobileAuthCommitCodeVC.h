//
//  FVDMobileAuthCommitCodeVC.h
//  FVDMobileAuthCommitCodeVC
//
//  Created by fly on 2020/1/2.
//  Copyright © 2020 fly. All rights reserved.
//

#import <UIKit/UIKit.h>

#define FVDDemoRGBA(r,g,b,a) [UIColor colorWithRed:(r / 255.0) green:(g / 255.0) blue:(b / 255.0) alpha:a]

typedef void(^FVFlyVerifyCommitCodeResultHanler)(NSDictionary *dict,NSError *error);


@interface FVDMobileAuthCommitCodeVC : UIViewController

/**
 初始化获取验证码视图控制器
 
 *  @param tokenInfo tokens
 */
- (instancetype)initWithTokenInfo:(NSDictionary *)tokenInfo result:(FVFlyVerifyCommitCodeResultHanler)result;

@end

