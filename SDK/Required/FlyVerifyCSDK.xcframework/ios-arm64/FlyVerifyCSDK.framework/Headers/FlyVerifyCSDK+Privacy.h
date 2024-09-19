//
//  FlyVerifyCSDK+Privacy.h
//  FlyVerifyCSDK
//
//  Created by flyverify on 2020/1/21.
//  Copyright © 2020 FlyVerify. All rights reserved.
//

#import <FlyVerifyCSDK/FlyVerifyC.h>
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

#ifndef FlyVerifyC_Privacy_h
#define FlyVerifyC_Privacy_h

//隐私数据配置代理
@protocol FlyVerifyCPrivacyDelegate <NSObject>

@optional

/**
 用于判断是否允许SDK主动采集经纬度信息

 @return YES表示可以主动采集经纬度信息，NO表示不可以，默认为YES
 */
- (BOOL)isLocInfoEnable;

/**
 APP提供经纬度信息
 当SDK被拒绝主动采集经纬度信息后(isLocInfoEnable返回NO)，会通过此方法向App请求经纬度信息
 
 @return 经纬度信息,如果返回 nil 则表示不提供地理位置信息,默认为nil
 */
- (CLLocation* _Nullable)getLoc;

/**
 用于判断是否允许SDK主动采集wifi信息

 @return YES表示可以主动采集wifi信息，NO表示不可以，默认为YES
 */
- (BOOL)isWiFiInfoEnable;

/**
 APP提供wifi地址信息
 当SDK被拒绝主动采集wifi地址信息后(isWiFiInfoEnable返回NO)，会通过此方法向App请求wifi地址信息
 
 @return wifi名称信息,如果返回 nil 则表示不提供wifi地址信息,默认为nil
 */
- (NSString* _Nullable)getBSSID;

/**
 APP提供wifi名称信息
 当SDK被拒绝主动采集wifi名称信息后(isWiFiInfoEnable返回NO)，会通过此方法向App请求wifi名称信息
 
 @return wifi名称信息,如果返回 nil 则表示不提供wifi名称信息,默认为nil
 */
- (NSString* _Nullable)getSSID;

/**
 用于判断是否允许SDK主动采集idfv信息

 @return YES表示SDK可以主动采集idfv信息，NO表示不可以，默认为YES
 */
- (BOOL)isIdfvEnable;

/**
 APP提供idfv信息
 当SDK被拒绝主动采集idfv信息后(isIdfvEnable返回NO)，会通过此方法向App请求idfv信息
 
 @return idfa信息,如果返回 nil 则表示不提供idfv信息,默认为nil
 */
- (NSString* _Nullable)getIdfv;

/**
 用于判断是否允许SDK主动采集idfa信息

 @return YES表示SDK可以主动采集idfa信息，NO表示不可以，默认为YES
 */
- (BOOL)isIdfaEnable;

/**
 APP提供 idfa 信息
 当SDK被拒绝主动采集 idfa 信息后(isIdfaEnable返回NO)，会通过此方法向App请求idfa信息
 
 @return idfa信息,如果返回nil则表示不提供idfa信息,默认为nil
 */
- (NSString* _Nullable)getIdfa;

/**
 用于判断是否允许SDK主动采集ip信息
 
 @return YES表示SDK可以主动采集ip信息，NO表示不可以，默认为YES
 */
- (BOOL)isIpEnable;

/**
 APP提供 蜂窝 ipv4 信息
 当SDK被拒绝主动采集 蜂窝 ipv4 信息后(isIpEnable返回NO)，会通过此方法向App请求 蜂窝 ipv4 信息
 
 @return 蜂窝 ipv4信息,如果返回nil则表示不提供蜂窝ipv4信息,默认为nil
 */
- (NSString* _Nullable)getCellIpv4;

/**
 APP提供 蜂窝ipv6 信息
 当SDK被拒绝主动采集 蜂窝ipv6 信息后(isIpEnable返回NO)，会通过此方法向App请求蜂窝ipv6信息
 
 @return 蜂窝ipv6信息,如果返回nil则表示不提供蜂窝ipv6信息,默认为nil
 */
- (NSString* _Nullable)getCellIpv6;

/**
 APP提供 wifi ipv4 信息
 当SDK被拒绝主动采集 wifi ipv4 信息后(isIpEnable返回NO)，会通过此方法向App请求蜂窝wifi ipv4信息
 
 @return wifi ipv4 信息,如果返回nil则表示不提供 wifi ipv4 信息,默认为nil
 */
- (NSString* _Nullable)getWifiIpv4;

/**
 APP提供 wifi ipv6 信息
 当SDK被拒绝主动采集 wifi ipv6 信息后(isIpEnable返回NO)，会通过此方法向App请求蜂窝wifi ipv6信息
 
 @return wifi ipv6 信息,如果返回nil则表示不提供 wifi ipv6 信息,默认为nil
 */
- (NSString* _Nullable)getWifiIpv6;

/**
 APP提供 所有 ipv4, ipv6 信息
 当SDK被拒绝主动采集 ipv4, ipv6 信息后(isIpEnable返回NO)，会通过此方法向App请求 所有ipv4, ipv6信息
 
 @return ipv4, ipv6 信息,如果返回nil则表示不提供 ipv4, ipv6 信息,默认为nil
 */
- (NSDictionary* _Nullable)getIpInfoAll;


/**
 用于判断是否允许SDK主动采集社交平台信息

 @return YES表示SDK可以自行采集社交平台信息，NO表示不可以，默认为YES
 */
- (BOOL)isSocietyPlatformDataEnable;

- (BOOL)kbiAtAir;
@end


@interface FlyVerifyC (Privacy)

/**
 同意隐私授权
 @param isAgree 是否同意（用户授权后的结果）
 @param handler 回掉
 */
+ (void)agreePrivacy:(BOOL)isAgree onResult:(void (^_Nullable)(BOOL success))handler;

/**
 同意隐私授权
 @param isAgree 是否同意（用户授权后的结果）
 @param privacyDataDelegate 隐私数据配置
 @param handler 回掉
 */
+ (void)agreePrivacy:(BOOL)isAgree
                  privacyDataDelegate:(id<FlyVerifyCPrivacyDelegate> _Nullable)privacyDataDelegate
                             onResult:(void (^_Nullable)(BOOL success))handler;

/**
 设置隐私数据代理
 1.如果调用的agreePrivacy:privacyDataDelegate:onResult:中设置过privacyDataDelegate，
 就不用再调用setPrivacyDataDelegate:方法
 2.如果没有调用过agreePrivacy:privacyDataDelegate:onResult:.
 先调用setPrivacyDataDelegate:方法，再调agreePrivacy:onResult:
 3.也可以单独调用setPrivacyDataDelegate:方法

 @param privacyDataDelegate 隐私数据配置
 
 */
+(void)setPrivacyDataDelegate:(id<FlyVerifyCPrivacyDelegate> _Nullable)privacyDataDelegate;

@end


#endif /* FlyVerifyC_Privacy_h */
