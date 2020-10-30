//
//  LKUserControllerView.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/17.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LKUserControllerView : UIView
@property (weak, nonatomic) IBOutlet UIView *view_icon;
@property (weak, nonatomic) IBOutlet UIImageView *imageView_icon;
@property (weak, nonatomic) IBOutlet UIButton *button_close;
@property (weak, nonatomic) IBOutlet UIImageView *imageView_badge;
@property (weak, nonatomic) IBOutlet UILabel *label_tip;
@property (weak, nonatomic) IBOutlet UILabel *label_id;
@property (weak, nonatomic) IBOutlet UIImageView *imageView_realName;
@property (weak, nonatomic) IBOutlet UIImageView *imageView_message;
@property (weak, nonatomic) IBOutlet UIImageView *imageView_order;
@property (weak, nonatomic) IBOutlet UIImageView *imageView_binding;
@property (weak, nonatomic) IBOutlet UIButton *button_fixIcon;
@property (weak, nonatomic) IBOutlet UIButton *button_change_account;
@property(nonatomic, copy)void(^closeViewAction)(UIButton *sender);
@property(nonatomic, copy)void(^fixIconAction)(UIButton *sender);
@property(nonatomic, copy)void(^selectItemAction)(UIButton *sender);
@property(nonatomic, copy)void(^changeAccountAction)(UIButton *sender);
@property (weak, nonatomic) IBOutlet UIView *view_msg_circle;

+ (instancetype)instanceUserControllerView;
@end

NS_ASSUME_NONNULL_END
