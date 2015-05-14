//
//  AppDelegate.h
//  iOSSample
//
//  Created by Alex Manzella on 07/02/15.
//  Copyright (c) 2015 MPow. All rights reserved.
//

#import "UIXCompatibility.h"

@interface AppDelegate : UIResponder

#if TARGET_UIKIT
@property (strong, nonatomic) UIWindow *window;
#else
@property (strong, nonatomic) UXWindowController *windowController;
#endif

@end

