//
//  Constants.h
//  Norlife
//
//  Created by Ryan D'souza on 11/24/17.
//  Copyright © 2017 Ryan D'souza. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

#import "SOMotionDetector.h"
#import "SOStepDetector.h"
#import "SOLocationManager.h"


@interface Constants : NSObject

+ (instancetype) instance;

+ (CLLocationManager*) getLocationManager;

@end
