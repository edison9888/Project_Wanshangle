//
//  MovieViewController.h
//  WanShangLe
//
//  Created by stephenliu on 13-6-5.
//  Copyright (c) 2013年 stephenliu. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CinemaViewController;

@interface MovieViewController : UIViewController{
    
}
@property(nonatomic,retain)CinemaViewController *cinemaViewController;
@property(nonatomic,retain)UITableView *movieTableView;
@property(nonatomic,retain)NSArray *moviesArray;
@end
