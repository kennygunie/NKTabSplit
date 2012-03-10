//
//  NKMasterViewController.h
//  NKTabSplit
//
//  Created by Kien Nguyen on 05/03/12.
//  Copyright (c) 2012 KNG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
@class NKDetailViewController;
@protocol NKMasterViewControllerDelegate;
/** Master view */
@interface NKMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>
/** (Just for iPad) Detail view controller */
@property (strong, nonatomic) NKDetailViewController *detailViewController;
/** Save the last selected row */
@property NSInteger lastSelectedRow;
/** Delegate */
@property (assign, nonatomic) id<NKMasterViewControllerDelegate> delegate;

/** @name Coredata */
/** Fetched datas */
@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;

@end
