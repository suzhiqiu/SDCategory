//
//  EnumConstant.h
//  SuningEBuy
//
//  Created by  liukun on 13-11-26.
//  Copyright (c) 2013年 Suning. All rights reserved.
//

#ifndef DefineConstant_h
#define DefineConstant_h

/* 首页，九块九tableview展示模式 */
#define bigPicModel_cellTag  103                            //大图模式
#define listPicModel_cellTag  104                           //普通列表模式
#define leftViewTag  101                                    //小图模式左侧
#define rightViewTag  102                                   //小图模式右侧

/* 首页banner */
#define vFlagY 7
#define tagCloudW 90                           //标签云宽度
#define tagCloudH 34                           //标签云高度
#define tagCloudGap 10                         //标签云距左右屏幕的间距
#define tagCloudClearance 6                    //标签云内部
#define tagCloudBannerHeight 96                //标签云默认的高度
#define gapBetweenTagClouds 8                  //banner的间隙



#define disPlayShareButton 10001                //不显示分享按钮
#define LIST_DEFAULT_IMAGE    @"default_liebiao"                                          //列表默认图片

#define Home_moduleCode       @"haohuo2"            //首页菜单栏频道标识改为haohuo1 ，新增5.0.0版本
#define Tab_NineDollarsNine   @"jiukuaijiu"          //Tab九块九模块名和渠道变更标识

#define ERRORPAGE_BACKGROUND                 [UIColor whiteColor]                         //出错页面背景色

//=======通用搜索框配置  cornerRadius
#define KEY_ENABLETOPSEARCHBAR               @"enableTopSearchBar"                        //url链接带有这个 就是开启通用搜索框
#define KEYEQUAL_ENABLETOPSEARCHBAR          @"enableTopSearchBar="                       //url链接带有这个 就是开启通用搜索框
#define SERARHBAR_MARGIN                     15                                           //搜索栏距离屏幕的间距
#define SEARCHBAR_HEIGHT                     31                                           //搜索栏的高度
#define SEARCHBAR_CORNERRADIUS               4                                            //圆角幅度
#define SEARCHBAR_BACKGROUND                 UIColorFromRGB(0xf2f2f2)                     //搜索栏背景色
#define SEARCHBAR_PLACEHOLDER_FONT           [UIFont systemFontOfSize:14]                 //搜索栏占位文案的字体大小
#define SEARCHBAR_PLACEHOLDER_TEXTCOLOR      UIColorFromRGB(0xaaaaaa)                     //搜索栏占位文案的字体颜色
#define SEARCHBAR_CONTNET_FONT               [UIFont systemFontOfSize:14]                 //搜索栏内容文案的字体大小
#define SEARCHBAR_CONTNET_TEXTCOLOR          UIColorFromRGB(0x333333)                     //搜索栏内容文案的字体颜色

//=======网络配置
#define ERROR_NETWORK_TIP                    @"网络不可用，请检查网络是否连接"                  //错误网络提示
#define ERROR_NETWORK_TRY                    @"连接失败，检查网络再试试"                       //网络有连接 通过代理

/** 搜索落地页分类 */
#define kSEARCH_CATEGORY       @[@"全部",@"搜券",@"9块9包邮"]


#endif
