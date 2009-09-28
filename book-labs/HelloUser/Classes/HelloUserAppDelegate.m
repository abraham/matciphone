//
//  HelloUserAppDelegate.m
//  HelloUser
//
//  Created by Abraham Williams on 9/28/09.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

#import "HelloUserAppDelegate.h"
#import "HelloUserViewController.h"

@implementation HelloUserAppDelegate

@synthesize window;
@synthesize viewController;


- (void)applicationDidFinishLaunching:(UIApplication *)application {    
    
    // Override point for customization after app launch    
    [window addSubview:viewController.view];
    [window makeKeyAndVisible];
}


- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}


@end
