//
//  Sitadventitious.h
//  LinKingSDK
//
//  Created by leoan on 2020/8/11.
//  Copyright © 2020 . All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Sitadventitious : UIView
+ (instancetype)instanceRegisterView;
@property (nonatomic, copy)void(^closeAlterViewCallBack)(void);
@property (nonatomic, copy)void(^skipCallBack)(void);
@property (nonatomic, copy)void(^registerCallBack)(void);

@end

NS_ASSUME_NONNULL_END
