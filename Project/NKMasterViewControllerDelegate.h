//
//  NKMasterViewControllerDelegate.h
//  NKTabSplit
//
//  Created by Kien NGUYEN on 09/03/12.
//  Copyright (c) 2012 KNG. All rights reserved.
//

#import <Foundation/Foundation.h>
@class NSFetchedResultsController;

@protocol NKMasterViewControllerDelegate <NSObject>

- (NSFetchedResultsController *)fetchedResultsController;
- (void)insertNewObjectWithFetchedResultsController:(NSFetchedResultsController *)fetchedResultsController;

@end
