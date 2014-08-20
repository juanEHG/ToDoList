//
//  EventItem.h
//  ToDoList
//
//  Created by rickysax on 19/08/14.
//  Copyright (c) 2014 ___FS___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EventItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
