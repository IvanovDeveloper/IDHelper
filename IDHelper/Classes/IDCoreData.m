//
//  IDCoreData.m
//  Pods
//
//  Created by Ivanov Andrey on 7/27/16.
//
//

#import "IDCoreData.h"
#import <CoreData/CoreData.h>

@implementation IDCoreData

#pragma mark - Examples

/*
 
 * Fetches specific properties
  https://developer.apple.com/library/ios/documentation/DataManagement/Conceptual/CoreDataSnippets/Articles/fetchExpressions.html
 */
- (void)fetchForEntetieSpecifiProperties {

    NSManagedObjectContext *context = [[NSManagedObjectContext alloc] init]; //Your context
    
    NSEntityDescription *entity = [NSEntityDescription  entityForName:@"Your Entity" inManagedObjectContext:context];
    
    NSFetchRequest *request = [[NSFetchRequest alloc] init];
    [request setEntity:entity];
    [request setResultType:NSDictionaryResultType];
    [request setReturnsDistinctResults:YES];
    [request setPropertiesToFetch:@[@"Property name"]];
    
    NSError *error = nil;;
    NSArray *objects = [context executeFetchRequest:request error:&error];
}

@end
