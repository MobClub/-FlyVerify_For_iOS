//
//  FVDLoginViewController.h
//  FVDLoginViewController
//
//  Created by fly on 2020/4/2.
//  Copyright © 2020 fly. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface FVDLoginViewController : UIViewController

@property (nonatomic, copy) void(^loginButtonClickedBlock)(UIButton *button);


@end

NS_ASSUME_NONNULL_END
