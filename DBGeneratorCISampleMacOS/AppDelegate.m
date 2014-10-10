//
//  AppDelegate.m
//  DBGeneratorCISampleMacOS
//
//  Created by Dima Bart on 2014-10-10.
//  Copyright (c) 2014 Dima Bart. All rights reserved.
//

#import "AppDelegate.h"
#import "DBGeneratorCI.h"

@interface AppDelegate ()

@property (weak) IBOutlet NSWindow *window;

@end

@implementation AppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
    
    NSString *path   = [@"~/Desktop/" stringByExpandingTildeInPath];
    DBGeneratorCI *g = [[DBGeneratorCI alloc] initWithFileName:@"DBFilters" classPrefix:@"DB"];
    [g generate];
    [g writePairToDirectory:path error:nil];
    
}

@end
