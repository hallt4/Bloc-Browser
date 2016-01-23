//
//  AwesomeFloatingToolbar.h
//  BlocBrowser
//
//  Created by Tyler Hall on 1/12/16.
//  Copyright © 2016 bloc. All rights reserved.
//

#import <UIKit/UIKit.h>

//@interface AwesomeFloatingToolbar : UIView

@class AwesomeFloatingToolbar;

@protocol AwesomeFloatingToolbarDelegate <NSObject>

@optional

- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didSelectButtonWithTitle:(NSString *)title;

@end

@interface AwesomeFloatingToolbar : UIView

- (instancetype) initWithFourTitles:(NSArray *)titles;

- (void) setEnabled:(BOOL)enabled forButtonWithTitle:(NSString *)title;

@property (nonatomic, weak) id <AwesomeFloatingToolbarDelegate> delegate;

@end
