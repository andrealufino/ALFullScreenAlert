//
//  UIButton+ALBlock.h
//  ALFullScreenAlert
//
//  Created by Andrea Mario Lufino on 04/07/13.
//  Copyright (c) 2013 Andrea Mario Lufino. All rights reserved.
//

// Based on Josh Holtz category
// You can find it here :
// https://gist.github.com/joshdholtz/2468899
// See UIButton+Block.h

#define kUIButtonBlockTouchUpInside @"TouchInside"

#import <UIKit/UIKit.h>

@interface UIButton (ALBlock)

@property (nonatomic, strong) NSMutableDictionary *actions;

- (void) setAction:(NSString*)action withBlock:(void(^)())block;

@end
