//
//  MenuViewController.h
//  SCSlidingViewControllerDemo
//
//  Created by Simon Coulton on 6/11/2013.
//  Copyright (c) 2013 Simon Coulton. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SCSlidingViewController.h"

@interface MenuViewController : UIViewController <SCSlidingViewControllerDelegate>

- (IBAction)showViewControllerButtonClicked:(id)sender;

@end