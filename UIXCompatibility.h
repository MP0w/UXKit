//
//  UXCompatibility.h
//  UXKitTest
//
//  Created by Alex Manzella on 06.02.2015.
//  Copyright (c) 2015 Alex Manzella. All rights reserved.
//

#import <Foundation/Foundation.h>

#if TARGET_OS_MAC && !TARGET_IPHONE_SIMULATOR
#define TARGET_UXKIT 1
#else
#define TARGET_UIKIT 1
#endif


#if TARGET_UIKIT

#import <UIKit/UIKit.h>

#else

#import "UXKit.h"
// UX to UI
@compatibility_alias UIAuxiliaryNavigationStore UXAuxiliaryNavigationStore;
@compatibility_alias UIBackButton UXBackButton;
@compatibility_alias UIBackButtonCell UXBackButtonCell;
@compatibility_alias UIBar UXBar;
@compatibility_alias UIBarButtonItem UXBarButtonItem;
@compatibility_alias UIBarItem UXBarItem;
@compatibility_alias UIClickEventTracker UXClickEventTracker;
@compatibility_alias UICollectionClipView UXCollectionClipView;
@compatibility_alias UICollectionDocumentView UXCollectionDocumentView;
@compatibility_alias UICollectionReusableView UXCollectionReusableView;
@compatibility_alias UICollectionView UXCollectionView;
@compatibility_alias UICollectionViewAnimation UXCollectionViewAnimation;
@compatibility_alias UICollectionViewCell UXCollectionViewCell;
@compatibility_alias UICollectionViewController UXCollectionViewController;
@compatibility_alias UICollectionViewData UXCollectionViewData;
@compatibility_alias UICollectionViewFlowLayout UXCollectionViewFlowLayout;
@compatibility_alias UICollectionViewFlowLayoutInvalidationContext UXCollectionViewFlowLayoutInvalidationContext;
@compatibility_alias UICollectionViewIndexPathsSet UXCollectionViewIndexPathsSet;
@compatibility_alias UICollectionViewLayout UXCollectionViewLayout;
@compatibility_alias UICollectionViewLayoutAccessibility UXCollectionViewLayoutAccessibility;
@compatibility_alias UICollectionViewLayoutAttributes UXCollectionViewLayoutAttributes;
@compatibility_alias UICollectionViewLayoutInvalidationContext UXCollectionViewLayoutInvalidationContext;
@compatibility_alias UICollectionViewLayoutSectionAccessibility UXCollectionViewLayoutSectionAccessibility;
@compatibility_alias UICollectionViewMutableIndexPathsSet UXCollectionViewMutableIndexPathsSet;
@compatibility_alias UICollectionViewUpdate UXCollectionViewUpdate;
@compatibility_alias UICollectionViewUpdateGap UXCollectionViewUpdateGap;
@compatibility_alias UICollectionViewUpdateItem UXCollectionViewUpdateItem;
@compatibility_alias UIControl UXControl;
@compatibility_alias UIDragEventTracker UXDragEventTracker;
@compatibility_alias UIEventTracker UXEventTracker;
@compatibility_alias UIIdentityTransitionController UXIdentityTransitionController;
@compatibility_alias UIImageView UXImageView;
@compatibility_alias UILabel UXLabel;
@compatibility_alias UILongClickEventTracker UXLongClickEventTracker;
@compatibility_alias UINavigationBar UXNavigationBar;
@compatibility_alias UINavigationController UXNavigationController;
@compatibility_alias UINavigationItem UXNavigationItem;
@compatibility_alias UIParallaxTransitionController UXParallaxTransitionController;
@compatibility_alias UIPinchEventTracker UXPinchEventTracker;
@compatibility_alias UIPopover UXPopover;
@compatibility_alias UIPopoverController UXPopoverController;
@compatibility_alias UIProxyViewController UXProxyViewController;
@compatibility_alias UISlideTransitionController UXSlideTransitionController;
@compatibility_alias UISourceController UXSourceController;
@compatibility_alias UITabBarController UXTabBarController;
@compatibility_alias UITabBarItem UXTabBarItem;
@compatibility_alias UITableLayout UXTableLayout;
@compatibility_alias UITableView UXTableView;
@compatibility_alias UITableViewCell UXTableViewCell;
@compatibility_alias UITableViewController UXTableViewController;
@compatibility_alias UIToolbar UXToolbar;
@compatibility_alias UITransitionController UXTransitionController;
@compatibility_alias UIView UXView;
@compatibility_alias UIViewAnimationContext UXViewAnimationContext;
@compatibility_alias UIViewController UXViewController;
@compatibility_alias UIWindowController UXWindowController;
@compatibility_alias UIZoomingCrossfadeTransitionController UXZoomingCrossfadeTransitionController;

// NS to UI
@compatibility_alias UIColor NSColor;
@compatibility_alias UIResponder NSResponder;
@compatibility_alias UIImage NSImage;
@compatibility_alias UIFont NSFont;

#pragma mark - Enumerations

typedef NS_ENUM(NSInteger, UITableViewCellAccessoryType) {
    UITableViewCellAccessoryNone,                   // don't show any accessory view
    UITableViewCellAccessoryDisclosureIndicator,    // regular chevron. doesn't track
    UITableViewCellAccessoryDetailDisclosureButton, // info button w/ chevron. tracks
    UITableViewCellAccessoryCheckmark,              // checkmark. doesn't track
    UITableViewCellAccessoryDetailButton NS_ENUM_AVAILABLE_IOS(7_0) // info button. tracks
};

typedef NS_ENUM(NSInteger, UIViewContentMode) {
    UIViewContentModeScaleToFill,
    UIViewContentModeScaleAspectFit,      // contents scaled to fit with fixed aspect. remainder is transparent
    UIViewContentModeScaleAspectFill,     // contents scaled to fill with fixed aspect. some portion of content may be clipped.
    UIViewContentModeRedraw,              // redraw on bounds change (calls -setNeedsDisplay)
    UIViewContentModeCenter,              // contents remain same size. positioned adjusted.
    UIViewContentModeTop,
    UIViewContentModeBottom,
    UIViewContentModeLeft,
    UIViewContentModeRight,
    UIViewContentModeTopLeft,
    UIViewContentModeTopRight,
    UIViewContentModeBottomLeft,
    UIViewContentModeBottomRight,
};

#endif
