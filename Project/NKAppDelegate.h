//
//  NKAppDelegate.h
//  NKTabSplit
//
//  Created by Kien Nguyen on 05/03/12.
//  Copyright (c) 2012 KNG. All rights reserved.
//

#import <UIKit/UIKit.h>

@class NKMasterViewController;
@class NKDetailViewController;


/** Application delegate */
@interface NKAppDelegate : UIResponder <UIApplicationDelegate, UITabBarControllerDelegate>



/** @name Views */
/** Main window */
@property (strong, nonatomic) IBOutlet UIWindow *window;
/** Master View A */
@property (strong, nonatomic) IBOutlet NKMasterViewController *viewControllerA;
/** Detail View A */
@property (strong, nonatomic) IBOutlet NKDetailViewController *detailViewControllerA;
/** Split View A */
@property (strong, nonatomic) IBOutlet UISplitViewController *splitViewControllerA;

/** Tab bar controller */
@property (strong, nonatomic) IBOutlet UITabBarController *tabBarController;

/** @name Coredata */
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

/** Save data */
- (void)saveContext;

/** @name Utils */
- (NSURL *)applicationDocumentsDirectory;
@end
