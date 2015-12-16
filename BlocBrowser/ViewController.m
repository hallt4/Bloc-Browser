//
//  ViewController.m
//  BlocBrowser
//
//  Created by Tyler Hall on 12/12/15.
//  Copyright © 2015 bloc. All rights reserved.
//

#import "ViewController.h"
#import <WebKit/WebKit.h>

@interface ViewController () <WKNavigationDelegate>

@property (nonatomic, strong) WKWebView *webView;

@end

@implementation ViewController

- (void)loadView {
    UIView *mainView = [UIView new];
    
    
    self.webView = [[WKWebView alloc] init];
    self.webView.navigationDelegate = self;
    
    [mainView addSubview:self.webView];
    self.view = mainView;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

-(void)viewWillLayoutSubviews {
    [super viewWillLayoutSubviews];
    
    //web view to fill mainScreen
    self.webView.frame = self.view.frame;
}


@end
