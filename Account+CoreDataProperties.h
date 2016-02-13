//
//  Account+CoreDataProperties.h
//  Accountant
//
//  Created by Tomáš Rus on 24.01.16.
//  Copyright © 2016 Tomáš Rus. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Account.h"

NS_ASSUME_NONNULL_BEGIN

@interface Account (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *bank;
@property (nullable, nonatomic, retain) NSString *number;
@property (nullable, nonatomic, retain) NSSet<NSManagedObject *> *transactions;

@end

@interface Account (CoreDataGeneratedAccessors)

- (void)addTransactionsObject:(NSManagedObject *)value;
- (void)removeTransactionsObject:(NSManagedObject *)value;
- (void)addTransactions:(NSSet<NSManagedObject *> *)values;
- (void)removeTransactions:(NSSet<NSManagedObject *> *)values;

@end

NS_ASSUME_NONNULL_END
