//
//  UIWebView+SDCategory.h
//  fanhuanwang
//
//  Created by suzq on 2017/5/22.
//  Copyright © 2017年 lgfz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIWebView (SDCategory)


//获取UserAgent
-(NSString *)sd_getUserAgent;

//设置UserAgent
-(void)sd_setUserAgent:(NSString *)finalAgent;

@end
