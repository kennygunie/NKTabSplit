//
//  NKAViewController.h
//  NKTabSplit
//
//  Created by Kien NGUYEN on 09/03/12.
//  Copyright (c) 2012 KNG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NKMasterViewControllerDelegate.h"

@class NKMasterViewController;
@class NKDetailViewController;

@interface NKSplitViewController : UISplitViewController <NKMasterViewControllerDelegate>

/** Master View A */
@property (strong, nonatomic) IBOutlet NKMasterViewController *masterViewController;
/** Detail View A */
@property (strong, nonatomic) IBOutlet NKDetailViewController *detailViewController;

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
