//
//  ViewController.h
//  BlocBrowser
//
//  Created by Tyler Hall on 12/12/15.
//  Copyright © 2015 bloc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

/**
 Replaces the web view with a fresh one, erasing all history. Also updates the URL field and toolbar buttons appropriately.
 */
- (void) resetWebView;


@end

