//
//  DetailViewController.h
//  WebAcademyDiploma
//
//  Created by Ocotober Hammer on 4/7/15.
//  Copyright (c) 2015 Ocotober Hammer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

