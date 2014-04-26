//
//  ViewController.h
//  LOCATION MANAGER
//
//  Created by student1 on 4/26/14.
//  Copyright (c) 2014 student1. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface ViewController : UIViewController<CLLocationManagerDelegate>{
    IBOutlet UITextView *textView;
    CLLocationManager *locationManager;
    NSUInteger noUpdates;
}

@end
