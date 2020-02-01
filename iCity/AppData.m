//
//  AppData.m
//  iCity
//
//  Created by Paul Beavers on 1/31/20.
//  Copyright © 2020 Paul Beavers. All rights reserved.
//

#import "AppData.h"
#import "City.h"

@implementation AppData

-(id)init
{
    CityTable = [[NSMutableArray alloc] initWithCapacity:100];

    City * city = [[City alloc] init];
    city.cityName = @"Austin";
    [CityTable addObject:city];
    
    city = [[City alloc] init];
    city.cityName = @"Houston";
    [CityTable addObject:city];
    
    city = [[City alloc] init];
    city.cityName = @"Boston";
    [CityTable addObject:city];
    
    city = [[City alloc] init];
    city.cityName = @"Amsterdam";
    [CityTable addObject:city];
    
    
    return self;
}

@end
