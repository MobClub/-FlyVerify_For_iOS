//
//  AppDelegate.m
//  FlyVerifyDemo
//
//  Created by fly on 2019/9/2.
//  Copyright © 2019 fly. All rights reserved.
//

#import "AppDelegate.h"
#import <Bugly/Bugly.h>

#import "FVDVerifyViewController.h"
#import <FlyVerifyCSDK/FlyVerifyCSDK.h>
#import "FVDVerifyNaviationViewController.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    self.window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
    self.window.backgroundColor = [UIColor whiteColor];
    self.window.rootViewController = [[FVDVerifyNaviationViewController alloc] initWithRootViewController:[FVDVerifyViewController new]];
    
    [Bugly startWithAppId:@"e21ce79e66"];
//    [FlyVerifyC initKey:@"3a2c2a977d3d2"
//                 secret:@"bda5943cf321055f80f98bcb43491804"
//           privacyLevel:2];
    
    [self.window makeKeyAndVisible];
    
    return YES;
}
@end
