//
//  Unexceptionableblessing.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/18.
//  Copyright © 2020 . All rights reserved.
//

#import "Desirousmeter.h"
@class Delugesurgical;
NS_ASSUME_NONNULL_BEGIN

@interface Unexceptionableblessing : Desirousmeter
@property (nonatomic,copy)void(^loginCompleteCallBack)(Delugesurgical * _Nullable user,NSError * _Nullable error);
@property (nonatomic,copy)void(^closePayCallBack)(void);
@property (nonatomic,copy)void(^closeCallBack)(void);
// 防沉迷结果回调
@property (nonatomic,copy)void(^realNameCompeleteCallBack)(BOOL isCancel,NSError * _Nullable error);
@property (nonatomic, assign) BOOL isShowClose;
@end

NS_ASSUME_NONNULL_END
