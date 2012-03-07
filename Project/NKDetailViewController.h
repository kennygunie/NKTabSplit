//
//  NKDetailViewController.h
//  NKTabSplit
//
//  Created by Kien Nguyen on 05/03/12.
//  Copyright (c) 2012 KNG. All rights reserved.
//

#import <UIKit/UIKit.h>

/** Detail view */
@interface NKDetailViewController : UIViewController <UISplitViewControllerDelegate>

/** Detail data */
@property (strong, nonatomic) id detailItem;

/** Detail label */
@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
