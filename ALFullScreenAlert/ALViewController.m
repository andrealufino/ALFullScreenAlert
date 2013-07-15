//
//  ALViewController.m
//  ALFullScreenAlert
//
//  Created by Andrea Mario Lufino on 02/07/13.
//  Copyright (c) 2013 Andrea Mario Lufino. All rights reserved.
//

#import "ALViewController.h"

#define kViewToBlur self.txtView

@interface ALViewController ()

@end

@implementation ALViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    ALFSAlert *alert = [[ALFSAlert alloc] initInViewController:self];
    [alert showAlertWithMessage:@"I'm a message from ALFSAlert. I'm trying to write in there from the ALFSAlert class which inherits from UIView."];
    [alert addButtonWithText:@"Button" forType:ALFSAlertButtonTypeNormal onTap:^{
        NSLog(@"Button");
    }];
    [alert addButtonWithText:@"Button 2" forType:ALFSAlertButtonTypeDelete onTap:^{
        NSLog(@"Button 2");
    }];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
}

@end
