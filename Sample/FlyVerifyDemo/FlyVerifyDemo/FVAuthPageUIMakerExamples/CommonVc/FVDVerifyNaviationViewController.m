//
//  FVDVerifyNaviationViewController.m
//  FVDVerifyNaviationViewController
//
//  Created by fly on 2019/9/2.
//  Copyright © 2019 fly. All rights reserved.
//

#import "FVDVerifyNaviationViewController.h"

@interface FVDVerifyNaviationViewController ()

@end

@implementation FVDVerifyNaviationViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

//支持旋转
-(BOOL)shouldAutorotate{
    return NO;
}

//支持的方向
- (UIInterfaceOrientationMask)supportedInterfaceOrientations {
    return UIInterfaceOrientationMaskPortrait;
//    return UIInterfaceOrientationMaskPortrait | UIInterfaceOrientationMaskLandscapeLeft | UIInterfaceOrientationMaskLandscapeRight;
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
