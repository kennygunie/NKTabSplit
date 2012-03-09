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

- (void)insertNewObjectWithFetchedResultsController:(NSFetchedResultsController *)fetchedResultsController;
- (NSFetchedResultsController *)fetchedResultsController;

@end
