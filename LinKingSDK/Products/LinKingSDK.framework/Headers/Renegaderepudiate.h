//
//  Renegaderepudiate.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/24.
//  Copyright © 2020 . All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Renegaderepudiate : UICollectionView
- (instancetype)initWithFrame:(CGRect)frame;
- (void)reloadDatas:(NSArray *)datas;
@property (nonatomic,copy)void(^selectItemCallBack)(NSInteger index);

@end

NS_ASSUME_NONNULL_END
