//
//  ALFSAlert.h
//  ALFullScreenAlert
//
//  Created by Andrea Mario Lufino on 02/07/13.
//  Copyright (c) 2013 Andrea Mario Lufino. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "UIButton+ALBlock.h"

typedef enum {
    ALFSAlertButtonTypeNormal,
    ALFSAlertButtonTypeDelete
} ALFSAlertButtonType;

/*!
 ----------------------------
 /// @name ALFSAlert
 ----------------------------
 */

/*!
 * This class is useful to display some alert on the view and show messages to the user
 */

@interface ALFSAlert : UIView {
    UIViewController *parentViewController;
    UIView *overlay;
    UILabel *message;
    NSMutableArray *subviews, *buttons;
    UIButton *btnLeft, *btnRight;
    NSInteger numberOfButtons;
    BOOL isShown;
}

/*!
 Init the alert
 @param viewController The UIViewController in which the alert will display
 @return self
 */
- (id)initInViewController:(UIViewController *)viewController;
/*!
 Show the alert on the view controller passed in the init method
 @param alertText The text that have to be displayed in the alert
 */
- (void)showAlertWithMessage:(NSString *)alertText;
/*!
 Add button with text and type.
 @param text The text to display on the button
 @param type The ALFSAlertButtonType. It could be ALFSAlertButtonTypeNormal or ALFSAlertButtonTypeDelete
 @param onClick A block that will be executed when the button is tapped
 */
- (void)addButtonWithText:(NSString *)text forType:(ALFSAlertButtonType)type onTap:(void (^)(void))block;
/*!
 Remove the alert from the screen
 */
- (void)removeAlert;

@end
