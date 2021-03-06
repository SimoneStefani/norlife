//
//  LocationDataManager.h
//  Norlife
//
//  Created by Ryan D'souza on 11/24/17.
//  Copyright © 2017 Ryan D'souza. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Constants.h"

static NSString *DRIVING_COLLECTION_NAME = @"norlife.driving";
static NSString *SITTING_COLLECTION_NAME = @"norlife.sitting";

@interface LocationDataManager : NSObject

+ (instancetype) instance;

- (void) beginLocationTracking;

@end
