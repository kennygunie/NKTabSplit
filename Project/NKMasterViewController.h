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

/**
 Master view
 */
@interface NKMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>


@property (strong, nonatomic) NKDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
