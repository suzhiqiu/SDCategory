//
//  UITableView+SDCategory.m
//  fanhuanwang
//
//  Created by suzq on 2017/6/12.
//  Copyright © 2017年 lgfz. All rights reserved.
//

#import "UITableView+SDCategory.h"

@implementation UITableView (SDCategory)


/*设置分割线从顶端开始 放在viewDidLayoutSubviews */
-(void)sd_SetSeparatorInsetZero
{
    if ([self respondsToSelector:@selector(setSeparatorInset:)])
    {
        [self setSeparatorInset:UIEdgeInsetsZero];
    }
    if ([self respondsToSelector:@selector(setLayoutMargins:)])
    {
        [self setLayoutMargins:UIEdgeInsetsZero];
    }
}

/*设置分割线从顶端开始 放在willDisplayCell */
-(void)sd_SetCellSeparatorInsetZero:(UITableViewCell *)cell
{
    if ([cell respondsToSelector:@selector(setSeparatorInset:)])
    {
        [cell setSeparatorInset:UIEdgeInsetsZero];
    }
    if ([cell respondsToSelector:@selector(setLayoutMargins:)])
    {
        [cell setLayoutMargins:UIEdgeInsetsZero];
    }
}


@end
