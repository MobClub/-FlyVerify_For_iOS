//
//  FVDSerive.h
//  FVDSerive
//
//  Created by fly on 2019/6/4.
//  Copyright © 2019 fly. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FVDSerive : NSObject

+ (void)verifyGetPhoneNumberWith:(NSDictionary *)result completion:(void (^) (NSError *error, NSString *phone))handler;

@end

NS_ASSUME_NONNULL_END
