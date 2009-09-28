//
//  HelloUserViewController.h
//  HelloUser
//
//  Created by Abraham Williams on 9/28/09.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloUserViewController : UIViewController {
	
	IBOutlet UILabel *helloLabel;
	IBOutlet UITextField *nameField;
	
}

- (IBAction) sayHello: (id) sender;

@end

