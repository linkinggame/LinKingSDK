//
//  Instinctivepaddle.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/24.
//  Copyright © 2020 . All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Instinctivepaddle : UITableView
- (void)reloadData:(NSArray *)data;
@property (nonatomic, copy)void(^selectItemCallBack)(NSDictionary * _Nullable dict,NSInteger index);
@end

NS_ASSUME_NONNULL_END
