//
//  DetailViewController.h
//  iCity
//
//  Created by Paul Beavers on 1/31/20.
//  Copyright © 2020 Paul Beavers. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

