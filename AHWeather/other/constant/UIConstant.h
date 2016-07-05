//
//  UIConstant.h
//  weather
//
//  Created by aaaa on 16/6/27.
//  Copyright © 2016年 AiHua Technology Co.,Ltd. All rights reserved.
//

/**
 *  @author AiHuaLiu, 16-06-27 23:06:24
 *
 *  UI宏的定义
 *
 */
#ifndef UIConstant_h
#define UIConstant_h

// ***************** 尺寸 **********************************

#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_RETINA ([[UIScreen mainScreen] scale] >= 2.0)

#define kSCREEN_BOUNDS ([UIScreen mainScreen].bounds)
#define kSCREEN_WIDTH ([[UIScreen mainScreen] bounds].size.width)
#define kSCREEN_HEIGHT ([[UIScreen mainScreen] bounds].size.height)
#define kSCREEN_MAX_LENGTH (MAX(kSCREEN_WIDTH, kSCREEN_HEIGHT))
#define kSCREEN_MIN_LENGTH (MIN(kSCREEN_WIDTH, kSCREEN_HEIGHT))

#define IS_IPHONE_4_OR_LESS (IS_IPHONE && kSCREEN_MAX_LENGTH < 568.0)
#define IS_IPHONE_5 (IS_IPHONE && kSCREEN_MAX_LENGTH == 568.0)
#define IS_IPHONE_6 (IS_IPHONE && kSCREEN_MAX_LENGTH == 667.0)
#define IS_IPHONE_6P (IS_IPHONE && kSCREEN_MAX_LENGTH == 736.0)


#define kStatusBarHeight 20.0
#define kNavBarHeight 64.0
#define kTabbarHeight 49.0

// ***************** 定义font的size *************************
#define HSFontSize(size) [UIFont systemFontOfSize:(size)]
#define HSFontSizeBlod(size) [UIFont boldSystemFontOfSize:(size)]

// ***************** 颜色 ***********************************
#define HSRGBACOLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)]
#define HSRGB(r, g, b) HSRGBACOLOR(r, g, b, 1.0f)

// 16进制色值参数转换
#define HSUIColorFromRGB(rgbValue) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

// 全局
#define HSNavBgColor HSRGB(34, 172, 57)
#define HSMainlColor HSRGB(51,199,116) // 全局主色调
#define HSMainlColorFrosted HSMainlColor  // 磨砂效果
#define HSBackgroundColor HSRGB(242,242,242) //全局背景色
#define HSContraColor HSRGB(254,145,146)  // 本项目通用粉红色

#define kProjectIconTitColor HSRGB(60, 198, 119)   // 项目图标绿色

// 常用黑色
#define kColorBlackPercent80 HSRGB(54, 54, 54)
#define kColorBlackPercent60 HSRGB(103, 103, 103)
#define kColorBlackPercent40 HSRGB(150, 150, 150)
#define kColorBlackPercent20 HSRGB(196, 196, 196)
#define kColorBlackPercent10 HSRGB(246, 246, 246)

//常用文本字符串颜色
#define kColorBlackForText HSRGBACOLOR(92, 92, 92, 1);


//常用红色
#define kColortRed HSRGBACOLOR(255, 131, 131, 1)

// UINavBar
#define kNavBarTitleFontSize [UIFont boldSystemFontOfSize:20]
#define kNavBarTitleFontColor [UIColor whiteColor]

#define kNavBarItemFontSize HSFontSize(17.0)
#define kNavBarItemFontColorNormal [UIColor whiteColor]
#define kNavBarItemFontColorSelected [UIColor lightGrayColor]

#define kNavBarLeftItemButtonContentEdgeInsets UIEdgeInsetsMake(0, 0, 0, 0)
#define kNavBarLeftItemButtonTitleColorNormal [UIColor blackColor]
#define kNavBarLeftItemButtonTitleColorSelected [UIColor redColor]

#define kNavBarRightItemButtonContentEdgeInsets UIEdgeInsetsMake(0, 0, 0, 0)

// UITabBar
#define kTabBarItemFontSize HSFontSize(12.0)
#define kTabBarItemFontColorNormal HSRGBACOLOR(165, 165, 171, 1)
#define kTabBarItemFontColorSelected HSRGBACOLOR(47, 192, 97, 1)

// 键盘
#define kKeyboardToolBarHeight 44.0 // 键盘辅助工具条

// 搜索
#define kSearchBarBgImage [UIImage imageNamed:@"bg_serch"]
#define kSearchIconImage [UIImage imageNamed:@"search"]

// 输入文本框
#define kFieldBorderColor HSMainlColor.CGColor
#define kFieldBorderWidth 0.8
// ***************** 动画持续时间 **********************************
#define kAnimateDuration 0.35

// ***************** logo **********************************
#define kLogoForHS [UIImage imageNamed:@"logo"]

// ***************** 占位图 **********************************
// 头像占位图
#define kPlaceholderHS [UIImage imageNamed:@"icon_Placeholder_HS"]
#define kPlaceholder30_30 [UIImage imageNamed:@"icon_Placeholder30_30"]



// ***************** 辅助图 **********************************
#define kAssistAvatorMask [UIImage imageNamed:@"avatorMask"]
#define kAssistAvatorMask_h [UIImage imageNamed:@"avatorMask_h"]

// ***************** 线条 ***********************************
#define kDefaultLineHeight 1.0
#define kDefaultLineColor HSRGB(242, 242, 242)
#define kDefaultLightLineColor HSRGB(229, 229, 229)
#define kDefaultDarkLineColor HSRGB(204, 204, 204)

#endif /* UIConstant_h */
