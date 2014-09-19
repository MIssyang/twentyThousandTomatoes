//
//  TTPhotoSelectViewController.h
//  TwentyThousandThomatoes
//
//  Created by lihux on 14-9-18.
//  Copyright (c) 2014年 lihux. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol TTPhotoSelectViewControllerDelegate <NSObject>

- (void)finishSelectImage:(UIImage *)image;

@end

@interface TTPhotoSelectViewController : UIViewController

@property (nonatomic, weak) id<TTPhotoSelectViewControllerDelegate> delegate;

@end
