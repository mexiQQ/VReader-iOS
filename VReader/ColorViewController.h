//
//  ColorViewController.h
//  RevealControllerStoryboardExample
//
//  Created by Nick Hodapp on 1/9/13.
//  Copyright (c) 2013 CoDeveloper. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ColorViewController : UIViewController<UIWebViewDelegate>  
@property (weak, nonatomic) IBOutlet UIWebView *myWebView;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *myUIActivityIndicatorView;
@end
