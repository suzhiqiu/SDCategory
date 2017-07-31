//
//  SystemConstant.h
//  fanhuanwang
//
//  Created by suzq on 2017/5/27.
//  Copyright © 2017年 lgfz. All rights reserved.
//

/*放置系统一些配置信息

各机型分辨率备注
 4s:320x480
 5s:320x568
 6:375x667
 6p:414x736
 
*/


#ifndef SystemConstant_h
#define SystemConstant_h



/*屏幕的宽度*/
#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)
/*屏幕的高度*/
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)
/*状态栏的高度*/
#define STATUSBAR_HIGHT     20
/*扣除状态栏后导航栏的高度*/
#define NAVI_BAR_HIGHT      44
/*导航栏的高度*/
#define NAVBAR_HIGHT        64
/*tabbar的高度*/
#define TABBAR_HIGHT        49
/*分割线的高度*/
#define SEPLINE_HIGHT      0.5
/*按钮默认的标签偏移量*/
#define BTNTAG              100


/*系统屏幕宽度和320的比例*/
#define SCREEN_RATIO        (SCREEN_WIDTH / 320.0f)
/*系统屏幕宽度和375的比例*/
#define SCREEN_RATIO_375    (SCREEN_WIDTH / 375.0f )
/*按320的设计，进行尺寸转换*/
#define SCREEN_By320(x)     ceil(x * SCREEN_RATIO)
/*按375的设计，进行尺寸转换*/
#define SCREEN_By375(x)     ceil(x * SCREEN_RATIO_375)

/*角度转弧度*/
#define DEGREES_TO_RADIANS(d)   ((d) * M_PI / 180.0)
/*弧度转角度*/
#define RADIANS_TO_DEGREES(r)   ((d) * 180.0 / M_PI)


/*获取弱引用self*/
#define WeakSelf(weakSelf)      __weak __typeof(&*self) weakSelf = self;
/*获取强引用self 多次使用self 要用这个*/
#define StrongSelf(strongSelf)  __strong __typeof(&*self) strongSelf = weakSelf;

/*常用的block*/
typedef void(^CompleteBlock)();



#endif /* SystemConstant_h */

