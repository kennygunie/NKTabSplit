//
//  NKEvent.h
//  NKTabSplit
//
//  Created by Kien NGUYEN on 09/03/12.
//  Copyright (c) 2012 KNG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "NKMaster.h"


@interface NKEvent : NKMaster

@property (nonatomic, retain) NSDate * timeStamp;

@end
