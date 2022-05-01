//
//  HWNavigationBar.h
//  HWTV
//
//  Created by bonjour on 2016/11/1.
//  Copyright © 2016年 yijie. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger , HWNavigateType)
{
    LeftNavigateType ,
    MiddleNavigateType ,
    SettingNavigateType ,
    EditNavigateType ,
};
typedef void(^HWNavigateBlock)(HWNavigateType type);

@interface HWNavigationBar : UIView
@property (nonatomic, strong) UIView *bottomLine;
@property (nonatomic, strong) UIButton *leftButton;
@property (nonatomic, strong) UIButton *middleButton;
@property (nonatomic, strong) UIButton *settingButton;
@property (nonatomic, strong) UIButton *editButton;
@property (nonatomic, weak) UILabel *titleLabel;
@property (nonatomic, weak) UILabel *titleLabel_xib;
@property (nonatomic, strong) HWNavigateBlock hwNavigateAction;
@property (nonatomic, strong) UIImageView *bgView;

- (instancetype)initWithFrame:(CGRect)frame;

- (void)setButtonWithType:(HWNavigateType)type WithImage:(NSString *)image WithContent:(NSString *)content WithClickEnable:(NSInteger)clickEnable;

#pragma mark - xib by jacknan

@property(nonatomic,weak)UIButton *backBtn_xib;
@property(nonatomic,weak)UILabel *xib_title;
@property(nonatomic,weak)UIButton *rightBtn_xib;
@property(nonatomic,weak)UIButton *rightSubBtn_xib; //右侧副按钮
@property(nonatomic,weak)UIImageView *shadowImgView_xib;

- (void)addRightBtnWithTitle:(NSString *)title Image:(UIImage *)image;


#pragma mark - end by jacknan


@end
