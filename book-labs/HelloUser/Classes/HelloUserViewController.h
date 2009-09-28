//
//  HelloUserViewController.h
//  HelloUser
//
//  Created by Abraham Williams on 9/28/09.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloUserViewController : UIViewController <UITextFieldDelegate> {
	
	IBOutlet UILabel *helloLabel;
	IBOutlet UITextField *nameField;
	
}

@property (nonatomic, retain) UILabel *helloLabel;
@property (nonatomic, retain) UITextField *nameField;

- (IBAction) sayHello: (id) sender;
- (IBAction) modifyHello: (id) sender;

@end

