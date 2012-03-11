//
//  NKFirstMasterViewController.m
//  NKTabSplit
//
//  Created by Kien Nguyen on 11/03/12.
//  Copyright (c) 2012 KNG. All rights reserved.
//

#import "NKFirstMasterViewController.h"
#import "NKEvent.h"

@interface NKFirstMasterViewController ()
- (NSFetchedResultsController *)firstFetchedResultsController;
@end

@implementation NKFirstMasterViewController

@synthesize managedObjectContext = _managedObjectContext;

- (void)viewDidLoad
{
    self.fetchedResultsController = [self firstFetchedResultsController];
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
}

- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
	return YES;
}

- (NSFetchedResultsController *)firstFetchedResultsController
{
    /*
    if (_fetchedResultsController) {
        return _fetchedResultsController;
    }
    */
    // Set up the fetched results controller.
    // Create the fetch request for the entity.
    NSFetchRequest *fetchRequest = [[[NSFetchRequest alloc] init] autorelease];
    // Edit the entity name as appropriate.
    NSEntityDescription *entity = [NSEntityDescription entityForName:@"NKEvent" 
                                              inManagedObjectContext:_managedObjectContext];
    [fetchRequest setEntity:entity];
    
    // Set the batch size to a suitable number.
    [fetchRequest setFetchBatchSize:20];
    
    // Edit the sort key as appropriate.
    NSSortDescriptor *sortDescriptor = [[[NSSortDescriptor alloc] initWithKey:@"timeStamp" ascending:NO] autorelease];
    NSArray *sortDescriptors = [NSArray arrayWithObjects:sortDescriptor, nil];
    
    [fetchRequest setSortDescriptors:sortDescriptors];
    
    // Edit the section name key path and cache name if appropriate.
    // nil for section name key path means "no sections".
    //[_fetchedResultsController release];
    NSFetchedResultsController *fetchedResultsController = [[NSFetchedResultsController alloc] initWithFetchRequest:fetchRequest 
                                                                                               managedObjectContext:_managedObjectContext 
                                                                                                 sectionNameKeyPath:nil 
                                                                                                          cacheName:@"NKEvent"];
    
	NSError *error = nil;
	if (![fetchedResultsController performFetch:&error]) {
	    /*
	     Replace this implementation with code to handle the error appropriately.
         
	     abort() causes the application to generate a crash log and terminate. You should not use this function in a shipping application, although it may be useful during development. 
	     */
	    NSLog(@"Unresolved error %@, %@", error, [error userInfo]);
	    abort();
	}
    
    return [fetchedResultsController autorelease];
}

- (void)insertNewObject
{
    // Create a new instance of the entity managed by the fetched results controller.
    NSManagedObjectContext *context = [self.fetchedResultsController managedObjectContext];
    NSEntityDescription *entity = [[self.fetchedResultsController fetchRequest] entity];
    //NSManagedObject *newManagedObject = [NSEntityDescription insertNewObjectForEntityForName:[entity name] inManagedObjectContext:context];
    NKEvent *event = [[NKEvent alloc] initWithEntity:entity insertIntoManagedObjectContext:context];
    // If appropriate, configure the new managed object.
    // Normally you should use accessor methods, but using KVC here avoids the need to add a custom class to the template.
    //[newManagedObject setValue:[NSDate date] forKey:@"timeStamp"];
    event.title = [[NSDate date] description];
    
    // Save the context.
    NSError *error = nil;
    if (![context save:&error]) {
        /*
         Replace this implementation with code to handle the error appropriately.         
         abort() causes the application to generate a crash log and terminate. You should not use this function in a shipping application, although it may be useful during development. 
         */
        NSLog(@"Unresolved error %@, %@", error, [error userInfo]);
        abort();
    }
    [event release];
}

@end
