//
//  FVDDemoHelper.h
//  FVDDemoHelper
//
//  Created by fly on 2020/1/2.
//  Copyright © 2020 fly. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FVDDemoHelper : NSObject

+ (NSString *)currentZone;

+ (NSString *)currentCountryName;


+ (NSString *)errorTextWithError:(NSError *)error;

+ (BOOL)isZhHans;

+ (BOOL)isPhoneXor11Pro;

+ (BOOL)isPhoneX;

@end

NS_ASSUME_NONNULL_END
