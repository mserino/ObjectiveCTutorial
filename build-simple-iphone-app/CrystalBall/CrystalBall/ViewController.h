//
//  ViewController.h
//  CrystalBall
//
//  Created by Margherita Serino on 07/12/2014.
//  Copyright (c) 2014 Margherita Serino. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) NSArray *predictions;
- (IBAction)buttonPressed;

@end

