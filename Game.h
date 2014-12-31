//
//  Game.h
//  Flappy Friday
//
//  Created by Friday Fan on 12/30/14.
//  Copyright (c) 2014 Friday Fan. All rights reserved.
//

#import <UIKit/UIKit.h>

int BirdFlight;
int RandomTopTunnelPosition;
int RandomBottomTunnelPosition;
int ScoreNumber;
NSInteger HighScoreNumber;

@interface Game : UIViewController
{
    IBOutlet UIImageView *Bird;
    IBOutlet UIButton * StartGame;
    
    IBOutlet UIImageView *TunnelTop;
    IBOutlet UIImageView *TunnelBottom;
    
    IBOutlet UIImageView *Top;
    IBOutlet UIImageView *Bottom;
    
    IBOutlet UIButton *Exit;
    IBOutlet UILabel *ScoreLabel;
    
    NSTimer *BirdMovement;
    NSTimer *TunnelMovement;
    NSTimer *BirdDrop;
    
}


- (IBAction)StartGame:(id)sender;
- (void)BirdMoving;
- (void)TunnelMoving;
- (void)PlaceTunnels;
- (void)Score;
- (void)GameOver;
@end

