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
    [alert showAlertWithMessage:@"Sono un messaggio di ALFSAlert. Sto provando a scrivere qui dentro tramite la custom alert ALFSAlert, una subclass di UIView."];
    [alert addButtonWithText:@"Bottone" forType:ALFSAlertButtonTypeNormal onTap:^{
        NSLog(@"Bottone");
    }];
    [alert addButtonWithText:@"Bottone 2" forType:ALFSAlertButtonTypeDelete onTap:^{
        NSLog(@"Bottone 2");
    }];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
}

@end
