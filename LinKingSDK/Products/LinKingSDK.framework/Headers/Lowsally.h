//
//  Lowsally.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/16.
//  Copyright © 2020 . All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Lowsally : UIView
@property (weak, nonatomic) IBOutlet UITextField *textfield_iphone;
@property (weak, nonatomic) IBOutlet UITextField *textfield_code;
@property (weak, nonatomic) IBOutlet UITextField *textfield_newPassword;
@property (weak, nonatomic) IBOutlet UITextField *textfield_surePassword;
@property (weak, nonatomic) IBOutlet UIButton *button_sureFix;
@property (weak, nonatomic) IBOutlet UIButton *button_getCode;
@property(nonatomic, copy)void(^getCheckCodeAction)(UIButton *sender);
@property(nonatomic, copy)void(^Foremostbusinessman)(UIButton *sender);
@property(nonatomic, copy)void(^closeView)(UIButton *sender);
@property(nonatomic, copy)void(^PrevalencewaterCallBack)(UIButton *sender);
+ (instancetype)instanceRestPasswordView;
- (void)setLKSuperView:(UIView *)superView;
@end

NS_ASSUME_NONNULL_END
