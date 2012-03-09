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
@property NSInteger lastSelectedRow;
/** @name Coredata */
/** Store the object context from AppDelegate */
//@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
/** Fetched datas */
@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;

@property (assign, nonatomic) id<NKMasterViewControllerDelegate> delegate;
@end
