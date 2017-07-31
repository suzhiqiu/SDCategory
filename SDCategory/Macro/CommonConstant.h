//
//  Macros.h
//  ShenHua
//
//  Created by suzhiqiu on 15/7/5.
//  Copyright (c) 2015年 suzhiqiu. All rights reserved.
//

#ifndef CommonConstant_h
#define CommonConstant_h



#define ISVALID(VALUE)          ([FHWServiceManager isValidObject:VALUE])              //判断是否为空
#define ISVALIDSTR(VALUE)       ([FHWServiceManager isValidString:VALUE])              //判断有效字符串 而且 长度>0
#define ISVALIDARRAY(VALUE)     ([FHWServiceManager isValidArray:VALUE])               //判断有效数组   而且 长度>0
#define ISVALIDDIC(VALUE)       ([FHWServiceManager isValidDic:VALUE])                 //判断有效字典   而且 长度>0
#define REMOVENILSTR(VALUE)     (VALUE=([FHWServiceManager removeNilString:VALUE]))    //判断是否为空
#define SD_FF_OPTIONS           (SDWebImageRetryFailed|SDWebImageLowPriority)          //1.失败重试 2.滚动的时候也可以下载
#define kFiveVCDelegate         ((FHWNineHomeViewController *)(self.delegate))         //原生9块9代理
#define kWorthBuyVCDelegate     ((FHWWorthBuyViewController *)(self.delegate))         //首页代理 

#define kWorthBuyFenLeiAxisHeight  40                                                  //首页的分类轴高度
#define kNineNineFenLeiAxisHeight  SCREEN_By375(60)                                    //99的分类轴高度

#endif
