//
//  ViewController.h
//  CrystalBall
//
//  Created by Kevin Horek on 13-01-01.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    
}

@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;

@property (strong, nonatomic) NSArray *predictionArray;

@property (strong, nonatomic) UIImageView *imageView;


- (void) makePrediction;

@end
