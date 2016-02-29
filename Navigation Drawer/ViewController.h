//
//  ViewController.h
//  Navigation Drawer
//
//  Created by Ashish Chauhan on 29/02/16.
//  Copyright © 2016 Ashish Chauhan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CCKFNavDrawer.h"
@interface ViewController : UIViewController<CCKFNavDrawerDelegate>

- (IBAction)drawerToggle:(id)sender;

@property (weak, nonatomic) IBOutlet UILabel *lbltext;


@end

