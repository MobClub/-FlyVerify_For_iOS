//
//  FVSDKDefine.h
//  FVSDKDefine
//
//  Created by fly on 2019/5/17.
//  Copyright © 2019 fly. All rights reserved.
//

#ifndef FVSDKDefine_h
#define FVSDKDefine_h

//SDK版本号
#define KFVSDKVersion @"13.5.6"
//产品标识
#define KFVIdentifier @"FLYVERIFY"

/**
 FlyVerify 结果的回调

 @param resultDic 结果的字典
 @param error 错误信息
 */
typedef void(^FlyVerifyResultHander)(NSDictionary * _Nullable resultDic, NSError * _Nullable error);

#endif /* FVSDKDefine_h */
