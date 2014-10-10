//
//  AppDelegate.m
//  DBGeneratorCISample
//
//  Created by Dima Bart on 2014-10-10.
//  Copyright (c) 2014 Dima Bart. All rights reserved.
//

#import "AppDelegate.h"
#import "DBGeneratorCI.h"

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {

    NSString *path   = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
    DBGeneratorCI *g = [[DBGeneratorCI alloc] initWithFileName:@"DBFilters" classPrefix:@"DB"];
    [g setConvertScalars:YES];
    [g generate];
    [g writePairToDirectory:path error:nil];
    
    return YES;
}

@end
