//
//  UIWebView+SDCategory.m
//  fanhuanwang
//
//  Created by suzq on 2017/5/22.
//  Copyright © 2017年 lgfz. All rights reserved.
//

#import "UIWebView+SDCategory.h"

@implementation UIWebView (SDCategory)

//获取UserAgent
-(NSString *)sd_getUserAgent
{
   return [self stringByEvaluatingJavaScriptFromString:@"navigator.userAgent"];
}


//设置UserAgent
-(void)sd_setUserAgent:(NSString *)finalAgent
{
//    if(!ISVALIDSTR(finalAgent))
//    {
//        return;
//    }
    NSDictionary *dictionary = [NSDictionary dictionaryWithObjectsAndKeys:finalAgent, @"UserAgent", nil];
    [[NSUserDefaults standardUserDefaults] registerDefaults:dictionary];
}





@end
