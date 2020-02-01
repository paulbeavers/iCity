//
//  CustomCellTableViewCell.h
//  iCity
//
//  Created by Paul Beavers on 1/31/20.
//  Copyright © 2020 Paul Beavers. All rights reserved.
//


#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface CustomCellTableViewCell : UITableViewCell
{
    
    UILabel * cityDescription;
    UILabel * cityName;
}

@property (nonatomic, weak) IBOutlet UILabel *cityDescription;
@property (nonatomic, weak) IBOutlet UILabel *cityName;


@end

NS_ASSUME_NONNULL_END
