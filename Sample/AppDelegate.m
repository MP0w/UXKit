//
//  AppDelegate.m
//  iOSSample
//
//  Created by Alex Manzella on 07/02/15.
//  Copyright (c) 2015 MPow. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate ()

@end

@implementation AppDelegate

#if TARGET_UIKIT
- (BOOL)application:(id)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
#else
- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
#endif
{
    UINavigationController *rootViewController = [[UINavigationController alloc] init];

#if TARGET_UIKIT
    self.window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
    self.window.rootViewController = rootViewController;
    [self.window makeKeyAndVisible];
#else
    self.windowController = [[UXWindowController alloc] initWithRootViewController:rootViewController];
    [self.windowController showWindow:self];
#endif
    
    UIViewController *mainVC = [[UIViewController alloc] init];
    [rootViewController pushViewController:mainVC animated:NO];

#if TARGET_UIKIT
    return YES;
#endif
}

@end
