//
//  ViewController.m
//  Flappy Friday
//
//  Created by Friday Fan on 12/30/14.
//  Copyright (c) 2014 Friday Fan. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    
    HightScoreNumber = [[NSUserDefaults standardUserDefaults] integerForKey:@"HighScoreSaved"];
    HighScore.text = [NSString stringWithFormat:@"High Score: %li", (long)HightScoreNumber];
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
