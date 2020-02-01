//
//  City.h
//  iCity
//
//  Created by Paul Beavers on 1/31/20.
//  Copyright © 2020 Paul Beavers. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface City : NSObject
{
    NSString * cityName;
}

@property (strong, nonatomic) NSString * cityName;

@end

NS_ASSUME_NONNULL_END
