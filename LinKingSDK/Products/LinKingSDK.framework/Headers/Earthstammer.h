//
//  Earthstammer.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/18.
//  Copyright © 2020 . All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Earthstammer : UIView
@property (nonatomic, copy)void(^closeAlterViewCallBack)(void);
@property (nonatomic, copy)void(^quickGameCallBack)(void);
@property (nonatomic, copy)void(^bindingAcccountCallBack)(void);
+ (instancetype)instanceBindingAccountTipView;
@end

NS_ASSUME_NONNULL_END
