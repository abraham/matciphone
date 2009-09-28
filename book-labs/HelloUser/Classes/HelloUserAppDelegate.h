//
//  HelloUserAppDelegate.h
//  HelloUser
//
//  Created by Abraham Williams on 9/28/09.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HelloUserViewController;

@interface HelloUserAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    HelloUserViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet HelloUserViewController *viewController;

@end

