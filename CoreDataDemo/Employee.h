//
//  Employee.h
//  CoreDataDemo
//
//  Created by 杨毅辉 on 15/6/30.
//  Copyright (c) 2015年 yangyh1012. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class NSManagedObject;

@interface Employee : NSManagedObject

@property (nonatomic, retain) NSString * firstName;
@property (nonatomic, retain) NSString * lastName;
@property (nonatomic, retain) NSNumber * age;
@property (nonatomic, retain) NSSet *fkEmployeeToManagers;
@end

@interface Employee (CoreDataGeneratedAccessors)

- (void)addFkEmployeeToManagersObject:(NSManagedObject *)value;
- (void)removeFkEmployeeToManagersObject:(NSManagedObject *)value;
- (void)addFkEmployeeToManagers:(NSSet *)values;
- (void)removeFkEmployeeToManagers:(NSSet *)values;

@end
