//
//  UITableView+SDCategory.h
//  fanhuanwang
//
//  Created by suzq on 2017/6/12.
//  Copyright © 2017年 lgfz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITableView (SDCategory)


/*设置分割线从顶端开始 放在viewDidLayoutSubviews 两个要一起放才有效果*/
-(void)sd_SetSeparatorInsetZero;
/*设置分割线从顶端开始 放在willDisplayCell */
-(void)sd_SetCellSeparatorInsetZero:(UITableViewCell *)cell;

@end
