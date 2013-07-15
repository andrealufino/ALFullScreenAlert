ALFullScreenAlert
=================

This is a full screen alert which is useful to display some messages to the user. You can also add one or two buttons of two different types and associate a block that will be performed when the user tap on the button.


Usage
=================

This is an example :

    ALFSAlert *alert = [[ALFSAlert alloc] initInViewController:self];
    [alert showAlertWithMessage:@"Sono un messaggio di ALFSAlert. Sto provando a scrivere qui dentro tramite la custom alert ALFSAlert, una subclass di UIView."];
    [alert addButtonWithText:@"Bottone" forType:ALFSAlertButtonTypeNormal onTap:^{
        NSLog(@"Bottone");
    }];
    [alert addButtonWithText:@"Bottone 2" forType:ALFSAlertButtonTypeDelete onTap:^{
        NSLog(@"Bottone 2");
    }];
