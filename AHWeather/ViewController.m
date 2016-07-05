//
//  ViewController.m
//  AHWeather
//
//  Created by aaaa on 16/7/5.
//  Copyright © 2016年 AiHua Technology Co.,Ltd. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()
@property (nonatomic, strong) UIImageView *topImageView;//顶部的天气背景图
@property (nonatomic, strong) UIScrollView *bgScrollView;//可滚动背景
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

#pragma mark 懒加载
- (UIImageView *)topImageView{
    if (_topImageView == nil) {
        UIImageView *imageview = [[UIImageView alloc]init];
        imageview.frame = CGRectMake(0, 0, kSCREEN_WIDTH, 344);
        [self.view addSubview:imageview];
        _topImageView = imageview;
    }
    return _topImageView;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
