//
//  CYLPlusButtonSubclass.h
//  DWCustomTabBarDemo
//
//  Created by 微博@iOS程序犭袁 ( http://weibo.com/luohanchenyilong/ ) on 15/10/24.
//  Copyright (c) 2015年 https://github.com/ChenYilong . All rights reserved.
//

#import "CYLPlusButton.h"

@protocol SeletTypeDelegate <NSObject>
- (void)theSelectTypeIs;
@end


@interface CYLPlusButtonSubclass : CYLPlusButton <CYLPlusButtonSubclassing>
@property (nonatomic) id<SeletTypeDelegate> delegate;
@end
